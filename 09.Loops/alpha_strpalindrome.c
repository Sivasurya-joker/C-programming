#include<stdio.h>
#include<string.h>

int main ()
{
    char string[20];
    
    printf("Enter the word: ");
    scanf("%s",string);
    
    int i,len,flag=0;   
    len=strlen(string);
    for (i=0;i<len;i++)
    {
        if (string[i]!=string[len-i-1])
        {
            flag =1;
            break;
        }
    }
if (flag)
 {
    printf("%s is not  a palindrome\n",string );
 }
else 
 {
    printf("%s is  a palindrome\n",string);
 }

return 0;

}
