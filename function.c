#include<stdio.h>


void printTable(int start, int end);

int main() {

    int initial, end;

    printf("Hello welcome to this useless program:\n Please input 2 number: ");
    scanf("%d %d", &initial,&end);
    printTable(initial, end);

    return 0;
    }

void printTable(int start, int end) {
    
    int i;
    int mul;
    for(i = 1; i <= end; i++){
        mul = i*end;
        printf("The multiplication of %d x %d = %d\n",
                                        i, end, mul);
    }
}
