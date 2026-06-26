#include <stdio.h>
#include <stdlib.h>

int main() {
    int heads = 0;
    int tails = 0;
    int r;
    int i;
    char name[31];

    /*asking username*/
    printf("Who are you?(limited 30)\n");
    scanf("%s", name);
    printf("Hello, %s!", name);

    /*Tossing a coin*/
    printf("Tossing a coin...\n");
    for(i=0;i<3;i++) {
        r = rand() % 2;
        if(r==0) {
            heads++;
            printf("Round %d: Heads\n", i+1);
        } else {
            tails++;
            printf("Round %d: Tails\n", i+1);
        }
    }

    /*Judging Win or Lose*/
    if(heads>tails) {
        printf("You win!");
    } else {
        printf("You lose...");
    }


    return 0;
}