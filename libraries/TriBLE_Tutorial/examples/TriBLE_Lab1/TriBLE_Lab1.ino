#define BUF_LENGTH          20

static uint16_t adc_value[BUF_LENGTH] = {0,};
static int counter = 0;
static bool connected2 = false;

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
  Serial.begin(115200);
  analogReadResolution(8);
}

void loop()
{
  SysTick_Handler();
}
