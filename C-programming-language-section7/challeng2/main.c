/* چالش: ساخت بازی Tic-Tac-Toe در زبان C
🎮 شرح بازی:
دو بازیکن داریم: X و O

صفحه بازی ۳×۳ است.

بازیکنان نوبتی خانه‌ای از صفحه را انتخاب می‌کنند (با وارد کردن عدد 1 تا 9).

هر بازیکن باید تلاش کند سه مهره در ردیف، ستون یا قطر قرار دهد.

در پایان، یکی از این سه حالت پیش می‌آید:

یکی از بازیکنان برنده می‌شود.

مساوی (هیچ‌کس برنده نمی‌شود).

بازی ادامه دارد.

*/

#include <stdio.h>
#include <stdlib.h>



char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice, player;


// function decloration
int checkForWin();
void displayBoard();
void markBoard(char mark);


int main(int argc, char **argv)
{
	int gameStatus;
    char mark;
    
    player = 1;
    
    do
    {
        displayBoard();
        player = (player % 2) ? 1:2;
        
        printf("Player %d, enter a number: \n", player);
        
        scanf("%d", &choice);
        
        mark = (player == 1) ? 'X':'O';
        markBoard(mark);
        
        gameStatus = checkForWin();
        
        player++;
        
        
    }while(gameStatus == -1);

    
	return 0;
}



int checkForWin()
{
    int returnValue = 0;
    
    if (square[1] == square[2] && square[2] == square[3])
        returnValue = 1;
    else if (square[4] == square[5] && square[5] == square[6])
        returnValue = 1;
    else if (square[7] == square[8] && square[8] == square[9])
        returnValue = 1;
    else if (square[1] == square[4] && square[4] == square[7])
        returnValue = 1;
    else if (square[2] == square[5] && square[5] == square[8])
        returnValue = 1;
    else if (square[3] == square[6] && square[6] == square[9])
        returnValue = 1;
    else if (square[1] == square[5] && square[5] == square[9])
        returnValue = 1;
    else if (square[3] == square[5] && square[5] == square[7])
        returnValue = 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
        && square[4] != '4' && square[5] != '5' && square[6] != '6' &&        square[7] != '7' && square[8] != '8' && square[9] != '9')
            returnValue = 0;
    else
        returnValue = -1;
        
        
    return returnValue;
}


void displayBoard()
{  
    system("clear"); // it's for linux system, for windows it's -> system("cls")
    
    printf("\n\n\tTIC TAC TOI\n\n");
    printf("Player1 (X) - Player2 (O)\n\n");

    printf(" %c   |  %c   |   %c  |\n", square[1], square[2], square[3]);
    printf("_____|______|______|\n");
    printf("     |      |      |\n");
    printf(" %c   |  %c   |   %c  |\n", square[4], square[5], square[6]);
    printf("_____|______|______|\n");
    printf("     |      |      |\n");
    printf(" %c   |  %c   |   %c  |\n\n\n", square[7], square[8], square[9]);

}


void markBoard(char mark)
{
    if (choice == 1 && square[1] == '1')
        square[1] = mark;
    else if (choice == 2 && square[2] == '2')
        square[2] = mark;
    else if (choice == 3 && square[3] == '3')
        square[3] = mark;
    else if (choice == 4 && square[4] == '4')
        square[4] = mark;
    else if (choice == 5 && square[5] == '5')
        square[5] = mark;
    else if (choice == 6 && square[6] == '6')
        square[6] = mark;
    else if (choice == 7 && square[7] == '7')
        square[7] = mark;
    else if (choice == 8 && square[8] == '8')
        square[8] = mark;
    else if (choice == 9 && square[9] == '9')
        square[9] = mark;
    else
    {
        printf("Invalid Choice.");
        player--;
        getchar();
    }
        
}





