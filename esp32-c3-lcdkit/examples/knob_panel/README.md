# Knob Panel Example

A GUI Demo designed for knob panel which has the voice playback function.

## How to use example

Please first read the [User Guide](https://docs.espressif.com/projects/esp-dev-kits/zh_CN/latest/esp32c3/esp32-c3-lcdkit/user_guide.html) of the ESP32-C3-LCDkit to learn about its software and hardware information.

### Hardware Required

* An ESP32-C3-LCDkit development board with subboard and speaker
* An USB Type-C cable for Power supply and programming

### Build and Flash

Run `idf.py -p PORT flash monitor` to build, flash and monitor the project.

(To exit the serial monitor, type ``Ctrl-]``.)

See the [Getting Started Guide](https://docs.espressif.com/projects/esp-idf/en/latest/get-started/index.html) for full steps to configure and use ESP-IDF to build projects.

### GUI Control

1. In "Root" page, short press to enter "App" page and long press to restore factory settings.
2. In "App" page, short press to confirm and long press to exit.

## Troubleshooting

* Program upload failure
    * Hardware connection is not correct: run `idf.py -p PORT monitor`, and reboot your board to see if there are any output logs.
    * The baud rate for downloading is too high: lower your baud rate in the `menuconfig` menu, and try again.
    * Error message with `A fatal error occurred: Could not open /dev/ttyACM0, the port doesn't exist`: Please first make sure the development board connected, then make board into "Download Boot" by following steps:
        1. keep press the knob
        2. short press "REST(SW3)" button
        3. release the knob
        4. upload program and reset

## Technical support and feedback

Please use the following feedback channels:

* For technical queries, go to the [esp32.com](https://esp32.com/) forum
* For a feature request or bug report, create a [GitHub issue](https://github.com/espressif/esp-dev-kits/issues)

We will get back to you as soon as possible.
