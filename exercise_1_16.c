#include <stdio.h>

#define MAX_LEN 1000

int getLine(char s[], int lim);
void copy(char to[], char from[]);

int main(void) {
  int currentLineLen, longestLineLen = 0;
  char currentLine[MAX_LEN];
  char longestLine[MAX_LEN];

  while ((currentLineLen = getLine(currentLine, MAX_LEN)) > 0) {
    if (currentLineLen > longestLineLen) {
      longestLineLen = currentLineLen;
      copy(longestLine, currentLine);
    }
  }

  if (longestLineLen > 0) printf("\nlongest line: %s\n", longestLine);

  return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim) {
  int c, i;

  for (i = 0; (i < lim - 1) && ((c = getchar()) != EOF) && (c != '\n'); i++)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    i++;
  }

  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i = 0;

  while ((to[i] = from[i]) != '\0') i++;
}
