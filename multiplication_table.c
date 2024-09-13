/*This program read an integer from the promp 
    and compute its multiplication table*/
#include<stdio.h>

void printTable(int val);

int main() {

    int mult;

    printf("Please input a number you want to obtain the multiplication table: ");
    scanf("%d", &mult);
    printTable(mult);

    return 0;
    }

void printTable(int val) {
    
    int i;
    int mul;
    for(i = 1; i <= 10; i++){
        mul = i*val;
        printf("The multiplication of %3d x%3d =%3d\n", i, val, mul);
    }
}
