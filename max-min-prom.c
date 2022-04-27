#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "limits.h"



int main(int argc, char *argv[]) {
  srand(1);
  double suma = 0.0;
  int max = INT_MIN;
  int min = INT_MAX;
  for (int i = 1; i < argc; i++) {
    int n = atoi(argv[i]);
    if (n > max) max = n;
    if (n < min) min = n;
    suma += n;
    printf("%d ",n );
  }

printf("\n");
  printf("prom: %.2f\n", suma/argc);
  printf("Max: %d\n",max);
  printf("Min %d\n",min);
  return 0;
}
