// Ceci sera la prog qui fera clignoter les LEDs aléatoirement
// Importé de /robotxsds/citrouilles/sabra_says/led_clignotantes_test.ino
/*
 Bugs connus ou suspectés
-aucun

*/


const int led1 = 13;
const int led2 = 12;
const int led3 = 11;
const int led4 = 10;

int s1 = random(1, 5);
int s2 = random(1, 5);
int s3 = random(1, 5);
int s4 = random(1, 5);

void setup() {
  
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);  
  

  
}


 void loop(){

    s1 = random(1, 5);
    s2 = random(1, 5);
    s3 = random(1, 5);
    s4 = random(1, 5);

   //reset settings s1, s2, s3, s4
   
   seq1();

 }
  void seq1() {
   
    if (s1 == 1) {

      digitalWrite(led1, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      delay(500);
      seq2();
    }

    else if (s1 == 2) {

      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
      delay(500);
      seq2();
    }

    else if (s1 == 3) {

      digitalWrite(led3, HIGH);
      delay(500);
      digitalWrite(led3, LOW);
      delay(500);
      seq2();
    }

      else if (s1 == 4) {

      digitalWrite(led4, HIGH);
      delay(500);
      digitalWrite(led4, LOW);
      delay(500);
      seq2();
    }
  }
  void seq2() {

    if (s2 == 1) {

      digitalWrite(led1, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      delay(500);
      seq3();
    }
    
    else if (s2 == 2) {

      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
      delay(500);
      seq3();
    }
    
    else if (s2 == 3) {

      digitalWrite(led3, HIGH);
      delay(500);
      digitalWrite(led3, LOW);
      delay(500);
      seq3();
    }
        
    else if (s2 == 4) {

      digitalWrite(led4, HIGH);
      delay(500);
      digitalWrite(led4, LOW);
      delay(500);
      seq3();
    }
  }

  void seq3() {

    if (s3 == 1) {

      digitalWrite(led1, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      delay(500);
      seq4();
    }
    
    else if (s3 == 2) {

      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
      delay(500);
      seq4();
    }
    
    else if (s3 == 3) {

      digitalWrite(led3, HIGH);
      delay(500);
      digitalWrite(led3, LOW);
      delay(500);
      seq4();
    }
        
    else if (s3 == 4) {

      digitalWrite(led4, HIGH);
      delay(500);
      digitalWrite(led4, LOW);
      delay(500);
      seq4();
    }
  }
 
  void seq4() {

    if (s4 == 1) {

      digitalWrite(led1, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      delay(3000);
      loop();
    }
    
    else if (s4 == 2) {

      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
      delay(3000);
      loop();
    }
    
    else if (s4 == 3) {

      digitalWrite(led3, HIGH);
      delay(500);
      digitalWrite(led3, LOW);
      delay(3000);
      loop();
    }
        
    else if (s4 == 4) {

      digitalWrite(led4, HIGH);
      delay(500);
      digitalWrite(led4, LOW);
      delay(3000);
      loop();
    }
  }
 
