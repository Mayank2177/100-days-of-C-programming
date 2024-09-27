#include <stdio.h>
int main(){
  
  int num, two_digit, remainder, new_number; 
  printf("Enter the number: ");
  scanf("%d %d", &num, &two_digit);
  remainder= num%100;
  new_number= (num - num%100)+ two_digit;
  printf("%d", new_number);

  return 0;
}
