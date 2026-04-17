# include <stdio.h>
#include <math.h>
//square of a number upto power 10
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Square of %d upto power 10 are: \n", n);
    for (int i = 1; i <= 10; i++) {
        float result = pow(n, i);
        printf("%d\n", (int)result);
    }

}