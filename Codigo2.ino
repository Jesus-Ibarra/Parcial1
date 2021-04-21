//Serial para las 8 filas :7
//Timer de salida para todo: 6
//Serial para asignar la fila: 2
//Timer para asigar la fila:3
//Timer por columna:5
int verifi(int arr[8][8]);
void iMPatron(int arreg[8][8]);

const int serFila =2;
const int Rfil =3;
const int Rsalcol =4;
const int RCol =5;
const int RSalfil=6;

int main(){

  // Inicializacion de puertos
  for(int pin = 2; pin<7;pin++){
  	 pinMode(pin, OUTPUT);
  }
  Serial.begin(9600);
  
  
  byte arr[8]={0xFF,0x7F,0x3F,0x1F,0xF,0x7,0x3,0x1};
  byte arr2[8]={0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
  int patron[8][8];
	bool ps =false;
    
  while(true){
    for(int i = 0; i <8;i++){
      for(int bi =0; bi <8;bi++){
        if(ps){patron[i][bi]= GetBit(arr[i],bi);}
        else{patron[i][bi]= GetBit(arr[i],7-bi);}
        Serial.print(patron[i][bi]);
      }
      Serial.println();
    }
    Serial.println();
    iMPatron(patron);

    if(ps){ps=false;}
    else{ps=true;}
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
  	//patrones[patron] = verifi()
  } 
}
void iMPatron(int arreg[8][8]){
  /*
  for(int c=0;c<8;c++){
    for(int f =0; f<8;f++){
      digitalWrite(serFila,arreg[f][c]);
      Pulso(Rfil);
      Pulso(RSalfil);
      
      Serial.print(arreg[f][c]);
      Serial.print(", ");
  }
  
  Serial.println();
  delay(500);
    
  Pulso(RCol);
  Pulso(Rsalcol);
  }
	*/
  for(int x=0;x<8;x++){
    for(int y = 0;y<8;y++){
      digitalWrite(serFila,arreg[y][x]);
      Pulso(Rfil);
      Pulso(RSalfil);
      
    }
  Pulso(RCol);
  Pulso(Rsalcol);

  }
}
void Pulso(int pin){
  digitalWrite(pin,0);
  digitalWrite(pin,1);
  digitalWrite(pin,0); 
}
