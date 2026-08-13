#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void   show_the_game(){
    printf("1.Stone\n 2.Paper\n 3.Sissors\n");

} 
int get_the_choice_from_the_user(int human){
  printf("choose the choose  one from above give input: ");
  scanf("%d",&human);
  return human;
}
int give_the_computer_choice(int computer){
      srand(time(0));
    computer = rand() % 3 + 1;
    return computer;
}
void check_the_game(int human,int computer ){
    if (human == computer)
        printf("Draw");
    else if ((human == 1 || computer == 2)) 
     printf("Paper catches the stone\n You wins\n");
    
    else if ((human== 2 || computer == 3))
     printf("Stone breaks the sissors\n you wins\n");
    
    else if((human == 3 || computer == 1))
     printf("sissors cut the paper \n you wins\n");
     
    else
        printf("Computer Wins\n");
}
int main (){
    int human;
    int computer ;

    show_the_game();
    human = get_the_choice_from_the_user(human);
    computer = give_the_computer_choice(computer);
    check_the_game(human,computer);

    return 0;
}