#include<stdio.h>
void show(char*word)
{
      
        char ch;
 for(int i=0;word[i]!='\0';i++)
    {
        ch=word[i];
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            printf("vowels are   : %c\n ",ch);
        }
        else if (ch>= 'a' && ch<= 'z')
        {
          printf("consonants are : %c \n",ch);  
        } 
      
    }
}


void count(char*word)
{
    int vowels=0;
    int consonants=0;
    
    char ch;//single decalration 
    
 
    for(int i=0;word[i]!='\0';i++)
    {
        ch=word[i];
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            vowels++;
        }
        else
        {
        consonants++;  
        }
    }
    printf("No of vowels in word: %d\n",vowels);
    printf("No of consonants in word: %d\n",consonants);  
  
}   
    
int main ()
{
    char word[100];
    printf("word:");
    scanf("%99s",word);
    count(word);
    show(word);

    return 0;
}