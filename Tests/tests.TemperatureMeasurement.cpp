#include <gtest\gtest.h>
extern "C"
{
#include "TemperatureMeasurement.h"
}

using namespace ::testing;

TEST(TemperatureMeasurementTests, One_Hundred_Deci_Celsius_Is_Converted_To_Five_Hundred_Deci_Fahrenheit)
{
  // Given
  int16_t tempInDeciCelsius = 100;
  int32_t expectedTempInDeciFahrenheit = 500;

  // When
  int32_t actualTempInDeciFahrenheit = TemperatureMeasurement_DeciCelsiusToDeciFahrenheit(tempInDeciCelsius);

  // Then
  ASSERT_EQ(expectedTempInDeciFahrenheit, actualTempInDeciFahrenheit);
}

TEST(TemperatureMeasurementTests, Two_Hundred_Deci_Celsius_Is_Converted_To_Six_Hundred_And_Eighty_Deci_Fahrenheit)
{
  // Given
  int16_t tempInDeciCelsius = 200;
  int32_t expectedTempInDeciFahrenheit = 680;

  // When
  int32_t actualTempInDeciFahrenheit = TemperatureMeasurement_DeciCelsiusToDeciFahrenheit(tempInDeciCelsius);

  // Then
  ASSERT_EQ(expectedTempInDeciFahrenheit, actualTempInDeciFahrenheit);
}

TEST(TemperatureMeasurementTests, Two_Hundred_And_One_Deci_Celsius_Is_Converted_To_Six_Hundred_And_Eighty_One_Deci_Fahrenheit)
{
  // Given
  int16_t tempInDeciCelsius = 201;
  int32_t expectedTempInDeciFahrenheit = 681;

  // When
  int32_t actualTempInDeciFahrenheit = TemperatureMeasurement_DeciCelsiusToDeciFahrenheit(tempInDeciCelsius);

  // Then
  ASSERT_EQ(expectedTempInDeciFahrenheit, actualTempInDeciFahrenheit);
}