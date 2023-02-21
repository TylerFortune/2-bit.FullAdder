//CSCE 220-Prof. Nwanze
//Names: Tyler Fortune
//Dates: 11/14/22
//2-Bit full adder project 

//-----------Variables/Pins-----------
//Input pins
int buttonA0Pin = 12;
int buttonA1Pin = 11;
int buttonB0Pin = 10;
int buttonB1Pin = 9;
int carryInPin = 8;

//placement for output/sum pins
int SumPin0 = 5; 
int SumPin1 = 4; 
int CarryPin = 3;

//input/temperarly variables
int a0; //1-bit value for a0
int a1; //1-bit input value for a1
int b0; //1-bit input value for b0
int b1; //1-bit input value for b1
int cIn; //1-Bit Carry in 
int cOut; //1-bit Carry Out
int s0 ;//sum out of 1-bit
int s1; // sum out of 1-bit


void setup()
 {
  //set up for input and out variables to board pins
  pinMode(SumPin0, OUTPUT); //Pin 5 -Output
  pinMode(SumPin1, OUTPUT); //Pin 4 -Output
  pinMode(CarryPin, OUTPUT);//Pin 3 -Output

  pinMode(buttonA0Pin, INPUT_PULLUP); //Pin 12 -Input
  pinMode(buttonA1Pin, INPUT_PULLUP); //Pin 11 -Input
  pinMode(buttonB0Pin, INPUT_PULLUP); //Pin 10 -Input
  pinMode(buttonB1Pin, INPUT_PULLUP); //Pin 9 -Input
  pinMode(carryInPin, INPUT_PULLUP);  //Pin 8 -Input

}

void loop() {
  //read inputs
  a0 = digitalRead(buttonA0Pin); //reads input of pin 12
  a1 = digitalRead(buttonA1Pin); //reads input of pin 11
  b0 = digitalRead(buttonB0Pin); //reads input of pin 10
  b1 = digitalRead(buttonB1Pin); //reads input of pin 9 
  cIn = digitalRead(carryInPin); //reads input of pin 8

  //----------Equations------------
  /*
  Bit-wise operators
  c = a & b ; AND
  c = a | b ; OR
  c = a ^ b ; XOR
  c = !a ; NOT 
  */   

  //calculare outputs for sum output 0
  //Expression: sum = (a0 XOR b0) XOR countIn
  s0 = (a0 ^ b0) ^ cIn;

  //Calculates outputs for sum output 1
  //Expression: sum =  (a1 XOR b1) XOR ( (a0 XOR b0) AND countIn) | (a0 AND b0)
  s1 = (a1 ^ b1) ^ ( (a0^b0) & cIn) | (a0 & b0); 

  //Calulates outputs for Count-Out 
  //Expression: Count-Out = (a1 AND b1) OR (a1 XOR b1) AND ((a0 XOR b0) AND countIn) | (a0 AND b0)
  cOut = (a1 & b1) | (a1 ^ b1) & ( (a0^b0) & cIn ) | (a0 & b0);

  //Writes output 
  digitalWrite(SumPin0, s0); //writes output for pin 5
  digitalWrite(SumPin1, s1); //writes output for pin 4
  digitalWrite(CarryPin, cOut); //writes output for pin 3
  

}
