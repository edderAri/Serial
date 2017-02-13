/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

float a = 3;
float b = 2;
float d;


//************************* SETUP *******************************

void setup() 
{              
  Serial.begin(9600);      // set up Serial library at 9600 bps

  Serial.println("Here is division: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  
  d = a / b;
 
  Serial.print("a / b = ");
  Serial.println(d);

  /*Hem d'utilitzar el float en comptes del int a les variables, float utilitza decimals*/

}

//************************** LOOP *******************************

void loop()  // inicia el bucle del programa
{               

}

//************************* FUNCIONS ****************************
