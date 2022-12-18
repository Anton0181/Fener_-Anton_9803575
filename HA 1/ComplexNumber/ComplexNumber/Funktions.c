#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "ReaderHeader.h"
void plus(CN array[]);
void minus(CN array[]);
void multiplikation(CN array[]);
void division(CN array[]);
void polar1(double real, double imaginary) {
	double r, a, b;
	r = sqrt(pow(real, 2) + pow(imaginary, imaginary));
	b = imaginary / real;
	if (real < 0 && imaginary < 0) {
		a = atan(b) - 3.1414926;
	}
	else if (real < 0) {
		a = atan(b) + 3.1414926;
	}
	else {
		a = atan(b);
	}
	printf("z = %.2lf * e^(i%.2lf)\n", r, a);
}
void polar2(double real, double imaginary) {
	double r, a, b;
	r = sqrt(pow(real, 2) + pow(imaginary, 2));
	b = imaginary / real;
	if (real < 0 && imaginary < 0) {
		a = atan(b) - 3.1414926;
	}
	else if (real < 0) {
		a = atan(b) + 3.1414926;
	}
	else {
		a = atan(b);
	}
	printf("z = %.2lf*(cos(%.2lf)+i*sin(%.2lf))\n", r, a, a);

	
}
void menu(double real, double imaginary) {
	int menu = -1;
	do {
		printf("Result format\n1. Karthesisch\n2. Polar 1\n3. Polar 2\n");
			
		scanf("%d", &menu);
		switch (menu){
		case 1: printf("z = %.2lf + %.2lfi\n", real, imaginary);
			break;
		case 2: polar1(real, imaginary);
			break;
		case 3: polar2(real, imaginary);
			break;
		default:
			printf("Try again. There is no option %d\n",menu);
			break;
		}
		
	} while (menu < 0 || menu >3);
}
void funktion(CN array[]) {
	char opt[10];
	char c;
	int br = 0;
	printf("Choose the option ('+' ,'-' ,'*', '/'): ");
	scanf("%s", &opt);
	do
	{
		c = opt[0];
		
		switch (c)
		{
		case '+': plus(array);
			br++;
			break;
		case '-': minus(array);
			br++;
			break;
		case '*': multiplikation(array);
			br++;
			break;
		case '/': division(array);
			br++;
			break;
		default:
			printf("\nWrong option, try again\n");
			printf("Choose the option ('+' ,'-' ,'*', '/'): ");
			scanf("%s", &opt);
			break;
		}
	} while (br == 0);
	
}
void plus(CN array[]) {
	double a1 = array[0].real;
	double a2 = array[1].real;
	double b1 = array[0].imaginary;
	double b2 = array[1].imaginary;
	double realRes = 0;
	double imaginaryRes = 0;

	realRes = (a1 + a2);
	imaginaryRes = (b1 + b2);
	menu(realRes, imaginaryRes);
	//printf("Result: %.2lf + %.2lfi\n", realRes, imaginaryRes);
}
void minus(CN array[]) {
	double a1 = array[0].real;
	double a2 = array[1].real;
	double b1 = array[0].imaginary;
	double b2 = array[1].imaginary;
	double realRes = 0;
	double imaginaryRes = 0;

	realRes = (a1 - a2);
	imaginaryRes = (b1 - b2);
	menu(realRes, imaginaryRes);
	//printf("%.2lf + %.2lfi", realRes, imaginaryRes);

}
void multiplikation(CN array[]) {
	double a1 = array[0].real;
	double a2 = array[1].real;
	double b1 = array[0].imaginary;
	double b2 = array[1].imaginary;
	double realRes = 0;
	double imaginaryRes = 0;

	realRes = ((a1*a2) - (b1*b2));
	imaginaryRes = ((a1*b2) + (a2*b1));
	menu(realRes, imaginaryRes);
	//printf("%.2lf + %.2lfi", realRes, imaginaryRes);

}
void division(CN array[]) {
	double a1 = array[0].real;
	double a2 = array[1].real;
	double b1 = array[0].imaginary;
	double b2 = array[1].imaginary;
	double realRes = 0;
	double imaginaryRes = 0;
	double nenner = 0;
	nenner = ((a2 * a2) + (b2 * b2));
	realRes = (((a1 * a2) +(b1* b2)) / nenner);
	imaginaryRes = (((a2 * b1) - (a1 * b2)) / nenner);
	menu(realRes, imaginaryRes);
	//printf("%.2lf + %.2lfi", realRes, imaginaryRes);

}