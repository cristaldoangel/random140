#include <stdio.h>

#define LOWER   -100
#define UPPER   100
#define STEP    10
#define CONV    1.8
#define str1    "Celsius"
#define str2    "Fahrenheit"

int main() {
  int x;
  float f;
  printf("%7s\t\t%10s\n", str1, str2);

  for(x = LOWER; x <= UPPER; x = x + STEP){
    f = (x * CONV) + 32;
    printf("%7d\t\t%10.1f\n", x, f);
  }
  return 0;
}


