
int red1      = 8;
int led2      = 2;
int led3      = 3;
int led4      = 4;

int lightSensorPin = A0;
int analogValue = 0;


void setup() {
  Serial.begin(9600);         //sets serial port for communication
  pinMode(red1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}

void loop(){
  
  analogValue = analogRead(lightSensorPin);
  Serial.println(analogValue);
  if(analogValue < 40){            
    digitalWrite(red1, HIGH);
    digitalWrite(led2, HIGH);
    
    
  }

  if(analogValue < 20){            
    digitalWrite(red1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);

    
    
  }

  


  delay(200);
  digitalWrite(redLedPin, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
}
