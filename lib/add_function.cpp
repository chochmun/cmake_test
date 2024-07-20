#include "add_function.h"
#include <stdio.h>

void Add(double a,double b){

    printf("%.2f + %.2f is %.2f\n",a,b,a+b);

}

void get_Average(double a,double b){

    double avg=(a+b)/2;

    printf("average is %.2f\n",avg);

}