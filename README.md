# JARVIS

A custom desktop voice assistant project combining embedded hardware and PC software.

## Goal

Build a physical assistant device that communicates wirelessly with a Windows desktop and eventually:

- Listen for voice commands
- Send commands to the desktop
- Open apps, websites, and searches
- Read or inspect information on the screen
- Capture screenshots when needed
- Answer questions and explain results
- Display status with LEDs or a small screen
- Expand with additional sensors and hardware over time

## Project Architecture

```text
[JARVIS Hardware Device]
        |
        | Wi-Fi / Bluetooth
        v
[Desktop JARVIS Client]
        |
        +--> Voice / command processing
        +--> PC automation
        +--> Screen capture / vision
        +--> AI services
```

## Repository Structure

```text
JARVIS/
├── src/                 # Desktop software
├── firmware/            # Microcontroller code
├── docs/                # Hardware notes and project planning
├── requirements.txt     # Python dependencies
├── .gitignore
└── README.md
```

## Current Phase

**Phase 1: Prototype communication**

The first milestone is getting the physical device and desktop to reliably send messages to each other. After that, features will be added one at a time.

## Planned Milestones

- [ ] Set up development environment
- [ ] Test microcontroller over USB
- [ ] Establish wireless device-to-PC communication
- [ ] Send a simple command from JARVIS to the desktop
- [ ] Add microphone / voice input
- [ ] Add wake-word or push-to-talk activation
- [ ] Add desktop automation
- [ ] Add AI response system
- [ ] Add screen capture / vision support
- [ ] Add speaker output
- [ ] Build a clean enclosure

## Tech Stack

Planned technologies include:

- Python
- Microcontroller firmware (Arduino/C++)
- Wi-Fi and/or Bluetooth
- Windows desktop automation
- Speech recognition and text-to-speech
- AI API integration

## Status

Early prototype / active development.
