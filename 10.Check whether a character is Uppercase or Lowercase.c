#include <stdio.h> 
int main() 
{ 
char hati; 
printf("Enter a Character: "); 
 scanf("%c", &hati); 
if (hati >= 'A' && hati <= 'Z') 
 printf("%c is uppercase\n", hati); 
else if  (hati >= 'a' && hati <= 'z')
  printf("%c is lowercase\n", hati); 
else
 printf("%c is not an alphabet\n", hati); 
}