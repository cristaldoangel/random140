#include <stdio.h>

int foo();
int foo2();
float foo3();
float foo4();
void foo5(int a, int b, float c, float d);

int main() {

    int a, d;
    float b, c;
    a = foo();
    d = foo2();
    b = foo3();
    c = foo4();
    printf("Hello %d %d %.2f %.2f\nFrom Main", a, d, b, c);
    foo5(a,d,b,c);

    return 0;
}

int foo(){
    return 4;
}

int foo2(){
    int a = 1;
    int b = 2;

    return a + b;
}

float foo3(){
    return 1.0;
}

float foo4(){

    float a = 1.0;
    float b = 2.1;

    return a + b;
}

void foo5(int a, int b, float c, float d){
    printf("\nHello %d %d %.2f %.2f\nFrom function", a, b, c, d);
}
