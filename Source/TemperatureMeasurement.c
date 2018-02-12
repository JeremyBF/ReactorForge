#include "TemperatureMeasurement.h"

int32_t TemperatureMeasurement_DeciCelsiusToDeciFahrenheit(int16_t tempInDeciCelsius) 
{
  int32_t deciFahrenheit; 
  const uint8_t tenTimesConversionMultiplier = 18;
  const uint16_t deciFahrenheitConversionOffset = 320; 

  int32_t WIPdeciFahrenheit;
  WIPdeciFahrenheit = (tenTimesConversionMultiplier * tempInDeciCelsius);
  WIPdeciFahrenheit /= 10;
  deciFahrenheit = WIPdeciFahrenheit + deciFahrenheitConversionOffset;

  return deciFahrenheit;
}