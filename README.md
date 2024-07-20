Arduino Traffic Light Simulation
This Arduino sketch simulates a traffic light sequence using three LEDs: red, yellow, and green. The sequence mimics the typical behavior of a traffic light, including blinking the green LED before switching to yellow.

Components Needed
1 x Arduino board
1 x Red LED
1 x Yellow LED
1 x Green LED
3 x Resistors (appropriate value for LEDs, typically 220Ω)
Jumper wires
Breadboard
Circuit Diagram
Connect the LEDs to the Arduino board as follows:

Red LED: Anode to digital pin 12, cathode to resistor, resistor to ground.
Yellow LED: Anode to digital pin 10, cathode to resistor, resistor to ground.
Green LED: Anode to digital pin 8, cathode to resistor, resistor to ground.

How It Works
The red LED turns on for 12 seconds.
The yellow LED turns on for 3 seconds while the red LED is still on.
Both the red and yellow LEDs turn off, and the green LED turns on for 12 seconds.
The green LED turns off for 1.5 seconds.
The green LED blinks four times, each blink lasting 1.5 seconds.
The yellow LED turns on for 3 seconds before the loop restarts.
Uploading the Code
Connect your Arduino board to your computer.
Open the Arduino IDE.
Copy and paste the code into the IDE.
Select the correct board and port from the "Tools" menu.
Click the upload button (right arrow icon) to upload the code to your Arduino board.
License
This project is licensed under the MIT License. See the LICENSE file for more details.

Author
Serhii Zaika


