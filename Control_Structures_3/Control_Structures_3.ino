/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

int tempAigua = 100
;
//************************* SETUP *******************************

void setup() 
{              
  Serial.begin(9600);     

  if (tempAigua > 100)  /*Temp mayor de 100*/
  {
    Serial.print("Aigua bullint");   
  } 
  else if(tempAigua >= 90 && tempAigua < 100) /*Temp mayor igual 90 i inferior 100*/
  {
    Serial.print ("Aigua apunt de bullir");
  }
  else if (tempAigua == 100)  /*Temp igual a 100*/
  {
    Serial.print ("Aigua a 100C");
  }
  else  /*si no es cumpleix cap condicio anterior*/
  {
    Serial.print ("Aigua encara no bull");
  }
}



//************************** LOOP *******************************

void loop()  // 
{               

}

//************************* FUNCIONS ****************************
