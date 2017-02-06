/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

int drive_gb = 100;
long drive_mb;


//************************* SETUP *******************************

void setup() {              
  Serial.begin(9600);
  
  Serial.print("Your HD is ");  /*Tu Disco duro es*/
  Serial.print(drive_gb); /*100*/
  Serial.println(" GB large."); /*GB grande*/

  drive_mb = drive_gb;  /*x Megabytes = x Gigabytes*/
  drive_mb = 1024 * drive_mb; /*Megabytes = 1024*100*/

  Serial.print("It can store "); /*puede almacenar*/
  Serial.print(drive_mb); /* 102400 = (1024*100) */
  Serial.println(" Megabytes!");
  
/* drive_mb = drive_gb es una comparació no una operació*/
}

//************************** LOOP *******************************

void loop() {                // inicia el bucle del programa

}

//************************* FUNCIONS ****************************
