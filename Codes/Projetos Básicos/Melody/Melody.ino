/* Autor(es): ArcBotics
   Source: https://arcbotics.com/lessons/sparki/
   Data: 25/08/2026

   Objetivo: Demonstrar como utilizar o buzzer do Sparki para
   reproduzir uma sequência de notas musicais e criar uma
   melodia.
*/

/* Variáveis
   melody: array que armazena as notas musicais da melodia.

   noteDurations: array que armazena a duração de cada nota.

   thisNote: variável de controle utilizada para percorrer
   as notas da melodia.

   noteDuration: armazena a duração da nota atual.

   pauseBetweenNotes: define o intervalo entre as notas.
*/

/* Execução
   O programa percorre o array de notas utilizando um laço for.
   Para cada nota, calcula sua duração, reproduz o som pelo
   buzzer do Sparki e aguarda um intervalo antes de reproduzir
   a próxima nota. A melodia é executada apenas uma vez durante
   a inicialização do programa.
*/
#include <Sparki.h> // inclui a biblioteca do Sparki
#include "pitches.h" // inclui uma lista de frequências

// notas da melodia:
int melody[] = { NOTE_C4, NOTE_G3,NOTE_G3, NOTE_A3, NOTE_G3,0, NOTE_B3, NOTE_C4 };

// duração das notas: 4 = semínima, 8 = colcheia, etc.:
int noteDurations[] = { 4, 8, 8, 4, 4, 4, 4, 4 };

void setup() {
  // reproduz cada nota dos arrays
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // calcula a duração da nota como 1 segundo dividido pelo tipo da nota.
    // por exemplo: semínima = 1000 / 4, colcheia = 1000 / 8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    sparki.beep(melody[thisNote],noteDuration);

    // para diferenciar as notas, define um intervalo mínimo entre elas.
    // a duração da nota + 30% funciona bem:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // interrompe o som que está sendo reproduzido:
    sparki.noBeep();
  }
}

void loop() {
  // não é necessário repetir a melodia.
}
