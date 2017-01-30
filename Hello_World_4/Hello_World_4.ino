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
  Serial.println("Escull el numero de l'operacio que vols realitzar?");  
  Serial.println("  1. Comprovar numero de tarjeta de credit");
  Serial.println("  2. Comprovar numero de compte bancari");
  Serial.println("  3. Buscar un digit perdut de tarjeta de credit");
  /*Aquests missatjes surten en vertical*/
}

//************************** LOOP *******************************

void loop() {                // inicia el bucle del programa

}

//************************* FUNCIONS ****************************
