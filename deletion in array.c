#include <stdio.h>
int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int i, n = 5;

    n--;

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
