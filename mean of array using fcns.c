#include <stdio.h>
#define size 10

int mean(int array[]);

int main()
{
    int arr[size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, sum = 0;
    int result = mean(arr);
    printf("%d", result);
    return 0;
}

int mean(int array[])
{   
    int sum = 0;
    for(int i = 0; i < size; i++){

        sum += array[i];
    }
    int mean = sum / size;
    return mean;
}
