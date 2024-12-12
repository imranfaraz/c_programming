#include <stdbool.h>
#include <stdio.h>

// specifies the range of printable ASCII characters
#define ASCII_MIN 33
#define ASCII_MAX 126

int main(void) {
  int c;
  int charFreqTracker[(ASCII_MAX - ASCII_MIN + 1)] = {0};

  while ((c = getchar()) != EOF)
    if ((c >= ASCII_MIN) && (c <= ASCII_MAX)) charFreqTracker[c - ASCII_MIN]++;

  for (int i = ASCII_MIN; i <= ASCII_MAX; i++) {
    printf("%c: ", i);
    int charFreq = charFreqTracker[i - ASCII_MIN];
    for (int j = 0; j < charFreq; j++) printf("#");
    printf(" (%d)\n", charFreq);
  }

  return 0;
}
