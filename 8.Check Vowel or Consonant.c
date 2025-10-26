#include <stdio.h> 
int main() 
{ 
char C; 
printf("Enter a Caracter: "); 
scanf("%c", &C); 
if(C=='a'||C=='e'||C=='i'||C=='o'||C=='u'|| C=='A'||C=='E'||C=='I'||C=='O'||C=='U') 
 printf("%c is a vowel\n", C); 
else
 printf("%c is a consonant\n", C); 
return 0; 
}