#Firmware

This document includes the following content:

3. **[As a user]** [Using the **Factory Settings** to get the data easily with TriAnswer child/sensor boards.](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino#trible-default-firmwares--apps)
 <!--
    [**TriBLE Demo Code**](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino_test/tree/test_susu#trible-demo-code)
 -->
 
 2. **[As a developer]** Basic information you need to know about the TriBLE as a micro-controller.
 
    [**a. TriBLE hardware description**](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino#trible-hardware-description)
	
	[**b. Develop with TriBLE nRF52 series on Arduino IDE**](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino#develope-with-trible-nrf52-series-on-arduino-ide)
	
	[**c. How to UPLOAD your codes**](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino#how-to-upload-your-codes)
	
	[**d. Restore Bootloader**](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino#renew-bootloader)
 
 4. [Frequently asked questions **(FAQ)**](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino#faq)
 <!--
    [**FAQ**](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino_test/tree/test_susu#faq)
 -->
 
 
 ## Renew Bootloader
 
 ### Hardware Setting (2 methods)
**Method 1:** Connect TriBLE board to PC through USB cable only.
 
**Method 2:** Connect TriBLE board to PC through both J-Link device and USB cable.

 ### Steps on Arduino IDE
 **For hardware setting method 1**
 1. Select `Tools > Board > Yutech TriAnswer Boards (nRF52 Series) > Yutech TriBLE nRF52840`
 2. Select `Tools > Port > COMXX (Yutech TriBLE nRF52840)`
 3. Select `Tools > Programmer > DFU for TriBLE nRF52`
 4. Select `Tools > Burn Bootloader`
 5. Wait about 20~30 sec.
 
  **Figure of successful burning**
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_6.png" align="middle"
    alt="Yutech logo" width="500" height=""></code>
 
 **For hardware setting method 2**
 1. To use J-Link, user should install the driver [**Here.**](https://www.segger.com/downloads/jlink/)
 2. Choose your OS and click to download.
  
  <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/JLink_web.png" align="middle"
    alt="Yutech logo" width="1000" height=""></code>
    
 3. Install the driver.
 
   <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/JLink_install.png" align="middle"
    alt="Yutech logo" width="500" height=""></code>
	
 4. Connect TriBLE and J-link to your PC.
 
   <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_12.png" align="middle"
    alt="Yutech logo" width="500" height=""></code>
 
 5. Launch Arduino IDE.
 6. Select `Tools > Board > Yutech TriAnswer Boards (nRF52 Series) > Yutech TriBLE nRF52840`
 7. Select `Tools > Port > COMXX (Yutech TriBLE nRF52840)`
 8. Select `Tools > Programmer > J-link for TriBLE nRF52`
 9. Select `Tools > Burn Bootloader` and press `Accept`
 
    <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_13.png" align="middle"
    alt="Yutech logo" width="500" height=""></code>
 
 10. Wait about 20~30 sec. 
 
 **Figure of successful burning**
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_14.png" align="middle"
    alt="Yutech logo" width="500" height=""></code>
    
## TriBLE Default Firmwares / Apps

 ### Using TriBLE with TriAnswer child boards
  
  **Q**: What are TriAnswer child boards? 
  
  **A**: Analog front-end solutions aim to ease the bio-signal measurement. - [**Trianswer**](https://www.yutechealth.com/trianswer_en.html) (Order here)  

  **Q**: How to use TriBLE with TriAnswer child boards?
  
  **A**: A TriBLE has 3 channels for connecting with child boards. The channel name and its characteristic UUID are shown in the following figure. 
  To simply get the data with TriAnswer child boards, we provide two factory default firmwares and the corresponding APP. Please follow the **firmware setting steps** and **APP using steps**
  <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/TriBLE_w_Child.png" align="middle"
    alt="Yutech logo" width="1000" height=""></code>
  
  
	
 1. For **wireless** communication
  
    - Firmware: 
	
      - **TriAnswer BLE FW - Ver.H** (Factory default setting of TriBLE)
				 
    - APP:
	
      - **Android (TriAnswer SCR APP)**
  
      - **iOS (TriBLE Monitor APP)**
  
      - **PC (TriAnswer TCR APP)**
		
 2. For **wired** communication
  
    - Firmware:
  
      - **TriAnswer UART FW - Ver.S** 
				 
    - APP:
  
      - **PC (TriAnswer TCR APP)**
 
 ### Firmware setting steps
 
 1. [**Install BSP**](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino#bsp-installation)
 2. Launch Arduino IDE
 3. Select `Tools > Programmer > TriAnswer BLE FW - Ver.H` (for wireless communication) or `TriAnswer UART FW - Ver.S` (for wired communication)
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_7.png" align="middle"
 alt="Yutech logo" width="500" height=""></code>
 
 4. Select `Tools > Port > COMXX (Yutech TriBLE nRF52840)`
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_18.png" align="middle"
 alt="Yutech logo" width="500" height=""></code>
 
 5. Select `Tools > Burn Bootloader`
 6. Wait about 5~10 sec, if jump out the following commends, it's means **NOT SUCCESS**, please follow the following steps.
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_15.png" align="middle"
 alt="Yutech logo" width="500" height=""></code>
 
 7. Select `Tools > Port > COMYY (Yutech TriBLE nRF52840)` **(YY is not equal to XX)**
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_19.png" align="middle"
 alt="Yutech logo" width="500" height=""></code>
 
 8. Select `Tools > Burn Bootloader`
 9. Wait about 10~30 sec, it's means **SUCCESS** if the following commends are shown.
   
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_17.png" align="middle"
 alt="Yutech logo" width="500" height=""></code>
 
 
 
 
## TriBLE hardware description 
 1. Pin configuration
  <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/Pin_config.png" align="middle"
  alt="Yutech logo" width="900" height=""></code>
 2. Pin function discriptions
  <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/Pin_func.png" align="middle"
  alt="Yutech logo" width="700" height=""></code>

## Develope with TriBLE nRF52 series on Arduino IDE
This repository contains the Arduino Board Support Package (**BSP**) for Yutech TriBLE nRF52 series


## BSP Installation
### Install Yutech nRF52 BSP via Arduino Board Manager

 1. [Download and install the Arduino IDE](https://www.arduino.cc/en/Main/Software) (At least v1.6.12)
   * Select the version of your OS.
   * Directly press **'Just Download'** in the donate page.
   
   <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_1.png" align="middle"
     alt="Yutech logo" width="500" height=""></code>
     
 2. Start the Arduino IDE
 3. Go into Preferences
  - File -> Preferences
 4. Add https://raw.githubusercontent.com/YuTecHealth/silver-bassoon/master/package_Yutech_index.json as an 'Additional Board Manager URL'
 
    <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_2.png" align="middle"
     alt="Yutech logo" width="600" height=""></code>
 
 5. Restart the Arduino IDE
 6. Select the Boards Manager
  - Tools -> Board: "XXXXXXXXX" -> Board Manager
  - Type "Yutech" and you can find **"Yutech nRF52 by Yutech"** to install the BSP. (Please install **latest version 0.2.1**)
  
    <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_3.png" align="middle"
     alt="Yutech logo" width="600" height=""></code>
  
 7. Once the BSP is installed, select **'Yutech TriAnswer Boards (nRF52 Series)'** from the **Tools -> Board**, which will update your system config to use the right compiler and settings for the **TriBLE nRF52 Board**.
 
    <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_4.png" align="middle"
     alt="Yutech logo" width="600" height=""></code>
 
 8. **(Appendix !!)** How to change language.
  - File -> Preferences -> Editor language

   <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_5.png" align="middle"
     alt="Yutech logo" width="500" height=""></code>
 
 ### Drivers **(Window 7 Only !!)**

- [Yutech board driver for win 7](https://github.com/YuTecHealth/BoardDriver/blob/master/YuTech_drivers_0.0.0.2.exe?raw=true) is needed for accessing COM port when using TriBLE in **win 7**. 
- [More information about driver](https://github.com/YuTecHealth/BoardDriver)


 ## How to **UPLOAD** your codes

 1. Make your own codes.
 2. Connect your **TriBLE** with your PC. (Recommendation: Use the USB as power source and)
 3. Select `Tools > Board > Yutech TriAnswer Boards (nRF52 Series) > Yutech TriBLE nRF52840`
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_4.png" align="middle"
 alt="Yutech logo" width="600" height=""></code>
 
 4. Select `Tools > Port > COMXX (Yutech TriBLE nRF52840)`
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_18.png" align="middle"
 alt="Yutech logo" width="500" height=""></code>
 
 5. Select `Tools > Programmer > DFU for TriBLE nRF52`
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_21.png" align="middle"
 alt="Yutech logo" width="500" height=""></code>
 
 6. Press <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_upload.png" align="middle"
alt="Yutech logo" height="18" height=""></code> (Compile + Upload), or press <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_V.png" align="middle"
alt="Yutech logo" height="18" height=""></code> (Compile), and then press <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_upload.png" align="middle"
alt="Yutech logo" height="18" height=""></code> (Upload)).
 
<code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_20.png" align="middle"
alt="Yutech logo" width="600" height=""></code>

   **Upload successfully 👋 Shows "Device programmed"**
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_22.png" align="middle"
    alt="Yutech logo" width="700" height=""></code>

 
 
 ### App using steps
 1. Intall the APP. 
 
    - Download here: 
	
	  - [**Android:**](https://github.com/YuTecHealth/TriAnswer-SCR-APP/raw/main/TriAnswer_SCR_speedInfo.apk) <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/TriAnswer_SCR_APP_QR.png" align="middle" 
alt="Yutech logo" width="200" height=""></code>
	  
	  - **iOS:**  App Store > Search [**TriBLE**](https://apps.apple.com/tw/app/trible/id1532572637) and download <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/TriAnswer_iOS_download.png" align="middle" 
alt="Yutech logo" width="200" height=""></code>
	  
	  - **PC:** Click [here](https://drive.google.com/file/d/1zl-DEultRcGqctC-qeT3eFK8n2D576jf/view?usp=sharing)
	
 2. Power on TriBLE
 3. Launch the App you want to use and follow the guidelines in [video](https://www.youtube.com/watch?v=2cSzfthJ7Kk).
 
 <!--
 #### Android TriAnswer SCR using guidelines
 
 - Android TriAnswer SCR is a single channel waveform monitor and recorder
	
 - Operation procedure
	
   - Type in the UUID of the channel you want to monitor (A003~A001) in the **Char UUID** box
	  
   - Press **Set UUID** to lock the setting	  
   
   - Choose **Allow Output file** and click **Create File** to save data
   
   - Press **Scan** and choose your **TriBLE**
   
   - Choose the sampling rate
   
   - Remember click **Disconnect** after measurement
   
   - 
	  
 #### iOS TriBLE using guidelines
 #### PC TriAnswer TCR using guidelines
 
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_8.png" align="middle"
    alt="Yutech logo" width="1000" height=""></code>
	
-->
## FAQ
 ### Q1 -> If you have problem on TriBLE Default Firmwares....
  
 1. Please check whether your arduino IDE has the comments shown in the following figure after doing the steps in **TriBLE Default Firmwares / Apps - Firmware setting steps**.
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_15.png" align="middle"
 alt="Yutech logo" width="500" height=""></code>
 
 2. Don't remove your device and re-do Step 4~6 of **TriBLE Default Firmwares / Apps - Firmware setting steps**.
 
 ### Q2 -> If you have problem on NO COM-Port in arduino IDE in win7....
 
 1. Please install the driver. ([**Yutech board driver for win 7**](https://github.com/YuTecHealth/BoardDriver/blob/master/YuTech_drivers_0.0.0.2.exe?raw=true))
 2. Commonly, there will be a long waiting time for COM-Port search (about 1~2 mins) when it is used at the first time.
 3. Maybe, you will encounter another long waiting time for COM-Port search when you solve Q1. **(Don't remove your device from PC, JUST WAIT !!!!!!)**
 
 ### Q3 -> If you have problem on Compile/Upload in Arduino IDE just like the following picture....
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_16.png" align="middle"
 alt="Yutech logo" width="500" height=""></code>
 
 1. Please download the previous Arduino IDE version. ([**1.8.11**](https://downloads.arduino.cc/arduino-1.8.11-windows.exe) is recommended !!!!)
 
 ### Q4 -> If you have problem on BSP version update....
 
   Shows "java.lang.NullPointerException"
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_11_new.png" align="middle"
 alt="Yutech logo" width="700" height=""></code>
 
   (The folder **AppData** may be hidden. To show the folder, please follow the step in the figure below.)
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/AppData.png" align="middle"
 alt="Yutech logo" width="1000" height=""></code>
 
 1. Delete this folder "C:\Users\[username]\AppData\Local\Arduino15\cache".
 2. Delete this folder "C:\Users\[username]\AppData\Local\Arduino15\packages\Yutech".
 3. Delete this file   "C:\Users\[username]\AppData\Local\Arduino15\package_Yutech_index.json".
 4. Follow the Step 6~7 of [**BSP Installation**](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino#bsp-installation) to re-install the BSP.

