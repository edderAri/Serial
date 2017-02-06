/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

int drive_gb = 100;
int drive_mb;


//************************* SETUP *******************************

void setup() {              
  Serial.begin(9600);
  
  Serial.print("Your HD is ");  /*Tu Disco duro es*/
  Serial.print(drive_gb); /*100*/
  Serial.println(" GB large."); /*GB grande*/

  drive_mb = 1024 * drive_gb; /*1024 * 100*/

  Serial.print("It can store "); /*puede almacenar*/
  Serial.print(drive_mb); /* -28672=(1024*5) */
  Serial.println(" Megabytes!");
  /*Los enteros son el tipo de datos principal para el 
almacenamiento de números. En el Arduino Uno (y otras tarjetas
ATMega) un int almacena un valor de 16 bits (2 bytes). Esto produce 
un intervalo de -32.768 a 32.767 .
Int's almacenan números negativos con una técnica llamada 
complemento de 2 matemáticas. El bit más alto, a veces denominado 
bit "signo", indica el número como un número negativo.
El resto de los bits se invierte y se añade 1.
El Arduino se ocupa de tratar con números negativos para usted, 
de modo que las operaciones aritméticas funcionen de forma 
transparente de la manera esperada. Sin embargo, puede haber 
una complicación inesperada al tratar con el operador 
derecho de bitshift.*/
}

//************************** LOOP *******************************

void loop() {                // inicia el bucle del programa

}

//************************* FUNCIONS ****************************
