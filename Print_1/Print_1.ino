/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

int num = 64;

//************************* SETUP *******************************

void setup() 
{              
  Serial.begin(9600);    // 

  Serial.println("Different formats for the same number:");

  Serial.write(num);
  Serial.println();   
  
  /*El Write tradaueix el num a la taula ASCII.*/
  
  Serial.println(num);
  Serial.println(num,DEC);
  
  Serial.println(num,BIN);
  
  Serial.println(num,HEX);
  
  Serial.println(num,OCT);

}

//************************** LOOP *******************************

void loop()  // inicia el bucle del programa
{               

}

//************************* FUNCIONS ****************************
