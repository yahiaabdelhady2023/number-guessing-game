#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int evaluate_number(int guess_number, int target_number){
    if (guess_number == target_number){
        printf("You have guessed the number ! \n");
        return 0;
    }
    else if(guess_number < target_number){
        printf("Low Guess! \n");
        return 1;

    }
    else{
        printf("High Guess! \n");
        return 1;

    }
}

int main(){
    srand(time(NULL)); // time() takes a variable type of t_time or NULL and returns integer , if NULL it returns current time

    printf("Welcome to number guessing game ! \n");
    int not_closed = 1;
    while (not_closed){
        printf("Press -1 to stop the game");
        int con = 1;
        int guess_number;
        int target_number=rand();
        int number_of_attempts = 3;

        while(con){
            printf("You have %d attempts left \n",number_of_attempts);
            printf("Please enter a number : \n");
            scanf("%d",&guess_number);
            con = evaluate_number(guess_number,target_number);
            number_of_attempts = number_of_attempts - 1;

            if (number_of_attempts==0){
                con=0;
                printf("Failed! \n");
            }

            if (guess_number==-1){
                printf("Game closed! \n");
                con=0;
                not_closed=0;
            }
    }
}

}