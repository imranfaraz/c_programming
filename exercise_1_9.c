#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int c;
  bool prevBlank = false;  // previous blank?

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (prevBlank) continue;
      putchar(c);
      prevBlank = true;
    } else {
      putchar(c);
      prevBlank = false;
    }
  }

  return 0;
}
