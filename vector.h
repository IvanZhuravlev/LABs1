#ifndef VECTOR_H
#define VECTOR_H
#include <cmath>
#include <string.h>

typedef struct vector
{
 int x;
 int y;
}vector;

void print_menu(int select);
void print_error();
void toString(double r1, double r2);
double sum(double a, double b);
double substraction(double a, double b);
double multiply(double n, double coord);

#endif
