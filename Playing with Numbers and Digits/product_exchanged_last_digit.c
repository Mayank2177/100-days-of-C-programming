#include <stdio.h>
int main(){
  
  int num1, num2, remainder1, remainder2, new1, new2, product;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  remainder1= (num1)%10;
  remainder2= (num2)%10;

  new1 = (num1 - remainder1)+ remainder2;
  new2= (num2 - remainder2)+ remainder1;
  product= (new1)*(new2);
  printf("%d %d %d", new1, new2, product);

    return 0;
}
