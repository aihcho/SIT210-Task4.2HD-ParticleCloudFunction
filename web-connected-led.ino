int red = D6;
int amber = D5;
int green = D4;

void setup()
{
   pinMode(red, OUTPUT);
   pinMode(amber, OUTPUT);
   pinMode(green, OUTPUT);

   Particle.function("red",redToggle);
   Particle.function("amber",amberToggle);
   Particle.function("green",greenToggle);
   
   digitalWrite(red, LOW);
   digitalWrite(amber, LOW);
   digitalWrite(green, LOW);

}


void loop()
{
}


int redToggle(String command) {

    if (command=="on") {
        digitalWrite(red,HIGH);
        return 1;
    }
    else if (command=="off") {
        digitalWrite(red,LOW);
        return 0;
    }
    else {
        return -1;
    }
}

int amberToggle(String command) {

    if (command=="on") {
        digitalWrite(amber,HIGH);
        return 1;
    }
    else if (command=="off") {
        digitalWrite(amber,LOW);
        return 0;
    }
    else {
        return -1;
    }
}

int greenToggle(String command) {

    if (command=="on") {
        digitalWrite(green,HIGH);
        return 1;
    }
    else if (command=="off") {
        digitalWrite(green,LOW);
        return 0;
    }
    else {
        return -1;
    }
}

