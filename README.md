## Arduino Core for Yutech TriBLE nRF52 Core
This repository contains the Arduino Board Support Package (BSP) for Yutech TriBLE nRF52 series:

- [**Trianswer TriBLE**](https://www.yutechealth.com/trianswer_en.html)
## BSP Installation
### Yutech nRF52 BSP via the Arduino Board Manager

 1. [Download and install the Arduino IDE](https://www.arduino.cc/en/Main/Software) (At least v1.6.12)
   * Select the version of your OS.
   * Directly press **'Just Download'** in the donate page.
   
   <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_1.png" align="middle"
     alt="Yutech logo by CHIEH TSOU" width="500" height=""></code>
     
 2. Start the Arduino IDE
 3. Go into Preferences
  - File -> Preferences
 4. Add https://raw.githubusercontent.com/YuTecHealth/silver-bassoon/master/package_Yutech_index.json as an 'Additional Board Manager URL'
 
    <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_2.png" align="middle"
     alt="Yutech logo by CHIEH TSOU" width="600" height=""></code>
 
 5. Restart the Arduino IDE
 6. Open the Boards Manager
  - Tools -> Board: "XXXXXXXXX" -> Board Manager
  - Type "Yutech" and you can find **"Yutech nRF52 by Yutech"** to install the BSP.
  
    <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_3.png" align="middle"
     alt="Yutech logo by CHIEH TSOU" width="600" height=""></code>
  
 7. Once the BSP is installed, select **'Yutech TriAnswer Boards (nRF52 Series)'** from the **Tools -> Board**, which will update your system config to use the right compiler and settings for the **TriBLE nRF52 Board**.
 
    <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_4.png" align="middle"
     alt="Yutech logo by CHIEH TSOU" width="600" height=""></code>
 
 8. **(Appendix !!)** How to change language.
  - File -> Preferences -> Editor language

   <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_5.png" align="middle"
     alt="Yutech logo by CHIEH TSOU" width="500" height=""></code>
 
 ### Drivers **(Window 7 Only !!)**

- [Yutech board driver for win 7](https://github.com/YuTecHealth/BoardDriver/blob/master/YuTech_drivers_0.0.0.1.exe?raw=true) is required for USB to Serial when using TriBLE in **win 7**. 
- [More information](https://github.com/YuTecHealth/BoardDriver)

