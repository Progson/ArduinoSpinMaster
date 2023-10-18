//pin 6 landscape
//pin 3 portrait

static int landscapePin = 6;
static int portraitPin = 3;

int landscape = 1;
int portrait = 1;
int code = 1;
int prevCode = 1;

void setup() {
    pinMode(landscapePin, INPUT_PULLUP);
    pinMode(portraitPin, INPUT_PULLUP);
    Serial.begin(9600);
  
}

void loop() {
  landscape = digitalRead(landscapePin);
  portrait = digitalRead(portraitPin);
  if(!landscape){
      code = 1;
  }
  if(!portrait){
      code = 2;
  }
  if(prevCode != code){
    Serial.println(code);
  }
  prevCode = code;
}
