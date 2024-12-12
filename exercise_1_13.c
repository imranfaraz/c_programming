#include <stdbool.h>
#include <stdio.h>

#define MAX_WORD_LEN 50

int main(void) {
  int c, wordLen = 0;

  int wordLenTracker[MAX_WORD_LEN] = {0};

  while ((c = getchar()) != EOF) {
    if ((c == ' ') || (c == '\n') || (c == '\t')) {
      if (wordLen > 0) {
        wordLenTracker[wordLen - 1]++;
        wordLen = 0;
      }
    } else {
      wordLen++;
    }
  }

  for (int i = 0; i < MAX_WORD_LEN; i++) {
    printf("length %2d: ", (i + 1));
    wordLen = wordLenTracker[i];
    for (int j = 0; j < wordLen; j++) printf("#");
    printf(" (%d)\n", wordLen);
  }

  return 0;
}
