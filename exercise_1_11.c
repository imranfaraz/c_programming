#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int c, numLines, numWords, numChars;
  numLines = numWords = numChars = 0;

  bool isWord = false;  // is current character part of a word?

  while ((c = getchar()) != EOF) {
    numChars++;
    if (c == '\n') numLines++;

    if ((c == ' ') || (c == '\n') || (c == '\t')) {
      isWord = false;
    } else if (!isWord) {
      isWord = true;
      numWords++;
    }
  }

  printf("lines: %d, words: %d, characters: %d\n", numLines, numWords,
         numChars);

  return 0;
}
