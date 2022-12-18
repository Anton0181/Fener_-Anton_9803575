#pragma once
#define READER_
typedef struct Complex_Number {
	double real;
	double imaginary;
}CN;
void reader(char*);
void format(char*,CN array[]);