#include<stdio.h>
void main()
{int row,col,a[3][3],b[3][3],c[4][4];
 
for(row=0;row<3;row++)
   {for(col=0;col<3;col++)
      {printf("enter matrix a%d%d:",row+1,col+1);
       scanf("%d",&a[row][col]);
      }
   } 

for(row=0;row<3;row++)
   {for(col=0;col<3;col++)
      {printf("enter matrix b%d%d:",row+1,col+1);
       scanf("%d",&b[row][col]);
      }
   }

for(row=0;row<3;row++)
   {for(col=0;col<3;col++)
      {c[row][col]=a[row][col]+b[row][col];
       printf("c%d%d:%d  ",row+1,col+1,c[row][col]);
      }
   }
}
