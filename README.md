# Keypad-7Segment-Multiplexing

## Hardware
- PIC24FJ64GA002
- Dual 7-segment display (common anode)
- 4x4 matrix keypad
- 2N3904 transistors (anode drivers)
- 220Ω resistors


## Key Functions
- `init7seg()` – Initialize display I/O
- `initKeyPad()` – Initialize keypad with pull-ups
- `showChar7seg(char, digit)` – Display character on left/right digit
- `readKeyPad()` – Scan keypad, return pressed key

## Wiring
<img width="454" height="747" alt="image" src="https://github.com/user-attachments/assets/cc9b911a-e586-4b3e-a1ea-33f721972cf6" />

EE2361 - Introduction to Microcontrollers (Fall 2025)
