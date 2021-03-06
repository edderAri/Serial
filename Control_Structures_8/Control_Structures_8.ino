/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

float r1, r2;
float rSerie, rParalel;
//************************* SETUP *******************************

void setup()
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
}







//************************** LOOP *******************************

void loop()  //
{
  while (Serial.available() > 0) {  // LLEGEIX LA RSERIE
    r1 = Serial.parseInt();//
    Serial.print("r1="); // ESCRIU r1 =
    Serial.print(r1); // ESCRIU EL VALOR DE LA r1
    Serial.print("  ohms  "); // ESCRIU ohms

    r2 = Serial.parseInt();
    Serial.print ("r2 = "); // ESCRIU r2 = 
    Serial.print (r2); // ESCRIU EL VALOR DE r2
    Serial.println ("  Ohms  "); // ESCRIU ohms

    if (Serial.read() == '\n') {
      Serial.print ("rSerie = ");
      Serial.print (r1 + r2);
      Serial.print ("  ohms  ");

      Serial.print ("rParalel = "); // Escriu (rParalel = )
      Serial.print ((r1 * r2) / (r1 + r2)); // ESCRIU EL VALOR DE DIVIDIR ELS ()
      Serial.println ("  Ohms  "); // ESCRIU ohms 
      Serial.println (" "); // PASA A SEGUEN LINEA 
      Serial.println ("Entra nous valors per r1 i r2"); // ESCRIU entra nous...
    }
  }
}

//************************* FUNCIONS ****************************
