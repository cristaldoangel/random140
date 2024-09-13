#include<stdio.h>
#define CHARACTER   " "

int main() {

  int n1, ch; /*Initialize parameter*/
  char c, sentence[81]; /*Creates char variables*/
  n1 = 0; /*Set them to 0*/
  ch = 0; /*Set them to 0*/
  while((c = getchar()) != EOF){ /*Read the keyboad until CTRL-D is pressed*/
    sentence[ch++] = c;
    if(c == CHARACTER){ /*Checks if this is the character is a space*/
      ++n1; /*Increase the number after one space is founded*/
    }
  }
  printf("%s\n The number of spaces founded were: %d\n", sentence, n1);
}
