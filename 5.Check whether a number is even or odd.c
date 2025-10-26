#include <stdio.h> 
int main()
 { 
 int i; 
printf("Enter a number: "); 
scanf("%d",&i); 
if (i%2 == 0)
  printf("%d is an Even number\n",i); 
else 
 printf("%d is an Odd number\n",i); 
return 0; 
}