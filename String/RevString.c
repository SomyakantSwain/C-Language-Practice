#include <stdio.h>

int main()
{
    char str[13];

    printf("Enter a string (max 14 characters): ");

    gets(str);
   
 int len=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
     len++;
    }
printf("%d",len);

for (int i = (len-1); i>=0; i++)
    {
   printf("%c",str[i]);
    }
}
