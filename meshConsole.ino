
double myDouble = 0;
int myInt = 0;
String myString = "Hi";


void setup()
{
  // variable name max length is 12 characters long

  Particle.variable("passDouble", myDouble);
  Particle.variable("passInt", myInt);
  Particle.variable("passString", myString);


}

void loop() {
    
    delay(1000);

    myDouble = random(111, 999);
    myInt = random(1, 9);
    myString = "Good amount of moisture in soil";
    if (myInt < 3){ myString = "Water those plants";}
    if (myInt > 7){ myString = "Stop watering!";}


}
