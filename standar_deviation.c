#include<stdio.h>
#include<math.h>
void main()
{int x[10],sum=0,i;
float avg,sd;
for(i=0;i<=10;i++)
{scanf("%d",&x[i]);
sum=sum+x[i];}
avg=sum/10;
for(i=0;i<=10;i++)
{sum=sum+pow(x[i]-avg,2);}
sd=pow(sum,0.5);
printf("%d",sd);
}
