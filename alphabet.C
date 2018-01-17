#include<stdio.h>
int main()
{
char ch;
printf("Enter the letter:");
scanf("%c",&ch);
if((ch>='a'&&ch<='z')//(ch>='A'&&ch<='Z'))
printf("%c is an alphabet.\n",ch);
else
printf("%c is not a alphabet!!!.\n"",ch);
return 0;
}
