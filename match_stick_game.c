#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int ms=21,user,computer;
	
	while(1)
	{
		printf("Number of match sticks left = %d\n",ms);
		printf("Pick 1,2,3 or 4 matches ");
		scanf("%d",&user);
		
		if(user > 4 || user < 1)
		{
			continue;
		}
		ms = ms - user;
		printf("User picked %d match sticks\n",user);
		printf("Number of match sticks left = %d\n",ms);
		computer = 5 - user;
		printf("Computer picked %d match sticks\n",computer);
		printf("Number of match sticks left = %d\n",ms);
		
		ms = ms - computer;
		
		if(ms == 1)
		{
			printf("Number of match sticks left = %d\n",ms);
			printf("You have lost the game \nComputer won!\n");
			break;
		}
		
	}
}

/*Write a program for a matchstick game being played between*/
/*the computer and a user. Your program should ensure that the*/
/*computer always wins. Rules for the game are as follows:*/
/*-There are 21 matchsticks.*/
/*-The computer asks the player to pick 1, 2, 3, or 4*/
/* matchsticks.*/
/*-After the person picks, the computer does its*/
/* picking.*/
/*-Whoever is forced to pick up the last matchstick*/
/* loses the game.*/

/* Sample run
Number of match sticks left = 21
Pick 1,2,3 or 4 matches 4
User picked 4 match sticks
Number of match sticks left = 17
Computer picked 1 match sticks
Number of match sticks left = 17
Number of match sticks left = 16
Pick 1,2,3 or 4 matches 4
User picked 4 match sticks
Number of match sticks left = 12
Computer picked 1 match sticks
Number of match sticks left = 12
Number of match sticks left = 11
Pick 1,2,3 or 4 matches 4
User picked 4 match sticks
Number of match sticks left = 7
Computer picked 1 match sticks
Number of match sticks left = 7
Number of match sticks left = 6
Pick 1,2,3 or 4 matches 2
User picked 2 match sticks
Number of match sticks left = 4
Computer picked 3 match sticks
Number of match sticks left = 4
Number of match sticks left = 1
You have lost the game 
Computer won!
*/

/*
Note:Computer will always win😂
*/
