#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ... , 300; floating-point version */

int main(void) {
  float fahr, celsius;

  int lower = 0;   /* lower limit of temperature table */
  int upper = 300; /* upper limit */
  int step = 20;   /* step size */

  printf("%7s %10s\n", "Celsius", "Fahrenheit");

  celsius = lower;
  while (celsius <= upper) {
    fahr = celsius / (5.0 / 9.0) + 32.0;
    printf("%7.0f %10.1f\n", celsius, fahr);
    celsius += step;
  }

  return 0;
}
