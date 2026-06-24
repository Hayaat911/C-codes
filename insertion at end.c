#include <stdio.h>
int main()
{
    int arr[6] = {10, 20, 30, 40, 50};
    int i, n = 5, new;

    printf("Enter a new number: ");
    scanf("%d", &new);

    arr[n] = new;
    n++;

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
