#include <stdio.h>
 int main()
  {
  int Hati; 
printf("Enter a number: "); 
scanf("%d", &Hati); 
if (Hati > 0)
  printf("The number is Positive\n"); 
else if (Hati < 0)
  printf("The number is Negative\n"); 
else
  printf("Zero\n"); 
return 0; 
}