// Write a Program to find Simple interest(si).
// p is the principal amount, r is the rate, and n is time in a years
#include <stdio.h>
int main()
{
    int p, r, n, si;

    printf("Enter principal amount:- ");
    scanf("%d", &p);
    printf("Enter Rate of interest:- ");
    scanf("%d", &r);
    printf("Enter Number of Years:- ");
    scanf("%d", &n);

    si = p * r * n / 100;

    printf("\n principal amount:- %d", p);
    printf("\n Rate of interest:- %d", r);
    printf("\n Number of Years:- %d", n);
    printf("\n Simple Interest:- %d", si);

    return 0;
}