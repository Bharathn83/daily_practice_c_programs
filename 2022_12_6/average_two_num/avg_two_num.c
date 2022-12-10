/** C program to find factorial of a number.
  * gcc -o avg_two_num avg_two_num.c
  */

#include <stdio.h>

int main() {
    int a=0, b = 0;
    float avg = 0;
    printf("number a = ");
    scanf("%d", &a);
    printf("number b = ");
    scanf("%d", &b);

    avg = (float)(a + b) / 2;
    
    printf("Average = %.1f\n", avg);

    return 0;
}
