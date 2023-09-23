#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

    int rugby_try = 5;
    int converstion = 2;
    int penalty = 3;
    int drop_goal = 3;

    int new_try;
    int new_conver;
    int new_penalty;
    int new_drop_goal;
    int total_score;

    new_try = rugby_try * atoi(argv[1]);
    new_conver = converstion * atoi(argv[2]);
    new_penalty = penalty * atoi(argv[3]);
    new_drop_goal = drop_goal * atoi(argv[4]);
    
    total_score = new_try + new_conver + new_penalty + new_drop_goal;

    printf("%d\n", total_score);

    return (0);

}
