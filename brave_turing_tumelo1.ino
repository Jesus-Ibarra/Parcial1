//Serial para las 8 filas :7
//Timer de salida para todo: 6
//Serial para asignar la fila: 2
//Timer para asigar la fila:3
//Timer por columna:5



void setup()
{
const int serialFila =2;
const int timerFila =3;
const int timerColumna =5;
const int timerSalida =6;
const int serialColumna =7;
  
  pinMode(timerFila,OUTPUT);
  pinMode(serialFila,OUTPUT);
  pinMode(serialColumna,OUTPUT);
  pinMode(timerColumna,OUTPUT);
  pinMode(timerSalida,OUTPUT);
  
  
  int arr[8][8]={{1,0,0,0,0,0,0,1},{0,1,0,0,0,0,1,0},{0,0,1,0,0,1,0,0},{0,0,0,1,1,0,0,0},
  {0,0,0,1,1,0,0,0},{0,0,1,0,0,1,0,0},{0,1,0,0,0,0,1,0},{1,0,0,0,0,0,0,1}};
  digitalWrite(serialFila,1);
  digitalWrite(timerFila,0);
  digitalWrite(timerFila,1);
  digitalWrite(timerSalida,0);
  digitalWrite(timerSalida,1);
  for(int f = 0;f<=8;f++){
    for(int c = 0;c<=8;c++){
    digitalWrite(timerColumna,0);
  	digitalWrite(timerColumna,1);
  	digitalWrite(serialColumna,arr[f][c]);
  	digitalWrite(timerSalida,0);
  	digitalWrite(timerSalida,1);
      digitalWrite(serialFila,0);
    }
    digitalWrite(serialFila,0);
  digitalWrite(timerFila,0);
  digitalWrite(timerFila,1);
  digitalWrite(timerSalida,0);
  digitalWrite(timerSalida,1);
  }

}

void loop()
{
  
}