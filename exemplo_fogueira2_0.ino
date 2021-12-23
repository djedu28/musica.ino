/* 
  Fogueira v2.0 - Asa branca (Projeto Completo)

  Conecte o buzzer no pino 11
  Conecte os LEDs no pino 2,3,4,5
  OU modifique os pinos abaixo

  Código feito por DjEdu28 (Luis Eduardo) e inspirado em:
             https://github.com/robsoncouto/arduino-songs                                                                                        
                                       Robson Couto, 2019
  Projeto do marco 3 de Jupiter
  Plataforma: https://inovonline.vercel.app

  Simule este projeto no WOKWI.com

* Projeto completo:
  https://wokwi.com/arduino/projects/311106072082383424

* Projeto Base:
  https://wokwi.com/arduino/projects/318278352284680770


*/
// mude para o pino do buzzer que deseja usar
#define pino_buzzer 11
// mude ou adicione o pino dos LEDs
#define pino_led1  2
#define pino_led2  3
#define pino_led3  4
#define pino_led4  5

// mude isso para tornar a música mais lenta ou mais rápida 120 é a velocidade normal
int tempo = 120; // unidade em BPM (Batidas Por Minuto)


void setup() {
  Serial.begin(9600);
  
  pinMode(pino_led1, OUTPUT);
  pinMode(pino_led2, OUTPUT);
  pinMode(pino_led3, OUTPUT);
  pinMode(pino_led4, OUTPUT);

  pinMode(pino_buzzer, OUTPUT);

}

void loop() {

    tocarMusica(pino_buzzer);
    efeitos();
    //Serial.println(x);
}

// iniciando o X com o valor zero
int x = 0;
void efeitos(){
  
  // Fazendo o efeito segundo o número de x;
  if (x==0) { // efeito 0
    digitalWrite(pino_led1, HIGH);
    digitalWrite(pino_led2, HIGH);
    digitalWrite(pino_led3, HIGH);
    digitalWrite(pino_led4, HIGH);
  }  
  if (x==1) { // efeito 1
    digitalWrite(pino_led1, LOW);
    digitalWrite(pino_led2, HIGH);
    digitalWrite(pino_led3, HIGH);
    digitalWrite(pino_led4, LOW);
  }  
  if (x==2) { // efeito 2
    digitalWrite(pino_led1, LOW);
    digitalWrite(pino_led2, LOW);
    digitalWrite(pino_led3, HIGH);
    digitalWrite(pino_led4, HIGH);
  } 
  if (x==3) { // efeito 3
    digitalWrite(pino_led1, HIGH);
    digitalWrite(pino_led2, HIGH);
    digitalWrite(pino_led3, LOW);
    digitalWrite(pino_led4, LOW);
  }

  // A terminar o efeito, soma um no valor de x
  x++;
  // Se o valor de 3 for maior que o número de efeito que temos, então zera o valor de x
  if (x>3) {x=0;}
}
