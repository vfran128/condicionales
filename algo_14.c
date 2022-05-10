#include "stdlib.h"
#include "stdio.h"



int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int m = 1;
   while (n > 0) {
     m *= n;
     n--;
   }
  printf("%d\n",m );
  return 0;
}
