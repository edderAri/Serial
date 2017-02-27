/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

float KgCO2m2 = 43.3; /*int en enters i float en decimals*/
//************************* SETUP *******************************

void setup() 
{              
  Serial.begin(9600);     

  if (KgCO2m2 < 6.5 && KgCO2m2 > 3.5)  /*Si el gassos son menors de 6.5 i majors de 3.5*/
  {
    Serial.print("B");   
  } 
  else if(KgCO2m2 < 11.1 && KgCO2m2 > 6.5)
  {
    Serial.print ("C");
  }
  else if (KgCO2m2 < 17.7 && KgCO2m2 > 11.1)  
  {
    Serial.print ("D");
  }
  else if (KgCO2m2 < 38.2 && KgCO2m2 > 17.7)  
  {
    Serial.print ("E");
  }
   else if (KgCO2m2 < 43.2 && KgCO2m2 > 38.2)  
  {
    Serial.print ("F");
  }
   
   else if (KgCO2m2 >= 43.2)  /*major o igual*/
  {
    Serial.print ("G");
  }
  else  /*si no es cumpleix cap condicio anterior*/
  {
    Serial.print ("A");
  }
}


//************************** LOOP *******************************

void loop()  // 
{               

}

//************************* FUNCIONS ****************************
