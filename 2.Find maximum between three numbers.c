 #include<stdio.h>
  int main()
  { 
  int x,y,z; 
printf("Enter three numbers: "); 
scanf("%d %d %d", &x, &y, &z); 
if (x>y && x>z)
  printf("%d is maximum\n",x); 
else if (y>x && y>z)
  printf("%d is maximum\n",y); 
 else 
  printf("%d is maximum\n",z); 
 return 0; 
} 