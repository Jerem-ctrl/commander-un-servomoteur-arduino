#include <Servo.h>  // on inclut la bibliothèque pour piloter un servomoteur

Servo monServo;  // on crée l'objet monServo

void setup()
{
  monServo.attach(5); // on définit la broche utilisée pour commander le servomoteur
  Serial.begin(9600);
  pinMode(A1, INPUT); // on définit la broche analogique utilisée pour commander le potentiomètre
}

void loop ()
{
   int val = analogRead(A1);  // lit la valeur actuelle du potentiomètre
   Serial.print("valeur numérique :");
   Serial.println(val);
   val = map(val, 0, 1023, 0, 180);  //Avec la fonction map Arduino transfère la valeur de la variable val de la plage de valeurs de 0 à 1023 à la nouvelle plage de valeurs de 0 à 180
   monServo.write(val);// variable utilisée si dessus
}
