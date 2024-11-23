#include <stdio.h>

int main() {
    
    int n,a[100];
    
    printf("Enter the length of array: ");
    scanf("%d", &n);
    
    int i;
    printf("Enter the array: ");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    
    printf("\nLeagers of array are: \n");
    for(i=0;i<n;i++)
        if(a[i]>a[i+1] && a[i]>a[i-1])
            
            printf("%d\n", a[i]);

        printf("%d", a[n-1]);
            
    return 0;
