#include <math.h>
#include <stdio.h>
double f1 (double x) {
    double res = pow(x - 3, 2);
    return res;
}

double f1prime(double x) {
    double res = 2 * (x - 3);
    return res;
}

double f2(double x) {
    double res = pow((x + 5), 2);
    return res;
}

double f2prime(double x) {
    double res = 2 * (x + 5);
    return res;
}



double f3(double x) {
    double res = pow(x - 10, 3);
    return res;
}

double f3prime(double x) {
    double res = 3 * (pow(x - 10, 2));
    return res;
}

