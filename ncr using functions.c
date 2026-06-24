#include <stdio.h>

int fact(int n);
void ncr(int n, int r);

int main()
{
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    ncr(n, r);
    return 0;
}

int fact(int n)
{
    if(n == 1 || n == 0)
        return 1;
    else return n * fact(n - 1);
}

void ncr(int n, int r)
{
    if(r > n) {
        printf("Invalid: r cannot be greater than n");
        return;
    }
    int result = fact(n) / (fact(r) * fact(n - r));
    printf("%d", result);
}
