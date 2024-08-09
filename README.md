# 7-Segment-Traffic-Light
This project implements a traffic light simulation using an ATmega32 microcontroller. The simulation displays countdown timers for each light color (green, yellow, and red) on seven-segment displays.

## Hardware Requirements

- ATmega32 microcontroller
- Two seven-segment
- LEDs for traffic light colors (optional)
- Resistors and connecting wires as needed

## Software Requirements

- AVR-GCC compiler
- Proteus for simulation

## Features

- Green light countdown: 30 to 0 seconds
- Yellow light countdown: 5 to 0 seconds
- Red light countdown: 30 to 0 seconds
- Uses PORT A, B, and C for display control

## How It Works

1. The program initializes PORTA, PORTB, and PORTC as outputs.
2. A pre-defined array `numbers` stores the bit patterns for displaying digits 0-9 on the seven-segment displays.
3. The main loop cycles through the traffic light phases:
   - Green light: Counts down from 30 to 0
   - Yellow light: Counts down from 5 to 0
   - Red light: Counts down from 30 to 0
4. PORTC is used to select which display is active (representing different light colors).
5. PORTA and PORTB are used to set the appropriate segments for each digit.

## Usage

1. Clone this repository.
2. Open the project in your preferred AVR development environment.
3. Compile the code and flash it to your ATmega32 microcontroller.
4. Set up the hardware connections as per the pin configurations in the code.
5. Power on the circuit and observe the traffic light simulation.

## Simulation

This project is designed to be simulated in Proteus. To run the simulation:

1. Open the Proteus project file (if provided).
2. Ensure that the ATmega32 microcontroller is properly configured in the simulation.
3. Run the simulation to observe the traffic light behavior.

## Customization

You can modify the countdown durations by adjusting the loop counters in the main function. The seven-segment display patterns can also be customized by modifying the `numbers` array.

## Contributing

Contributions to improve the project are welcome. Please feel free to fork the repository and submit pull requests.



