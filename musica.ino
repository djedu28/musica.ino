
// Todas as notas musicais
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST      0


// O padrão da música é nota musical seguida da duração da nota tocada.

// Sobre a duração:
// Um 4 significa uma semínima, 8 uma décima oitava, 16 uma semicolcheia, assim por diante
// !! Números negativos são usados para representar notas pontilhadas,
//    então -4 significa uma semínima pontilhada, isto é, uma semínima mais uma décima oitava!!

// coloque dentro dos {} o padrão da música
int musica[] = {

  // Asa branca - Luiz Gonzaga
  // Partitura disponível em: https://musescore.com/user/190926/scores/181370

  NOTE_G4,8, NOTE_A4,8, NOTE_B4,4, NOTE_D5,4, NOTE_D5,4, NOTE_B4,4, 
  NOTE_C5,4, NOTE_C5,2, NOTE_G4,8, NOTE_A4,8,
  NOTE_B4,4, NOTE_D5,4, NOTE_D5,4, NOTE_C5,4,

  NOTE_B4,2, REST,8, NOTE_G4,8, NOTE_G4,8, NOTE_A4,8,
  NOTE_B4,4, NOTE_D5,4, REST,8, NOTE_D5,8, NOTE_C5,8, NOTE_B4,8,
  NOTE_G4,4, NOTE_C5,4, REST,8, NOTE_C5,8, NOTE_B4,8, NOTE_A4,8,

  NOTE_A4,4, NOTE_B4,4, REST,8, NOTE_B4,8, NOTE_A4,8, NOTE_G4,8,
  NOTE_G4,2, REST,8, NOTE_G4,8, NOTE_G4,8, NOTE_A4,8,
  NOTE_B4,4, NOTE_D5,4, REST,8, NOTE_D5,8, NOTE_C5,8, NOTE_B4,8,

  NOTE_G4,4, NOTE_C5,4, REST,8, NOTE_C5,8, NOTE_B4,8, NOTE_A4,8,
  NOTE_A4,4, NOTE_B4,4, REST,8, NOTE_B4,8, NOTE_A4,8, NOTE_G4,8,
  NOTE_G4,4, NOTE_F5,8, NOTE_D5,8, NOTE_E5,8, NOTE_C5,8, NOTE_D5,8, NOTE_B4,8,

  NOTE_C5,8, NOTE_A4,8, NOTE_B4,8, NOTE_G4,8, NOTE_A4,8, NOTE_G4,8, NOTE_E4,8, NOTE_G4,8,
  NOTE_G4,4, NOTE_F5,8, NOTE_D5,8, NOTE_E5,8, NOTE_C5,8, NOTE_D5,8, NOTE_B4,8,
  NOTE_C5,8, NOTE_A4,8, NOTE_B4,8, NOTE_G4,8, NOTE_A4,8, NOTE_G4,8, NOTE_E4,8, NOTE_G4,8,
  NOTE_G4,-2, REST,4
  
};


// calculando a quantidade de notas musicais na música
int total_notas = sizeof(musica) / sizeof(musica[0]) / 2;
// isso calcula a duração de uma nota musical inteira em ms
int nota_inteira = (60000 * 4) / tempo;
// divisor da nota musical
int divisor = 0; 
// duração da nota musical
int nota_duracao = 0; 

// nota que ele deve tocar
int nota_atual = 0;

// função que reinicia a contagem
void resetarMusica(){
  nota_atual=0;
}

// função que toca uma nota musical
int tocarMusica(int buzzer){
  // Iterando sobre as notas da música.
  // Lembre-se, a matriz é o dobro do número de notas (notas + durações)
  //    então começamos a iterar do 0 e vamos até a última nota
  //    e toda vez que a função é encerrada somamos 2 ao número nota_atual

  // calcula a duração da nota atual
    divisor = musica[nota_atual + 1];// pegamos o valor do divisor da nota atual
    if (divisor > 0) {
      // nota regular, apenas prossiga
      nota_duracao = (nota_inteira) / (divisor);
    } else if (divisor < 0) {
      // Notas pontilhadas são representadas com durações negativas !!
      nota_duracao = (nota_inteira) / abs(divisor);
      nota_duracao *= 1.5; // aumenta a duração pela metade para total_notas pontilhada
    }

  // Só tocamos a nota por 90% da duração, deixando 10% como uma pausa
    tone(buzzer, musica[nota_atual], nota_duracao * 0.9);

  // Aguardamos a duração específica antes de tocar a próxima nota.
    delay(nota_duracao);

  // parar de emitir som antes de ir para próxima nota
    noTone(buzzer);

  if (nota_atual < total_notas*2) { 
    nota_atual = nota_atual + 2;
  } 
  else if (nota_atual > total_notas*2){
    Serial.println("Parei de tocar a musica");
    delay(200);
    return -1;
  }
  Serial.print("Tocando a nota musical: ");
  Serial.println(musica[nota_atual]);
  return musica[nota_atual];
}
