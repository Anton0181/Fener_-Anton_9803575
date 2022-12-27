#include <stdio.h>
#include <math.h>
#include "samples.h"
#include "newton.h"
#define ABS_ERROR 0.001

// Test cases for the Newton-Raphson algorithm
typedef struct test_case {
	double (*f)(double); 
	double (*fprime)(double); 
	double x0; 
	
}test_case;

test_case test_cases[] = {
    // Test case 1
    {
      .f = &f1,
      .fprime = &f1prime,
      .x0 = 5.0
     
    },
    // Test case 2
    {
      .f = &f2,
      .fprime = &f2prime,
      .x0 = 2.0
     
    },
    // Test case 3
    {
      .f = &f3,
      .fprime = &f3prime,
      .x0 = -1.0
      
    }
   
};
void run_test() {
    int found = 0;
    for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        test_case test = test_cases[i];
        double x0 = test.x0;
        double x1 = 0;
        for (int j = 0; j < 1000; j++) {
            x1 = x0 - test.f(x0) / test.fprime(x0);
            if (fabs(x1 - x0) < ABS_ERROR) {
                // Root found
                found++;
                printf("\nIttarations done = %d\nRoot = %.2lf\n", j + 1, x1);
                break;
            }
            x0 = x1;
        }
        if (found == 0) {
            printf("\nNo roots foudn\n");
        }

    }
}