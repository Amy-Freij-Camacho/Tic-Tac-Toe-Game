/*
 * tictactoe.c
 *
 *  Created on: May 5, 2024
 *      Author: amyfreij-camacho
 */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 3

char board[SIZE][SIZE];

void initialize_board() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = '-';
        }
    }
}

void print_board() {
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

bool check_win(char player) {
    // Check rows and columns
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return true;
    }

    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return true;

    return false;
}

bool is_board_full() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == '-') return false;
        }
    }
    return true;
}

void play_game() {
    char player = 'X';
    int row, col;
    bool game_over = false;
    char input[10];
    bool valid_input = false;

    initialize_board();
    print_board();

    while (!game_over) {
        valid_input = false;
        printf("\nPlayer %c's turn. Enter row and column (0-2): ", player);


        while (!valid_input) {
            fgets(input, sizeof(input), stdin);


            if (sscanf(input, "%d %d", &row, &col) == 2) {

                if (row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == '-') {
                    valid_input = true;
                } else {
                    printf("Invalid move! Try again: ");
                }
            } else {
                printf("Invalid input! Try again: ");
            }
        }

        board[row][col] = player;
        print_board();

        if (check_win(player)) {
            printf("\nPlayer %c wins!\n", player);
            game_over = true;
        } else if (is_board_full()) {
            printf("\nThe game is a draw!\n");
            game_over = true;
        }

        player = (player == 'X') ? 'O' : 'X';
    }
}

int main() {
    play_game();
    return 0;
}
