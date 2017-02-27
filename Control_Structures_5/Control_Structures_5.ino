/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

int sensorReading = 3;
//************************* SETUP *******************************

void setup() 
{              
  Serial.begin(9600);
  Serial.print("The day is "); 
   
  switch (sensorReading) {  /*El switch controla el flux i si troba la variable dins d'un case imprimeix ("")*/
  case 0:    
    Serial.println("dark");
    break;
  case 1:    
    Serial.println("dim");
    break;
  case 2:    
    Serial.println("medium");
    break;
  case 3:
    Serial.println("bright");
    break;
  default:  /*Si la variable no es dins de cap case del switch s'executa el default i imprimeix ("")*/
    Serial.println("... I don't know!!!");
  } 
}


//************************** LOOP *******************************

void loop()  // 
{               

}

//************************* FUNCIONS ****************************
