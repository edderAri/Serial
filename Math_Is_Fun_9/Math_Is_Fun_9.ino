/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

int a = 3;
int b = 2;
int d;


//************************* SETUP *******************************

void setup() 
{              
  Serial.begin(9600);      
  
  Serial.println("Here is division: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
 
  d = a / b;
 
  Serial.print("a / b = ");
  Serial.println(d);
  /*No podem treballar amb decimals si utilitzem int a les variables*/
}

//************************** LOOP *******************************

void loop()  // inicia el bucle del programa
{               

}

//************************* FUNCIONS ****************************
