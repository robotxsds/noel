/*
Code original par François-Nicolas Gitzhofer (www.github.com/fngitz)
Adaptation et traduction par Jean-Simon Desjardins (www.github.com/jsgarden)
*/


// Déclaration des variables qui représentent les ports des DELs
int del1 = 13;
int del2 = 12;
int del3 = 11;
int del4 = 10;

// Déclaration des variables qui permettent de générer une donnée aléatoire comprise entre 1 et 4
int s1 = random(1, 5);
int s2 = random(1, 5);
int s3 = random(1, 5);
int s4 = random(1, 5);


// Début de la fonction setup (c'est toujours la première fonction que s'exécute lorsqu'on démarre le Arduino)
 void setup() {
  // Spécification des ports de DELs en tant que sorties
  pinMode(del1, OUTPUT);
  pinMode(del2, OUTPUT);
  pinMode(del3, OUTPUT);
  pinMode(del4, OUTPUT);
}


// Début de la fonction loop (c'est la fonction qui s'exécute en boucle et en continu)
 void loop(){
   // Ici, les variables s1, s2, s3 et s4 sont assignés à une valeur aléatoire qui change plusieurs fois par seconde
   s1 = random(1, 5);
   s2 = random(1, 5);
   s3 = random(1, 5);
   s4 = random(1, 5);

   seq1(); // Aller à la fonction seq1 (séquence 1)
}


// Début de la fonction seq1 (séquence 1)
 void seq1() {


    if (s1 == 1) {   // Si la variable s1 est égale à 1, alors...

      digitalWrite(del1, HIGH);  // Allume la DEL 1
      delay(500);                // Attend 0.5 secondes
      digitalWrite(del1, LOW);   // Éteint la DEL 1
      delay(500);                // Attend 0.5 secondes
      seq2();                 // Passe à la fonction seq2
    }
                    // Et ainsi de suite (sauf que ce sera la DEL 2, 3, ou 4 qui sera allumée et éteinte)

    else if (s1 == 2) {

      digitalWrite(del2, HIGH);
      delay(500);
      digitalWrite(del2, LOW);
      delay(500);
      seq2();
    }


    else if (s1 == 3) {

      digitalWrite(del3, HIGH);
      delay(500);
      digitalWrite(del3, LOW);
      delay(500);
      seq2();
    }


      else if (s1 == 4) {

      digitalWrite(del4, HIGH);
      delay(500);
      digitalWrite(del4, LOW);
      delay(500);
      seq2();
    }
  }


// Début de la fonction seq2 (séquence 2)
 void seq2() {      // Tout ce qui est ici est du copié-collé du code plus haut mais on change les variables pour s1, s2, s3 et s4

    if (s2 == 1) { 

      digitalWrite(del1, HIGH);
      delay(500);
      digitalWrite(del1, LOW);
      delay(500);
      seq3();
    }

    else if (s2 == 2) {

      digitalWrite(del2, HIGH);
      delay(500);
      digitalWrite(del2, LOW);
      delay(500);
      seq3();
    }

    else if (s2 == 3) {

      digitalWrite(del3, HIGH);
      delay(500);
      digitalWrite(del3, LOW);
      delay(500);
      seq3();
    }

    else if (s2 == 4) {

      digitalWrite(del4, HIGH);
      delay(500);
      digitalWrite(del4, LOW);
      delay(500);
      seq3();
    }
  }

  void seq3() {

    if (s3 == 1) {

      digitalWrite(del1, HIGH);
      delay(500);
      digitalWrite(del1, LOW);
      delay(500);
      seq4();
    }

    else if (s3 == 2) {

      digitalWrite(del2, HIGH);
      delay(500);
      digitalWrite(del2, LOW);
      delay(500);
      seq4();
    }

    else if (s3 == 3) {

      digitalWrite(del3, HIGH);
      delay(500);
      digitalWrite(del3, LOW);
      delay(500);
      seq4();
    }

    else if (s3 == 4) {

      digitalWrite(del4, HIGH);
      delay(500);
      digitalWrite(del4, LOW);
      delay(500);
      seq4();
    }
  }

  void seq4() {

    if (s4 == 1) {

      digitalWrite(del1, HIGH);
      delay(500);
      digitalWrite(del1, LOW);
      delay(3000);
      loop();
    }

    else if (s4 == 2) {

      digitalWrite(del2, HIGH);
      delay(500);
      digitalWrite(del2, LOW);
      delay(3000);
      loop();
    }

    else if (s4 == 3) {

      digitalWrite(del3, HIGH);
      delay(500);
      digitalWrite(del3, LOW);
      delay(3000);
      loop();
    }

    else if (s4 == 4) {

      digitalWrite(del4, HIGH);
      delay(500);
      digitalWrite(del4, LOW);
      delay(3000);
      loop();
    }
  }
