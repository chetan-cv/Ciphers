#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int count=0,quarter=25,dime=10,nickel=5,penny=1,amount=0;
    float owed;
    printf("Enter the change owed: ");
    owed=get_float();
    while(!(owed>0&&"%lf"))
    {
       printf("Enter the change owed: ");
       owed=get_float();

    }
    amount=owed*100;
    while(amount-quarter>=0)
    {
        amount-=quarter;
        count++;
    }
    while(amount-dime>=0)
    {
        amount-=dime;
        count++;
    }

    while(amount-nickel>=0)
    {
        amount-=nickel;
        count++;
    }
   while(amount-penny>=0)
    {
        amount-=penny;
        count++;
    }
 printf("%i\n",count);

}