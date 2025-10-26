#include<stdio.h> 
int main()
 {
  int hati,ghora; 
printf("Enter two numbers: "); 
scanf("%d %d",&hati,&ghora); 
if (hati == ghora) 
 printf("Both are equal"); 
else if (hati > ghora)
  printf("%d is maximum\n", hati); 
else  
printf("%d is maximum\n", ghora); 
return 0; 
}