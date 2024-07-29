# Task3
Design and program any electronic circuit containing ESP with any sensor or electronic part with an explanation of the function of the circuit

# Electronic circuit design using ESP32 module with PIR motion sensor. We will program the ESP32 to detect motion and turn the LED on or off based on the status of the sensor.

# Circuit components:
- ESP32
- PIR motion sensor
- LED: Light source
- 220 ohms impedance: to protect the LED from overcurrent
- Connecting cords: to connect components to each other

# Circuit Function:
 - ESP32: Acts as a controller and manages the process of reading data from the PIR sensor. Based on the sensor reading, it controls the switching the LED on or off
 - PIR sensor: detects movement in its surroundings and provides a signal (HIGH or LOW) to ESP32 based on the presence of movement.
 - LED: Lights up when motion is detected by a PIR sensor.

# How to operate:
- Connect all components according to the electrical scheme. After loading the code and turning on the circuit, the ESP32 will start reading the sensor data. When motion is detected, the LED will light up and send the appropriate messages to Serial Monitor.

![Screenshot 2024-07-29 192600](https://github.com/user-attachments/assets/54225bcb-6af9-41f0-8828-2675ffe4ca74)

# Circuit operation link 
- https://wokwi.com/projects/404761635197500417


