# RiverSweep — Automated River Cleaning Machine

An Arduino-based river-cleaning prototype designed to collect floating waste using a net-based front mechanism and a motorised lifting assembly.

## Overview

RiverSweep is a school engineering project exploring a mechanical approach to collecting floating waste from rivers and waterways.

The prototype combines a Blender-designed model, 3D-printed components, a wood-cut base, an Arduino Uno and two servo motors.

## How It Works

1. **Waste collection:** Water flows through the front net, allowing floating waste to be retained.
2. **Waiting period:** The Arduino waits 20 seconds after startup.
3. **Lifting:** Both servo motors are commanded to move from 0° to 90° together.
4. **Drainage:** The raised collection mechanism allows excess water to drain.
5. **Waste removal:** The collected waste can be removed from the net.

The current Arduino program performs a timed sequence at startup. It does not use sensors to detect waste or automatically repeat the lifting cycle.

## Hardware

- Arduino Uno
- Two servo motors
- Jumper wires
- 3D-printed components
- Wood-cut base
- Waste collection net

## Software and Tools

- **Blender:** 3D modelling
- **Arduino IDE:** Programming and uploading code
- **Arduino Servo library:** Servo motor control

## Servo Connections

| Component | Arduino connection |
|---|---|
| Servo 1 signal | Digital pin 9 |
| Servo 2 signal | Digital pin 10 |
| Both servo power wires | 5V supply |
| Both servo ground wires | GND |

The servo power supply must be suitable for the motors' current requirements, with a shared ground when using a separate supply.

## Repository Contents

- `arduino/` — Arduino source code
- `3d-model/` — Blender model and optional STL exports
- `images/` — Prototype photos and design renders
- `docs/` — Circuit diagram and additional documentation

## Skills Demonstrated

- 3D modelling and prototyping
- Arduino programming
- Servo motor control
- Mechanical design and fabrication
- Teamwork and environmental problem-solving

## Future Improvements

- Add sensors for waste detection.
- Improve the lifting mechanism and waste collection capacity.
- Test collection efficiency under controlled water-flow conditions.
- Improve durability and evaluate safe operation in water.

## Project Status

Completed school prototype. Further testing and improvements would be required before practical deployment in a river.

---

**Project name:** RiverSweep  
**Project type:** School engineering project  
**Controller:** Arduino Uno