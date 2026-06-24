#include<stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int new, i, n = 5;
    int index;

    printf("Enter the Index: ");
    scanf("%d", &index);

    for(i = index; i < n; i++){
        arr[i] = arr[i + 1];
    }
    n--;

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;

}
