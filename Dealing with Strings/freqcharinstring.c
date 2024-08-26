#include<stdio.h>
#include<string.h>
  int ifexist(char v,char c[],int y,int ct[]){
    int i;
    for (int  i = 0; i < y; i++)
    {
        if (c[i]==v)
        {
           ct[i]++;
           return 1;
        }
        
    }
    return 0;
    
  }
int main(){
char str[100],chr[100];
int count[100];
int i,n,x;
printf("ENter the string \n");
 scanf("%s",str);
n=strlen(str);

chr[0]=str[0];
count[0]=1;
x=0;
for (int i = 1; i < n; i++)
{
 if (!ifexist(str[i],chr,x,count))
 {
    ++x;
   chr[x]=str[i];
   count[x]=1;
 }
 
}
printf("The count of each character  in the string %s is  \n",str);
for ( i = 0; i <= x ; i++)
{
   printf("%c\t%d \n",chr[i],count[i]);
   
}





     return 0;
}  