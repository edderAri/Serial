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
    
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");   //add
  Serial.println(a + b);

  Serial.print("a * c = ");   //multiply
  Serial.println(a * c);

  Serial.print("c / b = ");   //divide
  Serial.println(c / b);

  Serial.print("c % b = ");   //module decimals en aquests cas no hi han
  Serial.println(c % b);

  Serial.print("b - c ");   //subtract
  Serial.println(b - c); 
}

//************************** LOOP *******************************

void loop() {                // inicia el bucle del programa

}

//************************* FUNCIONS ****************************
