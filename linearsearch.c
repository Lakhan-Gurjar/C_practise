// Program for linearSearch
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[5];
    int i = 0, j, item;
    printf("Enter array elements :" );
    for (j = 0; j < 5; j++)
    {
        scanf("%d", &a[j]);
    }
    printf("Enter Searching Item :");
    scanf("%d", &item);
    while (i < 5)
    {
        if (a[i] == item)
        {
            printf("Item is found with location = %d", i);
            break;
        }
        i++;
    }
    if (i >= 5)
    {
        printf("Item is not found");
        getch();
    }
    return 0;
}
