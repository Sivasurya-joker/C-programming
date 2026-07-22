#include <stdio.h>
 int main(){
    
    char ch;
    char lang[100];
    char sen[100];
    
    //input 
    scanf("%c",&ch);
    
    scanf("%s",lang);
    
    getchar();
    
    scanf("%99[^\n]",sen);
    
    
    //output 
    
    printf("%c\n",ch);
    printf("%s\n",lang);
    printf("%s\n",sen);
    
    
    return 0;
    
    
    
 }
