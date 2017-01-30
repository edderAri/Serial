/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
int a = 3;
int b = 4;
int h;


//************************* SETUP *******************************

void setup() {               // configura el final de salida
  Serial.begin(9600);   /* Configurar una biblioteca serie a 9600 bps*/
  
  Serial.println("Aqui hay algunas matematicas: ");
    
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  h = sqrt( a*a + b*b );  //h = Arrel cuadrada (a2 + b2)
  
  Serial.print("h = ");
  Serial.println(h);


  
}

//************************** LOOP *******************************

void loop() {                // inicia el bucle del programa

}

//************************* FUNCIONS ****************************
