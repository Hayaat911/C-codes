#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int i, n = 5;

    for(i = 0; i < n; i++){
        arr[i] = arr[i + 1];
    }
    
    n--;

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;

}
