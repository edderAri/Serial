/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

int test = 32767;



//************************* SETUP *******************************

void setup() {              
  Serial.begin(9600);     //set up Serial library at 9600 bps
  Serial.print("Test value is: ");
  Serial.println(test); /*32767*/

  test = test + 1;  /*32767 + 1*/
 
  Serial.print("Now it is ");
  Serial.println(test); /*-32768*/

/*Las variables firmadas pueden tener un valor positivo o 
negativo, por lo que puede almacenar números negativos.
Las variables sin firmar sólo pueden almacenar números 
positivos.*/


}

//************************** LOOP *******************************

void loop() {                // inicia el bucle del programa

}

//************************* FUNCIONS ****************************
