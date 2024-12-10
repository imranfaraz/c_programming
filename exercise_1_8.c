#include <stdio.h>

int main(void) {
  int c;
  int numBlanks = 0;
  int numTabs = 0;
  int numLines = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      numBlanks++;
    else if (c == '\t')
      numTabs++;
    else if (c == '\n')
      numLines++;
  }

  printf("numBlanks: %d, numTabs: %d, numLines: %d\n", numBlanks, numTabs,
         numLines);

  return 0;
}
