#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "ReaderHeader.h"

int element = 1;
int j = 0;
int formatCheck(char* str);
void reader(char* str) {
	int br = 0;
	printf("Format (a+bi) or ((-a)+(-bi))\n");
	printf("Enter complex number #%d: ", element);
	
	scanf("%s", str);
	
	while (br == 0) {
		
			
		
	if (formatCheck(str)) {
			element++;
			br++;
			break;
		}
	else if (!formatCheck(str)) {
		printf("Wrong format\n");
		reader(str);
	}
	}
	
}
int formatCheck(char* str) {
	int plus = 0;
	int imganary = 0;

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '+') {
			plus++;
		}
		else if (str[i] == 'i') {
			imganary++;
		}
	}
	if (plus == 1 && imganary == 1) {
		return 1;
	}
	else {
		
		return 0;
	}
}

void format(char* str, CN array[]) {
	int len = strlen(str);
	char number[10] = { '\0' };
	
	int k = 0;
	
	for (int i = 0; i < len; i++) {
		char c = str[i];
		if (c != '+' && c != 'i' && c!= '(' && c!=')') {
			number[k] = c;
			number[k + 1] = '\0';
			k++;
		}
		else if (c == '+' ) {
			array[j].real = atof(number);
			//printf("%lf\n", array[j].real);
			k = 0;
		}
		else if (c == 'i') {
			array[j].imaginary = atof(number);
			//printf("%lf\n", array[j].imaginary);
			k = 0;
			j++;
		}
	}
}
