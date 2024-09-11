#include <stdio.h>




    #define LOWER -100

    #define UPPER 100

    #define STEP 10

int main () {

    int cels;



    for(cels = LOWER; cels <= UPPER; cels = cels + STEP) {

       float fahr = ((cels*9)/5 + 32);

        printf("%3d%9.2f \n", cels, fahr);

    }





}//

// Created by adela on 8/29/2024.

//
