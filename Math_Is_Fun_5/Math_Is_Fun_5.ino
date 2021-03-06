/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

long drive_gb = 100;
long drive_mb;


//************************* SETUP *******************************

void setup() {              
  Serial.begin(9600);
  
  Serial.print("Your HD is ");  /*Tu Disco duro es*/
  Serial.print(drive_gb); /*100*/
  Serial.println(" GB large."); /*GB grande*/

  drive_mb = 1024 * drive_gb; /*1024 * 100*/

  Serial.print("It can store "); /*puede almacenar*/
  Serial.print(drive_mb); /* 102400=(1024*100) */
  Serial.println(" Megabytes!");
  
/*Las variables largas son variables de tamaño extendidas para 
el almacenamiento de números y almacenan 32 bits (4 bytes), 
de -2.147.483.648 a 2.147.483.647.
Si hace matemáticas con enteros, al menos uno de los números debe 
ser seguido por un L, forzándolo a ser un largo.*/
}

//************************** LOOP *******************************

void loop() {                // inicia el bucle del programa

}

//************************* FUNCIONS ****************************
