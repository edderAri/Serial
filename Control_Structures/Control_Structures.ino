/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

int tempAigua = 90;
//************************* SETUP *******************************

void setup() 
{              
  Serial.begin(9600);     

  if ( tempAigua > 100) /*Només s'imprimeix el missatge si la temperatura supera els 100 ºC*/
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 

}

//************************** LOOP *******************************

void loop()  // 
{               

}

//************************* FUNCIONS ****************************
