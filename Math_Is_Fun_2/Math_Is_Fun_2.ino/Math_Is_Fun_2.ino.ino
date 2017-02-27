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

void setup() {              
  Serial.begin(9600);
  
  Serial.println("Lets calculate a hypoteneuse");

  Serial.print("a = ");
  Serial.println(a);

  Serial.print("b = ");
  Serial.println(b);
  h = sqrt( a*a + b*b );

  Serial.print("h = ");
  Serial.println(h);
}

//************************** LOOP *******************************

void loop() {                // inicia el bucle del programa

}





//************************* FUNCIONS ****************************
