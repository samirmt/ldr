int LDR = A3;

void setup(){
	Serial.begin(9600); //Inicializa Comunicação Serial
}

void loop(){
  int luz = analogRead(LDR); //Armazena na variavel luz a leitura
  if(luz>500) {            // testa os valores   
    Serial.println("Apagada");
   }
  else {
    Serial.println("Acesa");
  }
	delay(1000);       //aguarda 1 segundo
}


