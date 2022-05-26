# **[TriAnswer](https://www.yutechealth.com)**
* Biomedical Development Platform for Wearable Device [(Video)](https://www.youtube.com/watch?v=sQcyQJgb_so)
	* [Hardware](https://www.yutechealth.com) - Three channels bluetooth main board (Tri_BLE) / biosensor board (ECG、EMG、PPG、EEG、Breath、Temp) 
	* [Firmware](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino) - Use Arduino IDE to develop or restore Tri_BLE
	* [Software](https://github.com/YuTecHealth/Software) - iOS, Android and PC Application for Tri_BLE

# Firmware

This document includes the following content:

 1. **[For user]** [Using the **Factory Settings** to get the data easily with main board (TriBLE) and sensor boards.](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino#1-for-a-user-trible-factory-settings-and-usage)
	
 2. **[For developer]** Basic information you need to know about the TriBLE as a micro-controller.
 
    [**A. TriBLE description**](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino#a-trible-description)
	
	[**B. Develop with TriBLE Arduino IDE**](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino#2-for-developer-trible-factory-settings-and-usage)
	
	[**C. TriBLE Laboratory**](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino#c-trible-laboratory)

 3. [Frequently asked questions **(FAQ)**](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino#3-frequently-asked-questions-faq)


# 1. [For user] TriBLE Factory Settings and Usage

* **A. TriBLE has 3 channels to connect with sensor boards. The channel names are shown in the following figure.** 
  
  <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/TriBLE_w_Child.png" align="middle"
    alt="Yutech logo" width="500" height=""></code>

* **B. Quick steps to startup:**

     * Select sensor boards and software
          * [Sensor board:](https://www.yutechealth.com/trianswer.html) ECG、EMG、PPG、EEG、Breath、Temp
          * [Software](https://github.com/YuTecHealth/Software#software-using-steps) - iOS, Android and PC Application for Tri_BLE
     * Power on TriBLE and assemble sensor boards on it.
     * Connect TriBLE and Software then get biosignal!
* **C. An example:**
     
     * Select TriECG and TriPPG as sensore boards and choose iOS apps as Software <br>
	      <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/assembled1_en.png" align="middle"
    alt="Yutech logo" width="400" height=""></code>
	
     * Power on TriBLE and assemble TriECG and TriPPG to it. <br>
     	      <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/assembled2_en.png" align="middle"
    alt="Yutech logo" width="350" height=""></code>
    
     * [iOS Apps:](https://apps.apple.com/tw/app/trible/id1532572637) Scan, connect then start showing biosignal  <br>
     	       * <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/iOSapp1_en.png" align="middle"
    alt="Yutech logo" width="700" height=""></code>
    
* **D. Other firmware with different case:**
     * For **wireless** communication
     	* Firmware:
     		* Factory Settings：TriBLE Official Firmware (iOS) <--also works on PC
	        * TriBLE Official Firmware (Android)	
     	* [Software](https://github.com/YuTecHealth/Software#software-using-steps):
     		* [iOS (TriBLE)](https://apps.apple.com/tw/app/trible/id1532572637)
     		* [Android (TriAnswer SCR APP)](https://github.com/YuTecHealth/TriAnswer-SCR-APP/raw/main/TriAnswer_SCR_newVer_2022.apk)
	        * [PC (TriAnswer TCR APP)](https://drive.google.com/file/d/1zl-DEultRcGqctC-qeT3eFK8n2D576jf/view?usp=sharing)
	     		 
                
     * For **wired** communication
     	* Firmware:
     		* TriAnswer UART FW - Ver.S
     	* [Software](https://github.com/YuTecHealth/Software#software-using-steps):
	        * [PC (TriAnswer TCR APP)](https://drive.google.com/file/d/1zl-DEultRcGqctC-qeT3eFK8n2D576jf/view?usp=sharing)


* **E. How to change factory settings firmware to others?** 
	* __a__. [**Install Arduino Board Support Package (BSP)**](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino#b-develop-with-trible-nrf52-series-on-arduino-ide) 
	* __b__. Launch Arduino IDE
	* __c__. Select Tools > Programmer > `TriBLE Official Firmware` (for wireless communication) or `TriAnswer UART FW - Ver.S` (for wired communication) <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_7.png" align="middle"
 alt="Yutech logo" width="500" height=""></code>
	* __d__. Select `Tools > Port > COMXX (Yutech TriBLE nRF52840)` <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_18.png" align="middle"
 alt="Yutech logo" width="500" height=""></code>
	* __e__. Select `Tools > Burn Bootloader`
	* __f__. Wait about 5~10 sec, if jump out the following commends, it's means **UNSUCCESS**, please follow the following steps. <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_15.png" align="middle"
 alt="Yutech logo" width="500" height=""></code>
	* __g__. Select `Tools > Port > COM YY (Yutech TriBLE nRF52840)` **(YY won't be equal to XX)**
	* __h__. Select `Tools > Burn Bootloader`
	* __i__. Wait about 10~30 sec, it's means **SUCCESS** if the following commends are shown. <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_17.png" align="middle"
 alt="Yutech logo" width="500" height=""></code>


# 2. [For developer] TriBLE Factory Settings and Usage

#### **A. TriBLE description**

* __a. Pin configuration__ <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/Pin_config.png" align="middle"
  alt="Yutech logo" width="600" height=""></code>
* __b. Pin function discriptions__ <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/Pin_func.png" align="middle"
  alt="Yutech logo" width="500" height=""></code>

#### **B. Develop with TriBLE on Arduino IDE**
* ___a. Environment establish___: Install Yutech nRF52 Board Support Package (**BSP**) via Arduino Board Manager
	* I. [Download and install the Arduino IDE](https://www.arduino.cc/en/Main/Software) (At least v1.6.12)
		* Select the version of your OS.
		* Directly press **'Just Download'** in the donate page. <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_1.png" align="middle"
     alt="Yutech logo" width="300" height=""></code>
	* II. Start Arduino IDE (for linux users, please start Arduino IDE under **sudo su**)
	* III. Go to File -> Preferences
	* IV. Add https://raw.githubusercontent.com/YuTecHealth/silver-bassoon/master/package_Yutech_index.json as an 'Additional Board Manager URL' <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_2.png" align="middle"
     alt="Yutech logo" width="600" height=""></code>
	* V. Restart the Arduino IDE (for linux user, please type **sudo pip3 install adafruit-nrfutil or sudo pip install adafruit-nrfutil** in command line)
	* VI. Select the Boards Manager
		* Tools -> Board: "XXXXXXXXX" -> Board Manager
		* Type "Yutech" and you can find **"Yutech nRF52 by Yutech"** to install the BSP. (Please install **latest version**) <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_3.png" align="middle"
     alt="Yutech logo" width="600" height=""></code>
	* VII. Once the BSP is installed, select **'Yutech TriAnswer Boards (nRF52 Series)'** from the **Tools -> Board**, which will update your system config to the right compiler and the correct settings for the **TriBLE main Board**. Complete installation for Yutech nRF52 BSP! <br>  <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_4.png" align="middle"
     alt="Yutech logo" width="600" height=""></code>
	* **(Appendix 1)** How to change language.
			* File -> Preferences -> Editor language <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_5.png" align="middle"
     alt="Yutech logo" width="500" height=""></code>
	*  **(Appendix 2)** Window 7 need extra drivers
		*  [Yutech board driver for win 7](https://github.com/YuTecHealth/BoardDriver/blob/master/YuTech_drivers_0.0.0.2.exe?raw=true) is needed for accessing COM port when using TriBLE in **win 7**. 
		*  [More information about driver](https://github.com/YuTecHealth/BoardDriver)
  
* __b. **UPLOAD** and run your codes__
	* I. Make your own codes.
	* II. Connect your **TriBLE** with your PC. (Recommendation: Use the USB as power source)
	* III. Select `Tools > Board > Yutech TriAnswer Boards (nRF52 Series) > Yutech TriBLE nRF52840` <br>  <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_4.png" align="middle"
 alt="Yutech logo" width="600" height=""></code>
	* IV. Select `Tools > Port > COMXX (Yutech TriBLE nRF52840)` <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_18.png" align="middle"
 alt="Yutech logo" width="500" height=""></code>
	* V. Select `Tools > Programmer > DFU for TriBLE nRF52` <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_20.png" align="middle"
alt="Yutech logo" width="600" height=""></code>
	* VI. Press <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_upload.png" align="middle"
alt="Yutech logo" height="18" height=""></code> (Compile + Upload), or press <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_V.png" align="middle"
alt="Yutech logo" height="18" height=""></code> (Compile), and then press <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_upload.png" align="middle"
alt="Yutech logo" height="18" height=""></code> (Upload)).
	* **Upload successfully 👋 Shows "Device programmed"** <br>  <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_22.png" align="middle"
    alt="Yutech logo" width="700" height=""></code>
    
#### **C. TriBLE Laboratory**    
*  __a. Get started:__ [**Install Arduino BSP**](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino#b-develop-with-trible-nrf52-series-on-arduino-ide) and find the example code. <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/arduino_example.png" align="middle"
    alt="Yutech logo" width="700" height=""></code>
*  __b. Software display signal:__ 
	* [**Android SCR Display**](https://github.com/YuTecHealth/TriAnswer-SCR-APP/raw/main/TriAnswer_SCR_newVer_2022.apk) <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/Android_SCR1.jpg" align="middle" 
    alt="Yutech logo" width="300" height=""></code> <br>
	* [**Web PWA Display**](https://yutechealth.github.io/PWA/LAB5/LAB5.html) <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/PWA1.png" align="middle"
    alt="Yutech logo" width="700" height=""></code>

* __Appendix__. If you got some trouble... try to renew bootloader!!!!
	* **Method 1:** Connect TriBLE board to PC through USB cable only.
	* **Method 2:** Connect TriBLE board to PC through both J-Link device and USB cable. (Fatal error only) <br> --------------------------------------------------------------
	* **Method 1**
		* I. Select `Tools > Board > Yutech TriAnswer Boards (nRF52 Series) > Yutech TriBLE nRF52840`
		* II. Select `Tools > Port > COMXX (Yutech TriBLE nRF52840)`
		* III. Select `Tools > Programmer > DFU for TriBLE nRF52`
		* IV. Select `Tools > Burn Bootloader`
		* V. Wait about 20~30 sec.
		* **Figure of successful burning** <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_14.png" align="middle"
    alt="Yutech logo" width="500" height=""></code>
	* **Method 1**
		* I. To use J-Link, user should install the driver [**Here.**](https://www.segger.com/downloads/jlink/)
		* II. Choose your OS and click to download. <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/JLink_web.png" align="middle"
    alt="Yutech logo" width="1000" height=""></code>
		* III. Install the driver. <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/JLink_install.png" align="middle"
    alt="Yutech logo" width="500" height=""></code>
		* IV. Connect TriBLE and J-link to your PC. <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_12.png" align="middle"
    alt="Yutech logo" width="500" height=""></code>
		* V. Launch Arduino IDE.
		* VI. Select `Tools > Board > Yutech TriAnswer Boards (nRF52 Series) > Yutech TriBLE nRF52840`
		* VII. Select `Tools > Port > COMXX (Yutech TriBLE nRF52840)`
		* VIII. Select `Tools > Programmer > J-link for TriBLE nRF52`
		* IX. Select `Tools > Burn Bootloader` and press `Accept` <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_13.png" align="middle"
    alt="Yutech logo" width="500" height=""></code>
		* X. Wait about 20~30 sec. 
		* **Figure of successful burning** <br> <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_14.png" align="middle"
    alt="Yutech logo" width="500" height=""></code>
			
    
# 3. [Frequently asked questions **(FAQ)**]

 ### Q1 -> If you have problem with TriBLE Default Firmwares....
  
 1. Please check whether your arduino IDE has the comments shown in the following figure after doing the steps in **TriBLE Default Firmwares / Apps - Firmware setting steps**.
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_15.png" align="middle"
 alt="Yutech logo" width="500" height=""></code>
 
 2. Don't remove your device and re-do Step 4~6 of **TriBLE Default Firmwares / Apps - Firmware setting steps**.
 
 ### Q2 -> If you have problem with MISSING COM-Port in arduino IDE in win7....
 
 1. Please install the driver. ([**Yutech board driver for win 7**](https://github.com/YuTecHealth/BoardDriver/blob/master/YuTech_drivers_0.0.0.2.exe?raw=true))
 2. Commonly, there will be a long waiting time for COM-Port search (about 1~2 mins) when it is used at the first time.
 3. Maybe, you will encounter another long waiting time for COM-Port search when you solve Q1. **(Don't remove your device from PC, JUST WAIT !!!!!!)**
 
 ### Q3 -> If you have problem with Compile/Upload in Arduino IDE just like the following picture....
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_16.png" align="middle"
 alt="Yutech logo" width="500" height=""></code>
 
 1. Please download the previous Arduino IDE version. ([**1.8.11**](https://downloads.arduino.cc/arduino-1.8.11-windows.exe) is recommended !!!!)
 
 ### Q4 -> If you have problem with BSP version update....
 
   Shows "java.lang.NullPointerException"
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/readme_11_new.png" align="middle"
 alt="Yutech logo" width="700" height=""></code>
 
   (The folder **AppData** may be hidden. To show the folder, please follow the step in the figure below.)
 
 <code><img src="https://github.com/YuTecHealth/YuTecHealth/blob/master/Asset/TriBLE_nRF52_Arduino/AppData.png" align="middle"
 alt="Yutech logo" width="1000" height=""></code>
 
 1. Delete this folder "C:\Users\[username]\AppData\Local\Arduino15\cache".
 2. Delete this folder "C:\Users\[username]\AppData\Local\Arduino15\packages\Yutech".
 3. Delete this file   "C:\Users\[username]\AppData\Local\Arduino15\package_Yutech_index.json".
 4. Follow the Step 6~7 of [**BSP Installation**](https://github.com/YuTecHealth/TriBLE_nRF52_Arduino#b-develop-with-trible-nrf52-series-on-arduino-ide) to re-install the BSP.

