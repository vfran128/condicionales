#include "stdlib.h"
#include "stdio.h"

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  if (n > 0) {
    for (int i = 2; i < n-1; i++) {
      if (n % i == 0) {
       printf("No es primo\n");
       return 0;
      }
    }
    printf("Es primo\n");
  }
else{
  printf("No es primo, es 0\n");
}
  return 0;
}
