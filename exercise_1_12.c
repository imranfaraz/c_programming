#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int c;
  bool isWord = false;  // is current character part of a word?

  while ((c = getchar()) != EOF) {
    if ((c == ' ') || (c == '\n') || (c == '\t'))
      isWord = false;
    else if (!isWord)
      isWord = true;

    if (isWord)
      printf("%c", c);
    else
      printf("\n");
  }

  return 0;
}
