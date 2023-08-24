#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

bool isWonRow(char player, const char game[3][3], uint8_t rowNum)
{
    //If there is a row that is completed.
    if ((game[rowNum][0] == game[rowNum][1]) && (game[rowNum][0] == game[rowNum][2]) && (game[rowNum][0] != (' '))) {
        //If the characters are that of the player's.
        if (game[rowNum][2] == player)
        {
            return true;
        }
    }

    //Something failed, so player probably lost.
    return false;
}

int main(void)
{
    //char game[3][3] = {{'X', 'O', ' '},{'X', 'X', 'X'}, {' ', ' ', ' '}};
    //printf(isWonRow('X', game, 1) ? "true\n" : "false\n"); 

    //const char game[3][3] = {{'X', 'O', ' '},{' ', ' ', ' '}, {'X', 'X', 'O'}};
    //printf(isWonRow('X', game, 2) ? "true\n" : "false\n");   

    const char game[3][3] = {{'X', 'X', 'X'},{' ', ' ', ' '}, {'O', 'O', 'O'}};
printf(isWonRow('O', game, 0) ? "true\n" : "false\n"); 
}