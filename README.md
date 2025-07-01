# 2-Bit Full Adder with Arduino

## An Engineering Project for Binary Addition

This repository showcases a hardware implementation or simulation of a **2-bit full adder** using an Arduino microcontroller. This project serves as a hands-on demonstration of fundamental digital logic principles, specifically how binary addition is performed at a low level using electronic components and programmed logic.

A 2-bit full adder is a digital circuit that adds two 2-bit binary numbers, producing a 2-bit sum and a potential carry-out bit. It's a foundational component in computer arithmetic logic units (ALUs).

### Engineering Concepts Demonstrated

This project delves into several key digital electronics and computer engineering concepts:

* **Binary Addition:** Understanding how numbers are added in base-2, including the concept of "carry."
* **Full Adder Logic:** A full adder is a combinational circuit that adds three binary inputs (two bits to be added and a carry-in from a less significant bit position) and produces two outputs (a sum bit and a carry-out bit).
* **Ripple-Carry Adder:** A 2-bit full adder is typically constructed by cascading two 1-bit full adders (or a half-adder followed by a full-adder for the least significant bit), where the carry-out of one stage becomes the carry-in for the next. This demonstrates the "ripple-carry" mechanism.
* **Digital I/O:** Using the Arduino's digital input/output pins to read binary inputs and control binary outputs.
* **Embedded Programming:** Writing C++ code for the Arduino to implement the logic for binary addition.

### Components Required (Typical Setup)

To replicate this project, you would typically need:

* **Arduino Board:** An Arduino Uno or similar compatible board.
* **Breadboard:** For prototyping the circuit.
* **Input Mechanism:**
    * **DIP Switches or Push Buttons:** To provide the two 2-bit binary numbers (4 inputs total: A1, A0, B1, B0).
    * **Resistors:** Pull-down or pull-up resistors for input switches.
* **Output Indicators:**
    * **LEDs:** For displaying the two sum bits (S1, S0) and the final carry-out (Cout). (3 LEDs total).
    * **Resistors:** Current-limiting resistors for each LED.
* **Jumper Wires:** For making connections on the breadboard.
* *(Optional)* **Logic Gates ICs:** Depending on the specific implementation, you might use physical XOR, AND, and OR gates to construct the adder on the breadboard, with the Arduino handling I/O. Alternatively, the Arduino sketch itself can simulate the logic gates.

### Circuit Design (Conceptual)

The circuit typically involves:

1.  Connecting input devices (DIP switches/buttons) to specific digital input pins on the Arduino.
2.  Connecting output devices (LEDs) to specific digital output pins on the Arduino, usually with current-limiting resistors.
3.  The Arduino reads the state of the input pins, performs the binary addition operations within its code, and then sets the state of the output pins to represent the sum and carry-out.

While a detailed schematic is not included in the repository, the `.ino` file would define which Arduino pins are used for inputs and outputs, guiding the hardware setup.

### Arduino Code (`2 bit full adder.ino`)

The `2 bit full adder.ino` file contains the Arduino sketch. This code is responsible for:

* **Pin Configuration:** Setting up the Arduino pins as inputs for the binary numbers and outputs for the sum and carry bits.
* **Reading Inputs:** Continuously reading the HIGH/LOW states from the input pins, representing the binary values.
* **Implementing Addition Logic:** Performing the 2-bit binary addition. This can be done either by:
    * Directly simulating the logic gates (XOR, AND, OR) in software.
    * Or, if external logic gate ICs are used, the Arduino might simply read the outputs of these physical gates and display them.
* **Displaying Outputs:** Setting the state (HIGH/LOW) of the output pins to illuminate LEDs, thereby displaying the binary sum and carry-out.

### How to Get Started

To set up and run this 2-bit Full Adder project:

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/TylerFortune/2-bit.FullAdder.git](https://github.com/TylerFortune/2-bit.FullAdder.git)
    ```
2.  **Navigate to the project directory:**
    ```bash
    cd 2-bit.FullAdder
    ```
3.  **Open the Arduino Sketch:** Open the `2 bit full adder.ino` file in the Arduino IDE.
4.  **Install Arduino IDE:** If you don't have it, download and install the [Arduino IDE](https://www.arduino.cc/software).
5.  **Connect Arduino:** Connect your Arduino board to your computer via USB.
6.  **Select Board and Port:** In the Arduino IDE, go to `Tools > Board` and select your Arduino board (e.g., Arduino Uno). Then go to `Tools > Port` and select the correct serial port for your Arduino.
7.  **Build the Circuit:** Based on the pin definitions in the `2 bit full adder.ino` file, wire up your breadboard with the necessary inputs (DIP switches/buttons) and outputs (LEDs with resistors).
8.  **Upload the Code:** Click the "Upload" button (right arrow icon) in the Arduino IDE to compile and upload the sketch to your Arduino board.

### Usage

Once the code is uploaded and your circuit is correctly assembled:

1.  Manipulate the input switches (DIP switches or push buttons) to represent the two 2-bit binary numbers you wish to add.
2.  Observe the LEDs:
    * Certain LEDs will light up to indicate the sum bits (S1, S0).
    * Another LED will indicate the carry-out bit (Cout).
3.  Test various binary combinations (e.g., 00+00, 01+01, 11+11) to verify the adder's functionality according to the binary addition truth table.
