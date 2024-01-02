#include <iostream>
#include <ctime>
#include <cstdlib>

//Function Declarations
void Generateenemy();
void WhoAttacksFirst();
// Character Connected Variables
int Character;
int PlayerHealth = 100;
int EnemyHealth = 100;
// Game Related Variables
int Game;
int main()
{
	std::cout << "==PlayGame==" << std::endl;
	std::cout << "(1)Play" << std::endl;
	std::cout << "(2)Exit" << std::endl;
	std::cout << "Confirm Choice: ";
	std::cin >> Game;

	switch (Game)
	{
	case 1:
		std::cout << "==Welcome==" << std::endl;
		std::cout << "Choose Your Character" << std::endl;
		std::cout << "(1)Fire" << std::endl;
		std::cout << "(2)Water" << std::endl;
		std::cout << "(3)Grass" << std::endl;
		std::cout << "(4)Earth" << std::endl;
		std::cout << "Enter Your Choice: ";
		std::cin >> Character;
		if (Character == 1)
		{
			std::cout << "You Choose Fire Type" << std::endl;
			std::cout << "Game Will Start" << std::endl;
			Generateenemy();
			std::cout << "Your Health: " << PlayerHealth << std::endl;
			std::cout << "Enemy Health: " << EnemyHealth << std::endl;
		}
		else if (Character == 2)
		{
			std::cout << "You Choose Water Type" << std::endl;
			std::cout << "Game Will Start" << std::endl;
			Generateenemy();
			std::cout << "Your Health: " << PlayerHealth << std::endl;
			std::cout << "Enemy Health: " << EnemyHealth << std::endl;
		}
		else if (Character == 3)
		{
			std::cout << "You Choose Grass Type" << std::endl;
			std::cout << "Game Will Start" << std::endl;
			Generateenemy();
			std::cout << "Your Health: " << PlayerHealth << std::endl;
			std::cout << "Enemy Health: " << EnemyHealth << std::endl;
		}
		else if (Character == 4)
		{
			std::cout << "Game Will Start" << std::endl;
			Generateenemy();
			std::cout << "Your Health: " << PlayerHealth << std::endl;
			std::cout << "Enemy Health: " << EnemyHealth << std::endl;
		}
		else
		{
			std::cout << "Invalid Choice" << std::endl;
		}
		std::cout << "Game Will Start" << std::endl;
		break;
	}
}
// Function Definitions
void Generateenemy()
{
	srand(time(0));
	int enemy = rand() % 4;
	if (enemy == 1)
	{
		std::cout << "Your Enemy is Fire Type" << std::endl;
	}
	else if (enemy == 2)
	{
		std::cout << "Your Enemy is Water Type" << std::endl;
	}
	else if (enemy == 3)
	{
		std::cout << "Your Enemy is Grass Type" << std::endl;
	}
	else if (enemy == 4)
	{
		std::cout << "Your Enemy is Earth Type" << std::endl;
	}
	else if (enemy == 0)
	{
		enemy = rand() % 4;
	}
}
void WhoAttacksFirst()
{
	srand(time(0));
	int First = rand() % 2;
	if (First == 1)
	{
		std::cout << "You Attack First" << std::endl;
	}
	else if (First == 2)
	{
		std::cout << "Enemy Attack First" << std::endl;
	}
	else if (First == 0)
	{
		First = rand() % 2;
	}
}