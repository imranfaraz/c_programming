#include <stdbool.h>
#include <stdio.h>

#define MAX_WORD_LEN 50

int main(void) {
  int c, wordLen = 0;

  int wordLenTracker[MAX_WORD_LEN];
  for (int i = 0; i < MAX_WORD_LEN; i++) wordLenTracker[i] = 0;

  while ((c = getchar()) != EOF) {
    if ((wordLen > 0) && ((c == ' ') || (c == '\n') || (c == '\t'))) {
      wordLenTracker[wordLen - 1]++;
      wordLen = 0;
    } else {
      wordLen++;
    }
  }

  for (int i = 0; i < MAX_WORD_LEN; i++)
    if (wordLenTracker[i] != 0)
      printf("length %d: %d\n", (i + 1), wordLenTracker[i]);

  return 0;
}
