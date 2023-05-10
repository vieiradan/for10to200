#include <stdio.h>

int main() {
  int i;
  int n1 = 10;
  int n2 = 200;

  printf("N1: %i\n", n1); 
  printf("N2: %i\n", n2);

  for (n1=n1; n1<=n2; n1++) {
    printf("\n%i", n1);
  }
}
