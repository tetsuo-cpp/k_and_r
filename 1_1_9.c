#include <stdio.h>

int main() {
  int c;
  int prev;

  prev = EOF;

  while ((c = getchar()) != EOF) {
    if (c != ' ' || prev != ' ')
      putchar(c);

    prev = c;
  }
}
