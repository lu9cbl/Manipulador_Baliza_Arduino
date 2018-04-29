
// Realizado por LU9CBL - Mat - 21/02/2017
// MENSAJE PARA BALIZA LU7DW:
// VVV de LU7DW/B LU7DW/B LU7DW/B GF05 GF05
// Cada 10 segundos

int ledPin = 13; // LED en el pin digital 13
int cte;
int cteTiempo;
int cteTiempoLargo;
int cteTiempoEspaciado;

void setup() {
  
  // Configura el pin 13 como salida
  pinMode(ledPin, OUTPUT);
  
}

void loop() {
  
  // Declaro la constante de tiempo
  cte = 100;

  // Llamo a la función de la licencia de la baliza
  vvvde(cte);
  lu7dw(cte);
  lu7dw(cte);
  lu7dw(cte);
  gf05(cte);
  gf05(cte);

  //ESPERA ENTRE MENSAJES (10 Segundos == 10000)
  delay(10000);
  
}

void vvvde(int cteTiempo){

  cteTiempoLargo = 3 * cteTiempo;
  cteTiempoEspaciado = 9 * cteTiempo;

  //V
  digitalWrite(ledPin, HIGH);   // activa el LED
  delay(cteTiempo);             // espera el tiempo de constante
  digitalWrite(ledPin, LOW);    // desactiva el LED
  delay(cteTiempo);             // espera el tiempo de constante

  digitalWrite(ledPin, HIGH);   // activa el LED
  delay(cteTiempo);             // espera el tiempo de constante
  digitalWrite(ledPin, LOW);    // desactiva el LED
  delay(cteTiempo);             // espera el tiempo de constante

  digitalWrite(ledPin, HIGH);   // activa el LED
  delay(cteTiempo);             // espera el tiempo de constante
  digitalWrite(ledPin, LOW);    // desactiva el LED
  delay(cteTiempo);             // espera el tiempo de constante

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  delay(cteTiempoLargo);

  //V
  digitalWrite(ledPin, HIGH);   // activa el LED
  delay(cteTiempo);             // espera el tiempo de constante
  digitalWrite(ledPin, LOW);    // desactiva el LED
  delay(cteTiempo);             // espera el tiempo de constante

  digitalWrite(ledPin, HIGH);   // activa el LED
  delay(cteTiempo);             // espera el tiempo de constante
  digitalWrite(ledPin, LOW);    // desactiva el LED
  delay(cteTiempo);             // espera el tiempo de constante

  digitalWrite(ledPin, HIGH);   // activa el LED
  delay(cteTiempo);             // espera el tiempo de constante
  digitalWrite(ledPin, LOW);    // desactiva el LED
  delay(cteTiempo);             // espera el tiempo de constante

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  delay(cteTiempoLargo);

  //V
  digitalWrite(ledPin, HIGH);   // activa el LED
  delay(cteTiempo);             // espera el tiempo de constante
  digitalWrite(ledPin, LOW);    // desactiva el LED
  delay(cteTiempo);             // espera el tiempo de constante

  digitalWrite(ledPin, HIGH);   // activa el LED
  delay(cteTiempo);             // espera el tiempo de constante
  digitalWrite(ledPin, LOW);    // desactiva el LED
  delay(cteTiempo);             // espera el tiempo de constante

  digitalWrite(ledPin, HIGH);   // activa el LED
  delay(cteTiempo);             // espera el tiempo de constante
  digitalWrite(ledPin, LOW);    // desactiva el LED
  delay(cteTiempo);             // espera el tiempo de constante

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  delay(cteTiempoLargo);
  delay(cteTiempoEspaciado);

  //D

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);
  
  delay(cteTiempoLargo);

  //E

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  delay(cteTiempoLargo);
  delay(cteTiempoEspaciado);

}

void lu7dw(int cteTiempo){

  cteTiempoLargo = 3 * cteTiempo;
  cteTiempoEspaciado = 9 * cteTiempo;

  //L
  digitalWrite(ledPin, HIGH);   
  delay(cteTiempo);             
  digitalWrite(ledPin, LOW);    
  delay(cteTiempo);            

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  delay(cteTiempoLargo);
  
  //U
  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  delay(cteTiempoLargo);

  //7

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);
  
  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);
  
  delay(cteTiempoLargo);
  
  //D

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);
  
  delay(cteTiempoLargo);

  //W

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  delay(cteTiempoLargo);

// "/"

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  delay(cteTiempoLargo);

  //B

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);
  
  delay(cteTiempoLargo);
  delay(cteTiempoEspaciado);

}

void gf05(int cteTiempo){

  cteTiempoLargo = 3 * cteTiempo;
  cteTiempoEspaciado = 9 * cteTiempo;

  //G
  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);   
  delay(cteTiempo);             
  digitalWrite(ledPin, LOW);    
  delay(cteTiempo);             

  delay(cteTiempoLargo);
  
  //F
  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);
  
  delay(cteTiempoLargo);

  //0

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempoLargo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  delay(cteTiempoLargo);
  
  //5
  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  digitalWrite(ledPin, HIGH);
  delay(cteTiempo);
  digitalWrite(ledPin, LOW);
  delay(cteTiempo);

  delay(cteTiempoLargo);
  delay(cteTiempoEspaciado);
  
}
