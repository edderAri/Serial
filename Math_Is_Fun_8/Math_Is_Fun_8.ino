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
long drive_kb;
long real_drive_mb;
long real_drive_kb;



//************************* SETUP *******************************

void setup() 
{              
  Serial.begin(9600);     //set up Serial library at 9600 bps
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");
  
  drive_mb = drive_gb;
  drive_mb = 1024 * drive_mb;
  drive_kb = 1024 * drive_mb;

  Serial.print("In theory, it can store ");
  Serial.print(drive_mb);
  Serial.print(" Megabytes, ");
  Serial.print(drive_kb);
  Serial.println(" Kilobytes.");

  real_drive_mb = drive_gb;
  real_drive_mb = real_drive_mb * 1000;
  real_drive_kb = real_drive_mb * 1000;
  
  Serial.print("But it really only stores ");
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes, ");
  Serial.print(real_drive_kb);  
  Serial.println(" Kilobytes.");
  
  Serial.print("You are missing ");
  Serial.print(drive_kb - real_drive_kb);  
  Serial.println(" Kilobytes!");
}

//************************** LOOP *******************************

void loop()  // inicia el bucle del programa
{               

}

//************************* FUNCIONS ****************************
