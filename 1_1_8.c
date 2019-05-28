#include <stdio.h>

int main() {
  int nb, nt, nl, c;

  nb = nt = nl = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++nb;
    else if (c == '\t')
      ++nt;
    else if (c == '\n')
      ++nl;
  }

  printf("\nThe input had %d blanks, %d tabs and %d newlines.\n", nb, nt, nl);
}
