#include <stdio.h>
int main()
{

    int array[5] = {1, 2, 3, 4, 1};
    int i, new;
    int n = 5;
    printf("Enter the element to be placed at the beginning: ");
    scanf("%d", &new);

    for(i = n; i > 0; i--){
        array[i] = array[i - 1];
    }
    n++;
    array[0] = new;


    for(i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
