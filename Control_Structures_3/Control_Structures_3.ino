/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

int tempAigua = 100;
//************************* SETUP *******************************

void setup() 
{              
  Serial.begin(9600);     

  if (tempAigua > 100)
  {
    Serial.print("Aigua bullint");
  } 
  else if(tempAigua >= 90) 
  {
    Serial.print ("Aigua apunt de bullir");
  }
  else if (tempAigua < 100)
  {
    Serial.print ("Aigua apunt de bullir");
  }
  else if (tempAigua == 100)
  {
    Serial.print ("Aigua a 100ºC");
  }
  else
  {
    Serial.print ("Aigua encara no bull");
  }
}



//************************** LOOP *******************************

void loop()  // 
{               

}

//************************* FUNCIONS ****************************
