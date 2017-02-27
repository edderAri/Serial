/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

int comptar = 11;
//************************* SETUP *******************************

void setup()
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i = 0; i <= comptar; i++)  /*Incrementa (i++) del 0 (i=0) al valor de la variable (<= comptar)*/
  {
    Serial.print(i); /*imprimeix el valor de i cada cop que torna a fer el bucle*/
    Serial.print("-"); /*imprimeix el - cada cop que torna a fer el bucle*/
  }
}




//************************** LOOP *******************************

void loop()  //
{

}

//************************* FUNCIONS ****************************
