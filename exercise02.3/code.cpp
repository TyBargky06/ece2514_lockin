#include "code.h"
// Pulls in the declaration of playRockPaperScissors from code.h. This lets the compiler check that the function we define below

int playRockPaperScissors(char computer_choice, char user_choice)
{
    if (computer_choice == user_choice)
    {  
        return 0;
    } 
    if ((user_choice == 'r' && computer_choice == 's') ||(user_choice == 's' && computer_choice == 'p') ||(user_choice == 'p' && computer_choice == 'r'))
    {
        return 1;
    }
    return 2;

} 