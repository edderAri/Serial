/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

int tempAigua = 110;
//************************* SETUP *******************************

void setup() 
{              
  Serial.begin(9600);     

  if (tempAigua < 100)
  {
    Serial.print("Aigua encara no vull");
  } 
  else if(tempAigua >= 100)
  {
    Serial.print ("Aigua bullint");
  }
}

//************************** LOOP *******************************

void loop()  // 
{               

}

//************************* FUNCIONS ****************************