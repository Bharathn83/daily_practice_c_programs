/** C program to find factorial of a number.
  * gcc -o fact fact.c
  */
#include <stdio.h>
//int a = 10;
int main() {
    int num = 0;
    unsigned long long int fact = 1;
    printf("num = ");
    scanf("%d", &num);
//    printf("\n");
    int n = num;
    if (-1 >= num) {
        printf("Incorrect Input\n");
        return -1;
    }
    if (0 == num || 1 == num)
    {
        printf("fact(%d) = 1\n", num);
        return 0;
    }
    while (1 <= num) {
        fact *= num;
        num--;
        //printf("fact(%d) = %lld\n", num, fact);
    }
    printf("fact(%d) = %lld\n", n, fact);
    return 0;
}
