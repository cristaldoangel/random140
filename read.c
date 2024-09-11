#include<stdio.h>

#define MAX 80

int main() {

  char buffer[MAX+1];
  char ch;
  int pos = 0;

  while((ch = getchar()) != EOF){
    buffer[pos++] = ch;
  }

  buffer[pos] = '\0';

  printf("%s", buffer);

  return 0;
}
