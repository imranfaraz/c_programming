#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int c;
  bool prevBlank = false;  // previous blank?

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (prevBlank) continue;
      prevBlank = true;
    } else {
      prevBlank = false;
    }

    putchar(c);
  }

  return 0;
}
