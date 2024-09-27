#include <stdio.h>
int main(){
/* Take input from user*/
  int num,remainder,Final_number;
  scanf("%d", &num);
  remainder= num%10;
  Final_number= num - remainder;
  printf("%d %d", remainder, Final_number);

  return 0;
}
