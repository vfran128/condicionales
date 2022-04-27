#include "stdlib.h"
#include "stdio.h"

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
   int m = n;
  for(int i = 0; i < n; i++){
    m = n;
    while (m> 0) {
    if (m%2 == 0)   {
        printf("1");
        m --;
      }
    else{
      printf("2");
      m --;
    }
  }
    printf("\n");
}

return 0;
}
