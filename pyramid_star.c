#include<stdio.h>
void main()
{int n,space,row,i,j; 
scanf("%d",&n);
space=n-1;
for(row=1;row<=n;row++)
  {for(i=1;i<=space;i++)
     {printf(" ");}
   space--;
   for(j=1;j<=2*row-1;j++)
     {printf("*");}
  
  printf("\n");}

}
