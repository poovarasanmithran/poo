#include <stdio.h>
#include<string.h>
void main()
{
    char j=1,i,n;
    clrscr();
    scanf("%d",&n);
    for(i=1;i<=n;i++) j *= i;
    printf("%d\n",j);
    return 0;
}
