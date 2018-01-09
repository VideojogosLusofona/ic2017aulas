#include <stdio.h>

int main() {
  for (int i = 0; i < 10; ++i) {
    int j = i * 10;
    printf("i=%d, j=%d\n", i, j);
  }
  //printf("i=%d, j=%d\n", i, j);  
  return 0;
}

