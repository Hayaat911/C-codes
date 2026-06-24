#include<stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int new, i, n = 5;
    int location;

    printf("Enter the new Element: ");
    scanf("%d", &new);

    printf("Enter the position: ");
    scanf("%d", &location);

        for(i = n; i > location; i--){
        arr[i] = arr[i - 1];
    }

    n++;
    arr[location] = new;

        for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
