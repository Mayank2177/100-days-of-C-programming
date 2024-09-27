#include <stdio.h>
int main(){
/* Take input from user*/
  int last_two_digit,num, new_number;
  printf("Enter the number: ");
  scanf("%d", &num);
  last_two_digit= num - ((num/100)*100);
  new_number= num - (num - ((num/100)*100));
  printf("%d %d", last_two_digit, new_number);

  return 0;
}
