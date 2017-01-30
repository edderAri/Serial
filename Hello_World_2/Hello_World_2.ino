/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************


//************************* SETUP *******************************

void setup() {               // configura el final de salida
  Serial.begin(9600);   /* Configurar una biblioteca serie a 9600 
  bps*/
  
}

//************************** LOOP *******************************

void loop() {                // inicia el bucle del programa
  Serial.print("Hello world!"); /* Hola mundo!*/ 
  delay(1000); /*Repeteix el missatge al minitor cada segon*/
 
}

//************************* FUNCIONS ****************************
