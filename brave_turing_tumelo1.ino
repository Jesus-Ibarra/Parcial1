//Serial para las 8 filas :7
//Timer de salida para todo: 6
//Serial para asignar la fila: 2
//Timer para asigar la fila:3
//Timer por columna:5

int main(){
const int serialFila =2;
const int timerFila =3;
const int timerColumna =5;
const int timerSalida =6;
const int serialColumna =7;
const int reset = 4;
  // Inicializacion de puertos
  for(int pin = 2; pin<8;pin++){
  	 pinMode(pin, OUTPUT);
  }
  Serial.begin(9600);
  
  
  byte arr[8]={0xFF,0x7F,0x3F,0x1F,0xF,0x7,0x3,0x1};
  
  
  while(true){
    for(int x =0;  x<7; x++){
      byte temp = arr[x+1];
      arr[x+1]=arr[x];	
    }
    //Serial.println(arr);
  }
}
bool GetBit( byte N, int pos)
   {                 // pos = 7 6 5 4 3 2 1 0
       int b = N >> pos ;         // Shift bits
       b = b & 1 ;                // coger solo el ultimo bit
       return b ;
   }
int verifi(int arr[8][8]){

    int i=0;
    int j=0;
    for (int i=0; i<8; i++){//Recorre todas las posiciones de las filas
        for (int j=0;j<8;j++){  //Recorre todas las posiciones de las columnas
            	//cout<<"Digite un numero ["<<f<<"]["<<c<<"] :";
            	//cin>>arreg[f][c];
            }
        }
    for (int i=0;i<8;i++){ //Imprime la matriz con los led prendidos
        for(int j=0;j<8;j++){
            //cout<<arr[i][j];
        }
        //cout<<'\n';
    }
    return arr[i][j];
}

void publik(){
//# p
  int p;
  int patrones[p][8][8];
  //Ingreso por el serial
  for (int patron = 0;patron <p;p++){
  	patrones[patron] = verif()
  } 
}
void IMPatron(arreg[8][8]);
 	digitalWrite(reset,1);
    digitalWrite(serialFila,1);
  	digitalWrite(timerFila,0);
  	digitalWrite(timerFila,1);
  	digitalWrite(timerSalida,0);
  	digitalWrite(timerSalida,1);   
    for(int f=0;f<8;f++){    	
        for(int c=0;c<8;c++){
        	digitalWrite(serialColumna,arr[f][c]);
      		digitalWrite(timerColumna,0);
  			digitalWrite(timerColumna,1);
  			digitalWrite(timerSalida,0);
      		digitalWrite(timerSalida,1);
        }
        digitalWrite(serialFila,0);
  		digitalWrite(timerFila,0);
 		digitalWrite(timerFila,1);
  		digitalWrite(timerSalida,0);
  		digitalWrite(timerSalida,1);
    }

