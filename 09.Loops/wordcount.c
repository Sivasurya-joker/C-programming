#include<stdio.h>
void count(char*word)
{
    int vowel=0;
    int consonants=0;
     int i;
     int ch;
     for(i=0;word[i]!='\0';i++)
     {

            ch=word[i];
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        vowel++;

        else
        consonants++;    
     }
     printf("No of vowels in word: %d\n",vowel);
     printf("No of consonants in word: %d\n",consonants);
}
int main (){
    char word[100];
    printf("word:");
    scanf("%99s",word);

    count(word);
    
    return 0;


}