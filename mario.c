#include<cs50.h>
#include<stdio.h>

int main(void)
{
   int i,j,l,n;
   printf("height: ");
   n=get_int();
  while(!(n>0&&n<23))
  {
      printf("height: ");
     n=get_int();
  }
 // if(n>0&&n<23)
  //{
   for(i=n;i>=1;i--)
   {
      for(j=0;j<=i;j++)
      {
         printf(" ");
      }
      for(l=n;l>=i-1;l--)
      {
         printf("#");
      }
      printf("\n");
   }

//  }


}