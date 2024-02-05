# NXP Application Code Hub
[<img src="https://mcuxpresso.nxp.com/static/icon/nxp-logo-color.svg" width="100"/>](https://www.nxp.com)

## Magnetic Wake-up Example using NMH1000 Magnetic Switch Sensor

- This example demo describes how to configure NMH1000 magnetic switch sensor to enable magnetic wake-up use-case. Such use-case can find many applications where user would like to completely shut off power supply or put the device in power down mode etc. based on magnetic field applied. Examples include, smart meters, shelf labels, reed switch replacement, smart home etc.<br />

- Please refer to NMH1000 Magnetic Switch Sensor Datasheet for more information. <br>
  https://www.nxp.com/docs/en/data-sheet/NMH1000.pdf

- NMH1000 is an ultra-low power monolithic Hall effect magnetic field sensor that provides a small footprint in low-current and low-operating-voltage, I2C mode or standalone mode.
- This magnetic switch sensor triggers an output when surrounding magnetic field is greater than the user-defined detection threshold.
- It can find lots of applications requiring change in magnetic field strength to wake-up and raise interrupt to wake-up host MCU/System.


- The image below shows the basic inertial motion events detections using SDCD.

    [<img src="./images/NMH1000_Block_Diagram.png" width="700"/>](NMH1000_Block_Diagram.png)


- #### Boards: FRDM-MCXN947
- #### Accessories: nxp_frdm_stbi_nmh1000
- #### Categories: Low Power, Sensor
- #### Peripherals: I2C, UART
- #### Toolchains: MCUXpresso IDE

## Table of Contents
1. [Software](#step1)
2. [Hardware](#step2)
3. [Setup](#step3)
4. [Results](#step4)
5. [Support](#step5)

## 1. Software<a name="step1"></a>
- IoT Sensing SDK (ISSDK) v1.8 offered as middleware in MCUXpresso SDK for supported platforms (https://nxp.com/iot-sensing-sdk)
- MCUXpresso SDK v2.13.1 for MCX-N9XX-EVK (https://mcuxpresso.nxp.com/en/select)
- MCUXpresso IDE v11.9.0
- Git v2.39.0
- Teraterm (https://osdn.net/projects/ttssh2/releases/) or RealTerm (https://sourceforge.net/projects/realterm/)

## 2. Hardware<a name="step2"></a>
- FRDM-MCXN947 MCU board
- FRDMSTBI-NMH1000 sensor board (https://www.nxp.com/part/FRDMSTBI-NMH1000) Or
- Hall Switch 3 click board (https://www.mikroe.com/hall-switch-3-click)
- Personal Computer
- Mini/micro C USB cable

## 3. Setup<a name="step3"></a>


### 3.1 Step 1: Download and Install required Software(s)
- Install MCUXpresso IDE 2.19.0
- Download and Install MCXUpresso SDK 2.13.1 for MCX
- Install Git v2.39.0 (for cloning and running west commands)
- RealTerm (for checking examples output)

### 3.2 Step 2: Clone the APP-CODE-HUB/an-fxls8974cf-low-power-wake-up-examples
- Clone this repository to get the example projects:
- Change directory to cloned project folder:<br>
    cd *dm-nmh1000-magnetic-switch-example*

### 3.3 Step 3: Build example projects
- Open MCUXpresso IDE and select a directory to create your workspace.
- Install MCXUpresso SDK 2.13.1 for MCX (drag and drop SDK zip into "Installed SDK" view) into MCUXpresso IDE.
- Go to "Quickstart Panel" and click on "Import Project(s) from file system",
- Select "Project directory (unpacked)" and browse to the cloned project folder.
- Select example projects that you want to open and run.
- Right click on project and select build to start building the project.

### 3.4 Step 4: Run example projects
- Connect the chosen example project HW: FRDM-MCXN947 with FRDMSTBI-NMH1000 or Hall Switch 3 click board.
- Right click on project and select "Debug As". Select MCUXpresso IDE LinkServer (inc. CMSIS DAP) probes.
- Connect a USB cable between the host PC and the MCU-Link USB port on the target board.
- Open a serial terminal (RealTerm) with the following settings:
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
- Download the program to the target board.
- Either press the reset button on your board or launch the debugger in your IDE to begin running the demo.

## 4. Results<a name="step4"></a>
- Show the <motion> on the board up to detect motion event. Refer to example project doc/readme.txt for more details.
- When the demo runs successfully, you can see the Samples printed to the terminal.

    *ISSDK NMH1000 Magnetic Switch Sensor Example !* <br>
    *Successfully Initialized NMH1000 Sensor* <br>
    *Successfully Applied Sensor Configuration for Mage Wakeup* <br>
    *Waiting for Magnetic Field to Change* <br>
    *Sensor Operating Mode Transitioned to Sleep Mode....SYSMODE = 2* <br>

	*Mag Threshold (50) Crossed: Mag Out = 180* <br>
	*Mag Wake Up Detected* <br>

	*Mag Threshold (50) Crossed: Mag Out = 152* <br>
	*Mag Wake Up Detected* <br>



## 5. Support<a name="step5"></a>
- Reach out to NXP Sensors Community page for more support - [NXP Community](https://community.nxp.com/t5/forums/postpage/choose-node/true?_gl=1*fxvsn4*_ga*MTg2MDYwNjMzMy4xNzAyNDE4NzM0*_ga_WM5LE0KMSH*MTcwMjQxODczMy4xLjEuMTcwMjQxODczNi4wLjAuMA..)
- Learn more about NMH1000 ultra-low power mangetic switch, refer to - [NMH1000 DS](https://www.nxp.com/docs/en/data-sheet/NMH1000.pdf)
- Accelerate your sensors development using Sensor ToolBox, refer to - [Sensors Development Ecosystem](https://www.nxp.com/design/design-center/software/sensor-toolbox:SENSOR-TOOLBOXX)

#### Project Metadata
<!----- Boards ----->
[![Board badge](https://img.shields.io/badge/Board-FRDM&ndash;MCXN947-blue)](https://github.com/search?q=org%3Anxp-appcodehub+FRDM-MCXN947+in%3Areadme&type=Repositories)

<!----- Categories ----->
[![Category badge](https://img.shields.io/badge/Category-SENSOR-yellowgreen)](https://github.com/search?q=org%3Anxp-appcodehub+sensor+in%3Areadme&type=Repositories) [![Category badge](https://img.shields.io/badge/Category-LOW%20POWER-yellowgreen)](https://github.com/search?q=org%3Anxp-appcodehub+low_power+in%3Areadme&type=Repositories)

<!----- Peripherals ----->
[![Peripheral badge](https://img.shields.io/badge/Peripheral-I2C-yellow)](https://github.com/search?q=org%3Anxp-appcodehub+i2c+in%3Areadme&type=Repositories) [![Peripheral badge](https://img.shields.io/badge/Peripheral-SENSOR-yellow)](https://github.com/search?q=org%3Anxp-appcodehub+sensor+in%3Areadme&type=Repositories) [![Peripheral badge](https://img.shields.io/badge/Peripheral-UART-yellow)](https://github.com/search?q=org%3Anxp-appcodehub+uart+in%3Areadme&type=Repositories)

<!----- Toolchains ----->
[![Toolchain badge](https://img.shields.io/badge/Toolchain-MCUXPRESSO%20IDE-orange)](https://github.com/search?q=org%3Anxp-appcodehub+mcux+in%3Areadme&type=Repositories)

Questions regarding the content/correctness of this example can be entered as Issues within this GitHub repository.

>**Warning**: For more general technical questions regarding NXP Microcontrollers and the difference in expected funcionality, enter your questions on the [NXP Community Forum](https://community.nxp.com/)

[![Follow us on Youtube](https://img.shields.io/badge/Youtube-Follow%20us%20on%20Youtube-red.svg)](https://www.youtube.com/@NXP_Semiconductors)
[![Follow us on LinkedIn](https://img.shields.io/badge/LinkedIn-Follow%20us%20on%20LinkedIn-blue.svg)](https://www.linkedin.com/company/nxp-semiconductors)
[![Follow us on Facebook](https://img.shields.io/badge/Facebook-Follow%20us%20on%20Facebook-blue.svg)](https://www.facebook.com/nxpsemi/)
[![Follow us on Twitter](https://img.shields.io/badge/Twitter-Follow%20us%20on%20Twitter-white.svg)](https://twitter.com/NXP)

## 7. Release Notes<a name="step7"></a>
| Version | Description / Update                           | Date                        |
|:-------:|------------------------------------------------|----------------------------:|
| 1.0     | Initial release on Application Code Hub        | January 17<sup>th</sup> 2024 |

