#include <Sparki.h>

// Notas (adicionei as que faltavam)
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_CS4 277
#define NOTE_DS4 311
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_B4 494
#define NOTE_C5 523
#define NOTE_E5 659

#define NO_SOUND 0

int melodiaTimao[] = {
NO_SOUND, NOTE_C5,NOTE_B4,NOTE_G4,NOTE_E4,NOTE_E4,
NO_SOUND,NOTE_B3,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_B4,NOTE_A4,NOTE_G4,NOTE_F4,NOTE_F4,
NO_SOUND,NOTE_A4,NOTE_F4,NOTE_E4,NOTE_DS4,NOTE_DS4,
NO_SOUND,NOTE_DS4,NOTE_DS4,NOTE_E4,NOTE_F4,NOTE_A4,NOTE_G4,NOTE_F4,NOTE_B4,
NO_SOUND,NOTE_B4,NOTE_A4,NOTE_GS4,NOTE_A4,NOTE_A4,
NO_SOUND,NOTE_A4,NOTE_A4,NOTE_B4,NOTE_C5,NOTE_E5,NOTE_C5,NOTE_A4,NOTE_G4,
NO_SOUND,NOTE_E5,NOTE_B4,NOTE_G4,NOTE_F4,NOTE_F4,
NO_SOUND,NOTE_A4,NOTE_B4,NOTE_C5,NOTE_B4,NOTE_A4,NOTE_G4,NOTE_F4,NOTE_E4,
NO_SOUND,NOTE_B3,NOTE_CS4,
NOTE_DS4,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_A4,NOTE_F4,NOTE_C5,NOTE_C5,NOTE_B4,NOTE_A4,NOTE_G4,NOTE_A4,
NOTE_B4,NOTE_B3,NOTE_CS4,
NOTE_DS4,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_A4,NOTE_F4,NOTE_C5,NOTE_C5,NOTE_B4,NOTE_A4,NOTE_G4,NOTE_A4,
NOTE_B4,NOTE_B4,
NO_SOUND,NOTE_B4,NOTE_A4,NOTE_GS4,NOTE_A4,NOTE_A4,
NO_SOUND,NOTE_A4,NOTE_G4,NOTE_F4,NOTE_G4,NOTE_G4,
NO_SOUND,NOTE_E5,NOTE_B4,NOTE_G4,NOTE_F4,
NO_SOUND,NOTE_F4,NOTE_G4,NOTE_A4,NOTE_B4,NOTE_A4,NOTE_G4,NOTE_F4,NOTE_E4
};

int tempoNotasTimao[] = {
4,4,4,4,2,2,
8,8,8,8,8,8,8,8,2,2,
4,4,4,4,2,2,
8,8,8,8,8,8,8,8,1,
4,4,4,4,2,2,
8,8,8,8,8,8,8,8,1,
4,4,4,4,2,2,
8,8,8,8,8,8,8,8,1,
4,8,8,
8,8,8,8,8,8,8,8,8,8,8,8,
4,8,8,
8,8,8,8,8,8,8,8,8,8,8,8,
2,2,
4,4,4,4,2,2,
4,4,4,4,2,2,
4,4,4,4,1,
8,8,8,8,4,8,8,2,2
};

int compasso = 1000;

void setup() {}

void loop() {

  int totalNotas = sizeof(melodiaTimao) / sizeof(melodiaTimao[0]);

  for (int i = 0; i < totalNotas; i++) {

    int duracao = compasso / tempoNotasTimao[i];

    if (melodiaTimao[i] == NO_SOUND) {
      delay(duracao);
    } else {
      sparki.beep(melodiaTimao[i], duracao);
      delay(duracao * 1.1); // leve pausa entre notas
    }
  }

  delay(5000);
}
