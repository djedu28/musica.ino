/* 
  Código feito por DjEdu28 (Luis Eduardo) e inspirado em:
             https://github.com/robsoncouto/arduino-songs                                                                                        
                                       Robson Couto, 2019
*/
// mude para o pino do buzzer que deseja usar
#define pino_buzzer 11

// mude isso para tornar a música mais lenta ou mais rápida 120 é a velocidade normal
int tempo = 120; // unidade em BPM (Batidas Por Minuto)


void setup() {
  Serial.begin(9600);
  
  pinMode(pino_buzzer, OUTPUT);
}

void loop() {
    // Loop não travado, então você pode fazer algumas tarefas quase em parelalo,
    // porém não pode usar delay para não atrapalhar a musica
    // E as suas tarefas talvez sejam atrasadas pela musica pois o projeto musica.ino usa delay() e não millis()
    // pois a explicação o conceito de millis ainda está avançado de mais para minha turma de alunos
    tocarMusica(pino_buzzer);
}
