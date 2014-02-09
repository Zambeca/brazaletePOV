
#define CANTIDAD_ELEMENTOS(x) (sizeof (x) / sizeof (*(x)))

int zambeca[] = {
  1,1,0,0,1, //Z
  1,0,1,0,1,
  1,0,0,1,1,
  0,0,0,0,0,

  1,1,1,1,1, //a
  0,0,1,0,1,
  1,1,1,1,1,
  0,0,0,0,0,

  
  1,1,1,1,1, //m
  0,0,0,1,0,
  0,0,1,0,0,
  0,0,0,1,0,
  1,1,1,1,1,
  0,0,0,0,0,

  1,1,1,1,1, //b
  1,0,1,0,0,
  1,1,1,0,0,
  0,0,0,0,0,

  1,1,1,1,1, //e
  1,0,1,0,1,
  1,0,1,0,1,
  0,0,0,0,0,
  
  1,1,1,1,1, //c
  1,0,0,0,1,
  1,0,0,0,1,
  0,0,0,0,0,

  1,1,1,1,1, //a
  0,0,1,0,1,
  1,1,1,1,1,
  0,0,0,0,0
};


int ledArray[5] = {5,6,16,18,17};
int delayColumna;
int sizeWord = 0;

void setup() { 
  for(int i = 0; i < 5; i++){
    pinMode(ledArray[i],OUTPUT);
  }

  delayColumna = 3.5; //3.5 milisegundos
  sizeWord = CANTIDAD_ELEMENTOS(zambeca);
}

void printWord(int wordVar[]) {


  int numRows = sizeWord/5;
  for(int j = 0; j < numRows; j++) {
    for(int i = 0; i<5; i++) {
      digitalWrite(ledArray[i], wordVar[i+j*5]);
    }
    delay(delayColumna);
  }
} 

void loop()
{
  printWord(zambeca);
  delay(8); 
}


