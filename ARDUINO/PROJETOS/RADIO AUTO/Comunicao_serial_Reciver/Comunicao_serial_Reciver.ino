     
/*
 RC PulseIn Serial Read out
 By: Nick Poole
 SparkFun Electronics
 Date: 5
 License: CC-BY SA 3.0 - Creative commons share-alike 3.0
 use this code however you'd like, just keep this license and
 attribute. Let me know if you make hugely, awesome, great changes.
 */
 
int ch1; // Here's where we'll keep our channel values
int ch2;
int ch3;

int s1 = 9;
int s2 = 10;
int s3 = 11;

void setup() {

  pinMode(s1, INPUT); // Set our input pins as such
  pinMode(s2, INPUT);
  pinMode(s3, INPUT);

  Serial.begin(9600); // Pour a bowl of Serial

}

void loop() {

  ch1 = pulseIn(s1, HIGH, 25000); // Read the pulse width of 
  ch2 = pulseIn(s2, HIGH, 25000); // each channel
  ch3 = pulseIn(s3, HIGH, 25000);

  Serial.print("Channel 1:"); // Print the value of 
  Serial.println(ch1);        // each channel

  Serial.print("Channel 2:");
  Serial.println(ch2);

  Serial.print("Channel 3:");
  Serial.println(ch3);

  delay(100); // I put this here just to make the terminal 
              // window happier
}
