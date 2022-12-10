/*
 *C program to calculate compound interest
 *compound interest formula
 *compound interest = principle * ((1+rate/100)^time - 1)
 *
 *gcc -o compound_interest compound_interest.c -lm
 * /

#include <stdio.h>
#include <math.h>

int main(){
    double principle = 0, rate = 0, time = 0, ci = 0;
    
    printf("Enter principle =");
    scanf("%lf",&principle);

    printf("Enter Rate of Interest =");
    scanf("%lf",&rate);

    printf("Enter time in years =");
    scanf("%lf",&time);

    ci = principle * (pow((1 + (rate/100)), time) - 1);

    printf("compound interest = %.1lf\ntotal amount after %.1lf years = %.1lf\n", ci, time, principle + ci);

    return 0;
}
