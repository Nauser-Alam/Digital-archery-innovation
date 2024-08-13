# Digital Archery Board Project


## Introduction

The Digital Archery Board is an innovative project designed to automatically detect and display the arrow hits on an archery board. It uses pressure sensors and an Arduino Mega to determine the exact position of the arrow, and then updates the corresponding score through LEDs and a buzzer sound.

This project provides a modern, electronic twist to the traditional archery sport, enhancing both training and competitive environments. By offering real-time feedback, it allows archers to focus on their technique without manual scoring.

## Features

- **Accurate Detection:** Utilizes pressure sensors to detect arrow hits precisely.
- **Real-Time Scoring:** Instant score update using LEDs for visual feedback.
- **Auditory Alert:** Buzzer sounds when an arrow hits the target, providing an auditory indication of a successful shot.
- **User-Friendly:** Easy to set up and operate, making it suitable for archers of all skill levels.

## Hardware Requirements

To build the Digital Archery Board, you will need the following hardware components:

- Arduino Mega
- Pressure sensors (at least 3 for different zones)
- LEDs (preferably in different colors to represent different scoring zones)
- Buzzer
- 9V Battery and connector
- Jumper wires
- Breadboard
- Optional: A physical archery board for mounting the sensors and LEDs

## Software Requirements

- Arduino IDE (version 1.8.0 or higher)
- Basic knowledge of C/C++ programming
- [Arduino Library for Pressure Sensors](https://github.com/yourusername/pressure-sensor-library) (if required)

## Installation

### Setting Up the Hardware

1. **Connect the Pressure Sensors:** Mount the pressure sensors on the back of the archery board at the positions where you want to detect arrow hits.
2. **Connect the LEDs:** Place the LEDs around the board to indicate different scoring zones. Connect them to the Arduino using jumper wires.
3. **Attach the Buzzer:** Connect the buzzer to one of the digital pins on the Arduino for sound alerts.
4. **Power the System:** Use a 9V battery to power the Arduino Mega and the other components.

### Programming the Arduino

1. Clone the repository:
   ```bash
   git clone https://github.com/Nauser-Alam/digital-archery-board.git
