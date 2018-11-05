#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
string cipher(string plaintext, string key);

int main(int argc, char *argv[])
{
  int j;
  if (argc != 2)
   {
     printf("retry:\n ");
     return 1;
   }
   string key=argv[1];
   for (j = 0; j < strlen(key); j++)
   {
     if(!isalpha(key[j]))
     {
       printf("error! wrong key");
       return 1;
     }
   }
   string plaintext;
   do
   {

       printf("plaintext: ");
       plaintext = get_string();
       printf("ciphertext: ");
       cipher(plaintext, key);

   }while (plaintext=='\0');
  //printf("%s",final);
}
string cipher(string Plain, string Key)
{
    int l,m,n,len=strlen(Key);
    char*ref=Plain;
    for( l = 0, m = 0, n = len + 1; l <= n; l++)
   {
     if(isalpha(Plain[l]))
     {
        if(isupper(Plain[l]))
            {

               printf("%c", ((((ref[l] - 65) + (Key[m%len] - 65)) % 26) + 65));
               m++;
            }

         else
           {

              printf("%c", ((((ref[l] - 97) + (Key[m%len] - 97)) % 26) +97 ));
              m++;

          }

       }

       else
       {
          printf("%c",ref[l]);
       }
    }
    printf("\n");
    return 0;
}
