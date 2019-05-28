#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
  int c, state;

  state = IN;
  c = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else {
      if (state == OUT)
        putchar('\n');
      state = IN;
      putchar(c);
    }
  }
}
