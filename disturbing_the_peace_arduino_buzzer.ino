const int BUZZER = 8;
const int BOTON  = 2;

#define Gs3 294
#define A3  311  // La3
#define B3  349  // Si3
#define B4  699  // Si4
#define A4  622  // La4
#define Cs4 392  // do sostenido
#define Ds4 440  // re sostenido
#define E4  467  // mi
#define Fs4 523  // fa sostenido
#define Gs4 587  // sol sostenido
#define R   0    // silencio
//por si estas leyendo el codigo, holaaa :D, soy Iker, buscame en instagram como Sellodegarantiaa

const int BPM = 168;
const int MS_TICK = 60000 / (BPM * 12);

struct Nota { int f; int t; };

const Nota melodia[] = {
  // compases 25-26
  {R,12},{Cs4,12},{Ds4,8},{B4,8},{A4,8},
  {Gs4,48},
  // 27-28
  {R,12},{Cs4,12},{Ds4,8},{B4,8},{A4,8},
  {Gs4,48},
  // 29
  {R,12},{R,6},{Gs4,6},{Gs4,6},{Fs4,6},{E4,6},{Ds4,12},
  // 30-32
  {Cs4,18},{Cs4,6},{B3,6},{E4,6},{Ds4,12},
  {B3,18},{B3,12},{A3,12},
  {Gs3,48},
  // 33
  {R,12},{Cs4,6},{Ds4,8},{B4,8},{A4,8},
  // 34-36
  {Gs4,48},
  {R,12},{Cs4,12},{Ds4,12},{Gs4,12},
  {Fs4,30},{E4,6},{Ds4,6},
  // 37
  {E4,48},
  // 38-41
  {R,12},{R,6},{Cs4,6},{Cs4,6},{Ds4,12},{E4,12},
  {R,6},{E4,6},{E4,12},{Fs4,12},
  {Gs4,12},{R,12},{Cs4,24},
  {E4,24},{Fs4,24},
  // 42-44
  {Ds4,96},
  {Cs4,48},
};
const int TOTAL = sizeof(melodia) / sizeof(melodia[0]);

void setup() {
  pinMode(BOTON, INPUT); 
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  if (digitalRead(BOTON) == HIGH) {
    delay(30);
    if (digitalRead(BOTON) == HIGH) {
      tocar();
      while (digitalRead(BOTON) == HIGH);
    }
  }
}

void tocar() {
  for (int i = 0; i < TOTAL; i++) {
    int dur = melodia[i].t * MS_TICK;
    if (melodia[i].f == R) {
      noTone(BUZZER);
      delay(dur);
    } else {
      tone(BUZZER, melodia[i].f);
      delay(dur * 0.9);
      noTone(BUZZER);
      delay(dur * 0.1);
    }
  }
  noTone(BUZZER);
}
