# JARVIS Project Plan

## Design Philosophy

JARVIS is intended to be a real hardware/software engineering project rather than only a voice-assistant script. The system is split into two major parts:

### Physical Device

Responsible for interaction with the user and communication with the desktop.

Potential components:

- Microcontroller
- Microphone
- Speaker
- LEDs / status indicators
- Display
- Buttons
- Future sensors

### Desktop Client

Responsible for tasks that require substantially more computing power.

Planned responsibilities:

- Receive commands from the physical device
- Speech and command processing
- Windows automation
- Browser control
- Screen capture
- Computer vision
- AI requests
- Send responses/status back to the device

## Development Strategy

Build one working layer at a time instead of attempting the complete assistant immediately.

### Phase 1 — Communication

Device -> PC -> Device

Success means the hardware can send a message to the PC and receive a response.

### Phase 2 — Commands

Translate messages into simple desktop actions such as opening an application or performing a web search.

### Phase 3 — Voice

Add microphone input, speech recognition, and assistant responses.

### Phase 4 — Intelligence

Connect the desktop client to an AI model and build a command-routing system.

### Phase 5 — Screen Awareness

Allow JARVIS to capture and reason about information displayed on the desktop when explicitly requested.

### Phase 6 — Hardware Refinement

Add speaker output, indicators/display, improved controls, and a finished enclosure.
