# Musica.ino - Asa Branca - Luiz Gonzada - @DjEdu28

Código feito por DjEdu28 (Luis Eduardo) e inspirado em:
* Robson Couto, 2019: <https://github.com/robsoncouto/arduino-songs>

* E publicado em: <https://github.com/djedu28/musica.ino>

### Sobre

Este projeto toca a musica Asa Branca de **Luiz Gonzaga** usa um arduino uno e um buzzer.

### Sobre como personalizar

Na **linha 130** do arquivo `musica_asa_branca.ino` existe a decalração da musica em uma Lista contendo a nota musical e o tempo da mesma.

exemplo a asabranca nesse padrão fica:
> Partitura disponível em: <https://musescore.com/user/190926/scores/181370>

```cpp
int musica[] = {
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
```

## Para criar a priopria musica:

Recomendo buscar referencia em partituras de flauta, adicionar as notas e tempos em sequencia, seguindo o exemplo deixado pela Asa Branca.

* Adicione as notas depois de "`int musica[] = {`" 
  * com a ultima nota sendo  "`REST,4`" (para desligar o buzzer)

## Para reproduzir uma musica já mapeada por terceitos:

Recomendo buscar o repositorio do <https://github.com/robsoncouto/arduino-songs>


## Para aprneder mais sobre o universo da robotica, programação e eletronica:

Indico a plataforma InovOnline - <https://InovOnline.vercel.app>



## Para simular o projeto:

* Acesse:
  https://wokwi.com/projects/431051753809675265




.

.

.
