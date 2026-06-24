#include <stdio.h>

void generateFib(int fib[], int size);
void printRev(int fib[], int size);

int main()
{
    int fib[11];
    generateFib(fib, 11);
    printRev(fib, 11);
    return 0;
}

void generateFib(int fib[], int size)
{
    int a = 0, b = 1, sum, i;
    for(i = 0; i < size; i++){
        fib[i] = a;
        sum = a + b;
        a = b;
        b = sum;
    }
}

void printRev(int fib[], int size)
{
    int i;
    for(i = size - 1; i >= 0; i--){
        printf("%d ", fib[i]);
    }
}
