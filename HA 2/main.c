#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "newton.h"
#include "funktion.h"
#include "test.h"
int main() {
    double x;
    char opt[5];
    printf("Test run ? [y/n]");
    scanf("%s", &opt);
    if (opt[0] == 'y') {
        run_test();
    }
    else {
        printf("Enter start point:");
        scanf("%lf", &x);

        newton_alg(x);
    }
    

}