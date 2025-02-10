# Line Follower Robot using Arduino Uno

## Overview
This project is a **Line Follower Robot** built using an **Arduino Uno**, two **IR sensors**, two **DC motors**, and a **castor wheel**. The bot follows a black line on a white surface using the **Bang-Bang algorithm**.

## Working Principle
The robot's movement is based on the readings from two IR sensors:
- If **both sensors detect white**, the bot moves **forward**.
- If **the left sensor detects black**, the bot **turns left**.
- If **the right sensor detects black**, the bot **turns right**.
- If **both sensors detect black**, the bot **stops**.

## Components Required
- **Arduino Uno**
- **Two IR sensors**
- **Two DC motors**
- **L293D Motor Driver**
- **One Castor Wheel**
- **Battery Pack (9V or 12V)**

## Circuit Diagram
Ensure the following connections:

| Component | Arduino Pin |
|-----------|------------|
| Left IR Sensor | A2 |
| Right IR Sensor | A1 |
| Motor Driver (IN1) | 7 |
| Motor Driver (IN2) | 8 |
| Motor Driver (EN1) | 6 |
| Motor Driver (IN3) | 9 |
| Motor Driver (IN4) | 10 |
| Motor Driver (EN2) | 5 |

## How to Use
1. **Assemble** the components as per the circuit diagram.
2. **Upload** the provided code to the Arduino Uno using the Arduino IDE.
3. **Place** the bot on a surface with a black line on a white background.
4. **Power on** the bot and observe its movement.

## Future Enhancements
- Implement **PID control** for smoother turns.
- Use a **battery management system** for efficient power consumption.

## License
This project is open-source. Feel free to use and modify it!
