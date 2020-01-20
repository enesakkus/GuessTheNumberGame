#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int numberCreator(void);

int main(){

    int number, guess;
    int counter =0;

    printf("Welcome to number guessing program...\n");
    srand(time(NULL));
    number = numberCreator();
    printf("I have a number between 1 and 1000.\n");


    do{
        printf("Please type your guess: ");
        scanf("%d",&guess);
        counter++;

        if(guess < number)
            printf("Too low\n");
        else if(guess > number)
            printf("Too high\n");

        if(guess == number){
            printf("Excellent! You guessed the number!\n");
        }


    }while(guess != number);
    if(counter < 10)
        printf("Either you know the secret or you got lucky!\n");
    else if(counter == 10)
        printf("Ahah! You know the secret!\n");
    else if(counter > 10)
        printf("You should be able to do better!\n");

}

int numberCreator(void){

    return 1+rand()%1000;

}
