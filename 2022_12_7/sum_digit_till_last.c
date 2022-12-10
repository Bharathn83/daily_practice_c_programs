/**
  *C Program to find the sum of digits of a number until 
  *a single digit is occurred
  *gcc -o sum_digit_till_last sum_digit_till_last.c
  */

#include <stdio.h>

int main() {
    unsigned long long int n, num;
    int sum = 0;
    printf("Enter the number = ");
    scanf("%lld", &num);

    n = num;
    while (n > 9 )
    {
         sum = 0;
         while (n > 0 )
         {
             sum += n % 10;
             n /= 10;
         }
         n = sum;
    }
    printf("last digit = %lld\n", n);
    return 0;
}
