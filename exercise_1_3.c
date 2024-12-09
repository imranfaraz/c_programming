#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ... , 300; floating-point version */

int main(void) {
  float fahr, celsius;

  int lower = 0;   /* lower limit of temperature table */
  int upper = 300; /* upper limit */
  int step = 20;   /* step size */

  printf("%10s %7s %10s\n", "Fahrenheit", "Celsius", "Fahrenheit");

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%10.0f %7.1f ", fahr, celsius);
    fahr += step;

    // convert back to fahrenheit
    printf("%10.1f\n", celsius / (5.0 / 9.0) + 32);
  }
}
