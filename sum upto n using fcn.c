#include <stdio.h>

int sum(int num);

int main()
{
    int result = sum(10);
    printf("%d", result);
    return 0;
}

int sum(int num)
{
    if (num == 0)
    return 0;

    else return num + sum(num - 1);
}
