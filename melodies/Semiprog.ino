#define  c     3830     // 261 Hz 
#define  d     3400     // 294 Hz 
#define  e     3038     // 329 Hz 
#define  f     2864     // 349 Hz 
#define  h     2703     // 370 Hz
#define  g     2550     // 392 Hz 
#define  a     2272     // 440 Hz 
#define  b     2028     // 493 Hz 
#define  C     1912     // 523 Hz 
#define  D     1703     // 587 Hz
#define  E     1517     // 659 Hz
#define  F     1433//1432// 698 Hz
#define  G     1275//1276// 784 Hz
#define  A     1136      // 880 Hz
#define  R     0

// SETUP ============================================
// Set up speaker on a PWM pin (digital 9, 10 or 11)
const int speakerOut = 9;
const int bo1 = 2;
const int bo2 = 4;
// Do we want debugging on serial out? 1 for yes, 0 for no
int DEBUG = 1;
int etatbo1;
int etatbo2;

void setup() { 
  pinMode(bo1, INPUT);
  pinMode(bo2, INPUT);
  
  pinMode(speakerOut, OUTPUT);
  if (DEBUG) { 
    Serial.begin(9600); // Set serial out if we want debugging
  } 
}

// MELODY and TIMING  =======================================
//  melody[] is an array of notes, accompanied by beats[], 
//  which sets each note's relative length (higher #, longer note) 
int melody1[] = {g, c, e};
int melody2[] = {a, d, h};

int beats1[]  = {16, 16, 16}; 
int beats2[]  = {16, 16, 16};

int MAX_COUNT1 = sizeof(melody1) / 2; // Melody length, for looping.
int MAX_COUNT2 = sizeof(melody2) / 2; // Melody length, for looping.

// Set overall tempo
long tempo1 = 20000;
long tempo2 = 20000;
// Set length of pause between notes
int pause = 1000;
// Loop variable to increase Rest length
int rest_count1 = 60; //<-BLETCHEROUS HACK; See NOTES
int rest_count2 = 30;


int tone_ = 0;
int beat = 0;
long duration  = 0;

// PLAY TONE  ==============================================
// Pulse the speaker to play a tone for a particular duration
void playTone1() {
  long elapsed_time = 0;
  if (tone_ > 0) { // if this isn't a Rest beat, while the tone has 
    //  played less long than 'duration', pulse speaker HIGH and LOW
    while (elapsed_time < duration) {

      digitalWrite(speakerOut,HIGH);
      delayMicroseconds(tone_ / 2);

      // DOWN
      digitalWrite(speakerOut, LOW);
      delayMicroseconds(tone_ / 2);

      // Keep track of how long we pulsed
      elapsed_time += (tone_);
    } 
  }
  else { // Rest beat; loop times delay
    for (int j = 0; j < rest_count1; j++) { // See NOTE on rest_count
      delayMicroseconds(duration);  
    }                                
  }                                 
}

void jgb() {
  for (int i=0; i<MAX_COUNT1; i++) {
    tone_ = melody1[i];
    beat = beats1[i];

    duration = beat * tempo1; // Set up timing

    playTone1(); 
    // A pause between notes...
    delayMicroseconds(pause);

    if (DEBUG) { // If debugging, report loop, tone, beat, and duration
      Serial.print(i);
      Serial.print(":");
      Serial.print(beat);
      Serial.print(" ");    
      Serial.print(tone_);
      Serial.print(" ");
      Serial.println(duration);
    }
  }
}

void playTone2() {
  long elapsed_time = 0;
  if (tone_ > 0) { // if this isn't a Rest beat, while the tone has 
    //  played less long than 'duration', pulse speaker HIGH and LOW
    while (elapsed_time < duration) {

      digitalWrite(speakerOut,HIGH);
      delayMicroseconds(tone_ / 2);

      // DOWN
      digitalWrite(speakerOut, LOW);
      delayMicroseconds(tone_ / 2);

      // Keep track of how long we pulsed
      elapsed_time += (tone_);
    } 
  }
  else { // Rest beat; loop times delay
    for (int j = 0; j < rest_count2; j++) { // See NOTE on rest_count
      delayMicroseconds(duration);  
    }                                
  }                                 
}

void oct() {
  for (int i=0; i<MAX_COUNT2; i++) {
    tone_ = melody2[i];
    beat = beats2[i];

    duration = beat * tempo2; // Set up timing

    playTone2(); 
    // A pause between notes...
    delayMicroseconds(pause);

    if (DEBUG) { // If debugging, report loop, tone, beat, and duration
      Serial.print(i);
      Serial.print(":");
      Serial.print(beat);
      Serial.print(" ");    
      Serial.print(tone_);
      Serial.print(" ");
      Serial.println(duration);
    }
  }
}
// LET THE WILD RUMPUS BEGIN =============================
void loop() {
  etatbo1 = digitalRead(bo1);
  etatbo2 = digitalRead(bo2);
  
  read();//go to void read()
}
void read() {
  
  if (etatbo1 == LOW && etatbo2 == HIGH) {//if etatbo1 is low and etatbo2 is high, ...
  jgb();//go to jgb() (jingle bells)
}

  else if (etatbo1 == HIGH && etatbo2 == LOW) {
  oct();
}

  else {
    loop();
  }
}

// Set up a counter to pull from melody[] and beats[]
  


