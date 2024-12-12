#include <stdbool.h>
#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

int main(void) {
  int c, numLines, numWords, numChars, state;

  state = OUT;
  numLines = numWords = numChars = 0;

  while ((c = getchar()) != EOF) {
    numChars++;
    if (c == '\n') numLines++;

    if ((c == ' ') || (c == '\n') || (c == '\t')) {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      numWords++;
    }
  }

  printf("lines: %d, words: %d, characters: %d\n", numLines, numWords,
         numChars);

  return 0;
}
