#include<stdio.h>

void main()
{

 int n = 25;
 int i, j, k;

 clrscr();

  for(i=2; i <= n; i++)
  {
   for(j=n-1;j >=i ;j--)
   {
    printf(" ");
   }
   for(k=2; k <= i; k++)
   {
   printf("*");
   }
   printf("\n");
   }

getch();
}