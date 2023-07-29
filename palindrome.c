#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int num)
{
    int reversed = 0;
    int originalNumber = num;
    // let's reverse the number
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        /*reversed = 0 * 10 + 878 % 10
        reversed = 0+ 8 = 8
        */
        num = num / 10;
        // num = 878 / 10 = 87
    }
    printf("The reversed number is %d\n", reversed);
    if (originalNumber == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("Enter a number to check whether it is a palindrome or not \n");
    scanf("%d", &number);
    
    if (isPalindrome(number))
    {
        printf("This number is a palindrome number\n");
    }
    else{
        printf("This is not a palindrome number\n");
    }
    return 0;
}