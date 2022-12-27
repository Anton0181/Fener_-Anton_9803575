#include <stdio.h>
#include "funktion.h"
#include <math.h>


#define ABS_ERROR 0.001

double newton_alg(double x0){
    double x1;
    int prove = 0;
   fptr_t fptr = &funk_origin;
   fptr_t f_analyticptr = &funk_derivative_analytic;
  fptr_t f_numerickptr = &funk_derivative_nummeric;
  char option ;
  printf("Welche Ableitung nutzen für das Algorithmus: analytysche[a] oder nummerische[n]? [a/n]");
  scanf("%c",&option);
  if(option == 'a' || option == 'n'){
        prove = 1;
    }

while(prove = 0){
    
   
        printf("Falsche Eingabe. Nur [a] oder [n] Optionen sind erlaubt\n");
        printf("Welche Ableitung nutzen für das Algorithmus: analytysche[a] oder nummerische[n]? [a/n]");
        scanf("%c",&option);
    
    
}
    if(option == 'a'){
        for (int i = 0; i < 1000; i++) {
             x1 = x0 - fptr(x0)/f_analyticptr(x0);
             if (fabs(x1 - x0) < ABS_ERROR) {
                // Root found
            printf("Ittarations done = %d\nRoot = %f\n",i+1 ,x1);
             return 0;
            }
            x0 = x1;
  }
    }
    else if(option == 'n'){
         for (int i = 0; i < 1000; i++) {
             x1 = x0 - fptr(x0)/f_numerickptr(x0);
             if (fabs(x1 - x0) < ABS_ERROR) {
                // Root found
            printf("Ittarations done = %d\nRoot = %f\n",i+1 ,x1);
             return 0;
            }
            x0 = x1;
    }
    }
 
}