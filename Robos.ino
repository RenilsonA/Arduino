/*
Pinos (visto de frente)
D3 e D5 - Direito
D6 e D9 - Esquerdo

A3 - Direito
A1 - Esquerdo
A0 - Frontal esquerdo
A2 - Frontal direto
*/

void para(){
  PORTD = PORTD & (1 << PD3);
  PORTD = PORTD & (1 << PD5);
  PORTD = PORTD & (1 << PD6);
  PORTB = PORTB & (1 << PB1);
}

void gira(){

}

void esquerda(){
  PORTD = PORTD & (0 << PD3);
  PORTD = PORTD & (1 << PD5);
  PORTD = PORTD & (0 << PD6);
  PORTB = PORTB & (1 << PB1);
}

void direita(){

}

void frente(){

}

void setup() {
  DDRD = (1 << PD3); // 0 = input e 1 = output
  DDRD = (1 << PD5);
  DDRD = (1 << PD6);
  DDRB = (1 << PB1);
}

void loop() {
  para();
  delay(1000);
  esquerda();
  delay(300);
}
