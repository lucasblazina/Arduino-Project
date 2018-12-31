int ledpin = 5; 
int ledpinb = 9;
int port = 2;

void setup() { pinMode (ledpin, OUTPUT);
  // put your setup code here, to run once:

}

void loop() { digitalWrite (ledpin, HIGH);
              delay(250);
              digitalWrite (ledpin, LOW);
              delay(250);
                  
  // put your main code here, to run repeatedly:

                digitalWrite (ledpinb, HIGH);
                delay(250);
                digitalWrite (ledpinb, LOW);
                delay(250);

                digitalWrite (port, HIGH);
                delay(250);
                digitalWrite (port, LOW);
                delay(250);


                digitalWrite (port, HIGH);
                delay(250);
                digitalWrite (port, LOW);
                delay(250);


                digitalWrite (ledpinb, HIGH);
                delay(250);
                digitalWrite (ledpinb, LOW);
                delay(250);


                digitalWrite (ledpin, HIGH);
                delay(250);
                digitalWrite (ledpin, LOW);
                delay (250);
}                             
