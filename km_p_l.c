#include<stdio.h>
#define MILE    1.60934
#define GALLON  3.78541

int main(){
  float mpg, km_p_l;

  printf("Enter fuel effeciency in miles per gallon (mpg): ");
  scanf("%f",&mpg);

  km_p_l = (mpg * MILE)/GALLON;

  printf("%.2f mpg is equivalent to %.2f km/L\n", mpg, km_p_l);

  return 0;
}
