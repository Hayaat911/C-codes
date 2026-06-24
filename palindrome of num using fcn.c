#include <stdio.h>

int reverse(int n);
void palindrome(int n);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    palindrome(num);
    return 0;
}


int reverse(int n)
{
    int rev = 0, rem;
    while(n != 0) {
    rem = n % 10;
    rev = rev * 10 + rem;
    n = n / 10;
    }
    return rev;
}

void palindrome(int n)
{
    int rev = reverse(n);
    if (n == rev){
        printf("The given number is a Palindrome");
    }
    else printf("The given number is not a Palindrome");
}
