#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ReaderHeader.h"
#include "FunktionsHeader.h"

int main() {
	char firstStr[10], secondStr[10];
	CN array[3] = {0,0,0,0,0,0};
	//printf("1%lf\n2%lf\n3%lf\n4%lf\n", array[0].real,array[1].real, array[0].imaginary, array[1].imaginary);

	reader(&firstStr);

	reader(&secondStr);

	format(firstStr, &array);

	format(secondStr, &array);
	funktion(&array);

	//printf("Real: %lf\nImaginary: %lf\n", array[0].real, array[0].imaginary);

	//printf("Real: %lf\nImaginary: %lf\n", array[1].real, array[1].imaginary);

	
	//reader(&secondStr);
	return 0;
}