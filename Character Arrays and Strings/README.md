# Taking Input and Output

#### (i). Using array representing word as a whole

#### (ii). Using array representing word as set of characters
* Null Pointer

#### (iii). Using gets and puts function

  #include<stdio.h>  
  #include <string.h>  
   
  void main()
  {    
  char day[10];    
  printf("Enter current week day: \n");    
  gets(day);
   
  printf("Today is: ");    
  puts(day);  
  }


# Escape Sequences


# String Functions

To using them must include string.h file.
  #include <string.h>

To get the length of string, use strlen() function.
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("%d", strlen(alphabet));

- sizeof will always return the memory size (in bytes), and not the actual string length.

