#include<stdio.h>
int main()
{
    int a[5], key, flag = 0;
    printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &key);
    for(int i = 0; i < 5; i++)
    {
        if(a[i] == key)
        {
            printf("Element found at position %d\n", i );
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("Element not found in the array\n");
    }
    return 0;
}