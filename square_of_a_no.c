# include <stdio.h>
// square of a number
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= 8; i++) {
        printf("%d\n ", n);
        n = n*n;
    }
}