#include <stdio.h>

int main()
{
int a,b,last_digit;
printf("Enter the value of a:");
scanf("%d", &a);
last_digit=a%10;
b=a/10;
printf("%d, %d",b,last_digit);

    return 0;
}
