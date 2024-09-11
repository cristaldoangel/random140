#include<stdio.h>

int main() {

  int n1, ch;
  char c, sentence[81];
  n1 = 0;
  ch = 0;
  while((c = getchar()) != EOF){
    sentence[ch++] = c;
    if(c == ' '){
      ++n1;
    }
  }
  printf("%s\n The number of spaces founded were: %d\n", sentence, n1);
}
