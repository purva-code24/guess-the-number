#include<stdio.h>
#include<stdlib.h>//for random variable
#include<time.h>
int main(){
	//fristly genertaing random no.
	int number,guess, ngusses=1;
	srand(time(0));//for getting different values
	number = rand()%100 + 1;//for getting random variable(divide by 100+1 to get value b/w 1 to 100
	//printf("the number is %d ",number);
	//keep running the loop till number is guessed
	do{
		printf("guess the number between 1 to 100\n");
		scanf("%d", &guess);
		if(guess>number){
			printf("lower no. please!\n");
		}
		else if(guess<number){
			printf("higher no. please!\n");
		}
		else{
			printf("you have gussed in %d attemptes\n",ngusses);
		}
		ngusses++;
	}while(guess!=number);
	return 0;
}
