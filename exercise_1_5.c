#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ... , 300; floating-point version */

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void) {
  printf("%10s %7s\n", "Fahrenheit", "Celsius");

  for (int fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
    printf("%10d %7.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
  }
}
