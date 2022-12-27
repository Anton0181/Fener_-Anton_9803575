#include <stdio.h>
#include <math.h>
#include "funktion.h"


double funk_origin( double x){
    int power = 2;
    double res = pow((x-3),(double)power);

    return res;
}
double funk_derivative_analytic ( double x){
    double res = 2* (x -3);
    return res;
}

double funk_derivative_nummeric(double x){
    double h = 0.000000001;
    
    
    double res = (funk_origin(x+h) - funk_origin(x)) / h;
    return res;

}