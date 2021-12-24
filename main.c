#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num1, num2;
    printf("Enter Two Number : ");
    scanf("%d%d", &num1, &num2);
    printf("Your Larger Number is = %d", num1>num2?num1:num2);
    getch();
    return 0;
}
