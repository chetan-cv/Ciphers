#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{

    int i, key;

    if ( argc != 2)
    {
       printf("Retry\n");
       return 1;
    }
    key = atoi(argv[1]);
    string p = get_string("plaintext: ");
    printf("cipher text: ");
    for( i=0; i < strlen(p); i++)
    {
        if( isalpha(p[i]))
        {
           if( isupper(p[i]))
           {

               printf("%c", ((((p[i] - 65) + key) % 26) + 65));
           }

          else
           {

               printf("%c", ((((p[i] - 97) + key) % 26) + 97));

           }
        }
      else
       {
          printf("%c", p[i]);
       }
    }
      printf("\n");
      return 0;


}
