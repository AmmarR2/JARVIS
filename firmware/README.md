# JARVIS Firmware

This directory contains firmware for the physical JARVIS device.

## First Goal

Get the microcontroller communicating reliably with the desktop client.

## Bring-Up Progress

- [x] Power and program the ESP32-S3.
- [x] Print a test message over serial.
- [x] Verify serial communication with the PC.
- [x] Connect the ESP32-S3 to Wi-Fi.
- [ ] Establish ESP32-S3 ↔ PC communication over Wi-Fi.
- [ ] Send commands in both directions.

### Verified Milestones

**Serial bring-up:** Firmware uploaded successfully and serial output verified at 115200 baud.

**Wi-Fi bring-up:** ESP32-S3 successfully joined the local Wi-Fi network and received a local IP address.

Wi-Fi credentials are intentionally not stored in this repository.
