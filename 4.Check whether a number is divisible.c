#include <stdio.h>
 int main()
  {
 int a,d; 
 printf("Enter number: "); 
 scanf("%d", &a); 
 printf("Enter divisor: "); 
 scanf("%d",&d); 
 if (a % d==0) 
  printf("%d is divisible by %d\n", a, d); 
else
  printf("%d is not divisible by %d\n",a, d); 
return 0; 
}