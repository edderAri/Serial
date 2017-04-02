/****************************************************************
**                                                             **
**                           TÍTOL: Serial                     **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 30/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
int a = 5;
int b = 10;
int c = 20;


//************************* SETUP *******************************

void setup() {               // configura el final de salida
  Serial.begin(9600);   /* Configurar una biblioteca serie a 9600 bps*/
  
  Serial.println("Aqui hay algunas matematicas: ");
    
  Serial.print("a = ");       //escriu a =
  Serial.println(a);          //assigna la variable 5
  Serial.print("b = ");       //escriu b =
  Serial.println(b);          //assigna la variable 10
  Serial.print("c = ");       //escriu c =
  Serial.println(c);          //assigna la variable 20

  Serial.print("a + b = ");   //escriu a+b=
  Serial.println(a + b);      //suma i escriu el resultat 15

  Serial.print("a * c = ");   //escriu a*b=
  Serial.println(a * c);      //multiplica i escriu el resultat 100

  Serial.print("c / b = ");   //escriu c/b=
  Serial.println(c / b);      //divideix i escriu el resultat 2 

  Serial.print("c % b =");    //escriu c%b=
  Serial.println(c % b);      //modul i escriu 0 (no hi ha residuu)

  Serial.print("b - c = ");   //escriu b-c=
  Serial.println(b - c);      //resta i escriu resultat -10
}

//************************** LOOP *******************************

void loop() {                // inicia el bucle del programa

}

//************************* FUNCIONS ****************************
