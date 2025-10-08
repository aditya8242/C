#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int ms=21,user,computer;
	
	while(1)
	{
		printf("Number of match sticks left = %d\n",ms);
		printf("\nPick 1,2,3 or 4 matches ");
		scanf("%d",&user);
		
		if(user > 4 || user < 1)
		{
			continue;
		}
		ms = ms - user;
		printf("\nUser picked %d match sticks\n",user);
		printf("\nNumber of match sticks left = %d\n",ms);
		computer = 5 - user;
		printf("\nComputer picked %d match sticks\n",computer);
		printf("\nNumber of match sticks left = %d\n\n",ms);
		
		ms = ms - computer;
		
		if(ms == 1)
		{
			printf("Number of match sticks left = %d\n\n",ms);
			printf("\nYou have lost the game \nComputer won!\n");
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

/*
Note:Computer will always win😂
*/
