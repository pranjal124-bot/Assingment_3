// rps3.c - Rock Paper Scissors (3 Rounds)
// Compile: gcc -o rps3 rps3.c
// Run: ./rps3  (or rps3.exe on Windows)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;
    int pScore = 0, cScore = 0;

    srand(time(NULL));

    printf("=== Rock Paper Scissors (Best of 3) ===\n");
    printf("1 = Rock\n2 = Paper\n3 = Scissors\n\n");

    for (int round = 1; round <= 3; round++) {
        printf("Round %d - Enter your choice: ", round);
        scanf("%d", &player);

        if (player < 1 || player > 3) {
            printf("Invalid choice! Round skipped.\n");
            continue;
        }

        computer = (rand() % 3) + 1;
        printf("Computer chose: %d\n", computer);

        if (player == computer) {
            printf("Tie!\n");
        }
        else if ((player == 1 && computer == 3) ||
                 (player == 2 && computer == 1) ||
                 (player == 3 && computer == 2)) {
            printf("You win this round!\n");
            pScore++;
        }
        else {
            printf("Computer wins this round!\n");
            cScore++;
        }

        printf("Score -> You: %d | Computer: %d\n\n", pScore, cScore);
    }

    printf("=== FINAL RESULT ===\n");
    if (pScore > cScore)
        printf(" You win the match!\n");
    else if (pScore < cScore)
        printf(" Computer wins the match!\n");
    else
        printf(" Match is a draw!\n");

    return 0;
}

