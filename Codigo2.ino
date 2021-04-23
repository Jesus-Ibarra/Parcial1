const int serFila =2;
const int Rfil =3;
const int Rsalcol =4;
const int RCol =5;
const int RSalfil=6;
int clear[8][8];

void setup(){
  for(int pin = 2; pin<7;pin++){
     pinMode(pin, OUTPUT);
  }
    Serial.begin(9600);
  for(int col=0;col<8;col++){for(int fil=0;fil<8;fil++){clear[col][fil]=0;}}
}


void loop(){
  int mat[8][8];
  for(int col=0;col<8;col++){for(int fil=0;fil<8;fil++){mat[col][fil]=0;}}
  	int op;
  /*------ Menu ------*/
  op = Menu();
  switch(op){
    case(1):{verifi();}
    break;
    
    case(2):{
      imagen(&mat[0][0]);
      iMPatron(mat);
      Serial.println("Presione enter para continuar");
      IngresarDa();
      iMPatron(clear);
    }
    break;
    
    case(3):{publik();}
    break;
  }
  iMPatron(clear);
}




int Menu(){
  int op;
  Serial.println("------ Menu ------");
  Serial.println("1 -> Verificacion de funcionamiento");
  Serial.println("2 -> Ingreso de un patron e impresion del mismo");
  Serial.println("3 -> Impresion de una secuensia de patrones ingresados");
  Serial.println();
  Serial.print("Ingrese su opcion: ");
  op = IngresarDa();
  Serial.println(op);
  return op;
}

void verifi(){
  int patron[8][8];
  for(int col=0;col<8;col++){for(int fil=0;fil<8;fil++){patron[col][fil]=1;}}
  iMPatron(patron);
}

void publik(){
  //falta terminar.
  int p;
  Serial.println("Cuantos patrones desea mostrar");
  p = IngresarDa();

}
 
void imagen(int *arr){
    int i=0;//Columnas
    int j=0;//Filas
    int b=0;//Numero para sacar cada numero como enteros
    int Col=1,Num=0,Div=0,Conter=1,Pos=0,Fin=10;//Variables para
  	Serial.println("ingrese las posiciones que quiera prender de la columna de forma ascendente ");  
  	while (Col!=9){
      
      Serial.print(Col);
      Serial.print("-> ");
      Num = IngresarDa();
      Serial.println(Num);
      for(b=10;;b=b*10){
      	Div=Num/b;  
      	if (Div<1){break;}//Ciclo para saber cuantos numeros ingreso                  
      	Conter++;  
      }
      b=b/10;
    while (Conter>0){
            Pos=Num/b;
            Pos=Pos%Fin;
            while (Pos!=0){
                i=Pos;
                i=i-1;
                *(arr+(8*j)+i)=1;
                Pos=0;
                Conter--;
                b=b/10;
            }

            }
            j++;
            Col++;
            i=0;
            Conter=1;
    }
}

//Funciones Auxiliares

void Pulso(int pin){
  digitalWrite(pin,0);
  digitalWrite(pin,1);
  digitalWrite(pin,0); 
}

void iMPatron(int arreg[8][8]){
  for(int x=0;x<8;x++){
    for(int y = 0;y<8;y++){
      Serial.print(arreg[x][y]);
      digitalWrite(serFila,arreg[y][x]);
      Pulso(Rfil);
      Pulso(RSalfil);
    }
  Serial.println();
  Pulso(RCol);
  Pulso(Rsalcol);
  }
}


int IngresarDa(){
  int ent;
  while(true){
  if(Serial.available()>0){
  	ent= Serial.parseInt();
    break;
  }}
  return ent;
}