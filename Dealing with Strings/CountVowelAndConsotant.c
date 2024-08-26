// Counting vowels and consonants in a sentence

#include <stdio.h>

int main()
{
    char arr[300];
    int ctv, ctc, i;
    printf("ENter your sentence  \n");
    gets(arr);
    ctc = ctv = 0;
    while (arr[i] != '\0')
    {

        if ((arr[i] >= 65 && arr[i] <= 90) || (arr[i] >= 97 || arr[i] <= 122))
        {
            if (arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U' || arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'i')
            {
                ctv++;
            }
            else
            {
                ctc++;
            }
        }
        i++;
    }


   printf("No. of vowels in your sentence is %d \nNo. of consonants in your sentence is %d \n", ctv, ctc);
   
   
    

    return 0;
}
