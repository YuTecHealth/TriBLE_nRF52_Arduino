#include <bluefruit.h>
#define BUF_LENGTH          20
#define DEVICE_NAME       "Test1"

/* ECG Service: 00001523-1212-EFDE-1523-785FEABCD123
 * ECG RAW : 00001524-1212-EFDE-1523-785FEABCD123
 */
const uint8_t HS_UUID_SERVICE[] =
{
    0x23, 0xD1, 0xBC, 0xEA, 0x5F, 0x78, 0x23, 0x15,
    0xDE, 0xEF, 0x12, 0x12, 0x23, 0x15, 0x00, 0x00
};
const uint8_t HS_UUID_CHR_RAW[] =
{
    0x1E, 0x94, 0x8D, 0xF1, 0x48, 0x31, 0x94, 0xBA, 
    0x75, 0x4C, 0x3E, 0x50,    2,    0, 0x3D, 0x71
};

static uint16_t adc_value[BUF_LENGTH] = {0,};
static int counter = 0;
static bool connected2 = false;

BLEDis  bledis;    // DIS (Device Information Service) helper class instance
BLEService        hs(HS_UUID_SERVICE);
BLECharacteristic hsraw(HS_UUID_CHR_RAW);

extern "C"
{
  void SysTick_Handler(void)
  {
     if (connected2){
      adc_value[counter] = analogRead(A2);
      Serial.println(adc_value[counter]);
      counter++;
    }
  }
} // extern C

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("Bluefruit52 nRF Blinky Example");
  Serial.println("------------------------------\n");
  analogReadResolution(8);

  Serial.println("Initialise the Bluefruit nRF52 module");
  Bluefruit.configPrphBandwidth(BANDWIDTH_MAX);  
  Bluefruit.begin();
  Bluefruit.setName(DEVICE_NAME);
  Bluefruit.setTxPower(4);

  Bluefruit.Periph.setConnectCallback(connect_callback);
  Bluefruit.Periph.setDisconnectCallback(disconnect_callback);
  Bluefruit.Periph.setConnInterval(6, 12);

  Serial.println("Configuring the Device Information Service");
  bledis.setManufacturer("Yutech, Taiwan");
  bledis.setModel("TriAnswer");
  bledis.begin();

  hs.begin();
  
  startAdv();
}

void startAdv(void)
{
  // Advertising packet
  Bluefruit.Advertising.addFlags(BLE_GAP_ADV_FLAGS_LE_ONLY_GENERAL_DISC_MODE);
  Bluefruit.Advertising.addTxPower();
  Bluefruit.Advertising.addService(hs);
  Bluefruit.ScanResponse.addName();
  Bluefruit.Advertising.setInterval(32, 244);    // in unit of 0.625 ms
  Bluefruit.Advertising.setFastTimeout(30);      // number of seconds in fast mode
  Bluefruit.Advertising.start(0);                // 0 = Don't stop advertising after n seconds  
}

void loop()
{
  //Do nothing
}

void connect_callback(uint16_t conn_handle)
{
  BLEConnection* conn = Bluefruit.Connection(conn_handle);
  Serial.println("Connected");
  delay(1000);
  connected2 = true;
}

void disconnect_callback(uint16_t conn_handle, uint8_t reason)
{
  (void) conn_handle;
  (void) reason;
  connected2 = false;
}
