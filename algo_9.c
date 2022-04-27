#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "limits.h"



int main(int argc, char *argv[]) {
  int max = INT_MIN;
  for (int i = 1; i < argc; i++) {
    int n = atoi(argv[i]);
    if (n > max) max = n;
    printf("%d ",n );
  }

  printf("\n");
  printf("Max: %d\n",max);
  return 0;
}
