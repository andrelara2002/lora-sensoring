# Sensoring over LoRa

Welcome to the ***Sensoring over LoRa*** project repository. In this project, we aim to develop a system to collect sensor data from various sources using LoRa communication protocol. For this, we will use three microcontrollers, each of which will be responsible for collecting data and transmitting it to a server microcontroller.

The server microcontroller will be responsible for receiving the data from the other microcontrollers and sending it to our database. The communication between the microcontrollers will be done using the LoRa protocol, which allows for long-range, low-power communication.

## Devices:

- ***Microcontroller 1: Range Sensor***
The first microcontroller will be responsible for collecting data from the range sensor and sending it over LoRa to the server microcontroller. The data will be parsed and displayed on the screen, including error analysis. This microcontroller will have an ID that will be displayed on the screen, allowing us to identify which sensor the data is coming from.

- ***Microcontroller 2: Tire Pressure***
The second microcontroller will be responsible for collecting data from the tire pressure sensors and sending it over LoRa to the server microcontroller. The data will be parsed and displayed on the screen, including error analysis. This microcontroller will also have an ID that will be displayed on the screen.

- ***Microcontroller 3: Server***
The server microcontroller will receive the data from the other microcontrollers and send it to our database. It will also display its ID and the data it is receiving on the screen, including error analysis. This microcontroller will act as a gateway between the other microcontrollers and the database, ensuring that the data is transmitted securely and efficiently.

## TagoIO Platform
All the data collected by the microcontrollers will be stored in the TagoIO platform. This platform will allow us to visualize the data in real-time, track trends, and set up alerts. TagoIO is a cloud-based platform that allows for easy integration with other systems and APIs, making it an ideal choice for this project.

## Conclusion
The Sensoring over LoRa project is an exciting and challenging project that will allow us to develop our skills in microcontroller programming and LoRa communication. By collecting and analyzing sensor data, we can identify areas for improvement, optimize performance, and ensure the safety of users.
