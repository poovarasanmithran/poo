#include<stdio.h>
#include<conio.h>
void main()
{
char str[90],i,l;
clrscr();
printf("enter string ");
scanf("%s ",&str);
l=strlen(str);
for(i=l-1;i>=0;i--)
{ 
printf("%c",str[i]);
return 0;
}
}
