/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

int thisByte = 33;

//************************* SETUP *******************************

void setup() 
{              
  Serial.begin(9600); 
  Serial.println("ASCII Table ~ Character Map");

}

//************************** LOOP *******************************

void loop()  // inicia el bucle del programa
{               
  Serial.write(thisByte);    
  
  Serial.print(", dec: "); 
  Serial.print(thisByte);      
  Serial.print(", hex: "); 
  Serial.print(thisByte, HEX);     
  Serial.print(", oct: "); 
  Serial.print(thisByte, OCT);     
  Serial.print(", bin: "); 
  Serial.println(thisByte, BIN);   

  if(thisByte == 126)  // if printed last visible character '~'
  { 
    while(true) /*Un cop arriba a aquesta instrucció es queda permanetment allà*/
    { 
    } 
  } 
  thisByte++;     // go on to the next character
}

//************************* FUNCIONS ****************************
