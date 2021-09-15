//***************************************************
//** Created By: Luc Gaupin						   **
//** Date......: 27th October, 2018				   **
//** Reason....: functionMenu assignment		   **
//***************************************************

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define CLS system("CLS")
#define PAUSE system("pause");
#define _CRT_SECURE_NO_WARNINGS
#define FLUSH myFlush();

void myFlush()
{
	while (getchar() != '\n');
}

// ----------- Prototype Functions Go Here -----------
int getChoice();
int addNumbers();
int squareChoiceThree();
void displayMenu();
void displayName();
void displayNameAlot();

// ----------- main() Goes Here -----------
int main()
{
	int choice;
	char name = ' ';

	do 
	{
		choice = getChoice();
		switch(choice)
		{
		case 1:				//Display The Name Given To The Program
			displayName();
			char name = ' ';
			break;
		case 2:				//Display The Name Given A Certain Amount of Times
			displayNameAlot();
			break;
		case 3:				//Displays Two Integer Values Being Added Together
			addNumbers();
			break;
		case 4:				//Square The Choice/ Answer Given In The Previous Choice (3.)
			squareChoiceThree();
			break;
		case 5:				//Exit's The Program
			break;
		default:
			break;
		}
	}while (choice != 5);
}

// ----------- Fucntions Go Here -----------
void displayMenu()
{
	CLS;
	printf("1. Display Your Name.\n");
	printf("2. Display Your Name _ Times.\n");
	printf("3. Display Add Two Numbers.\n");
	printf("4. Square Choice 3. Result.\n");
	printf("5. Exit The Program.\n");
	printf("\n\n");
	printf("Enter Your Selection: ");
}// End displayMenu()

void displayName()
{
	CLS;
	char name[100];
	printf("What Is Your Name?\n");
	gets(name);
	printf("Your Name Is: %s\n", name);
	PAUSE;
	return 0;
}// End displayName()

void displayNameAlot()
{
	CLS;
	int userRequestedNumber;
	char name[100];

	printf("What Is Your Name?\n");
	gets(name);
	printf("How Many Times Would You Like Your Name To Come Onto The Screen?\n");
	scanf_s("%i", &userRequestedNumber);

	for (int loop = 1; loop <= userRequestedNumber; loop++)
	{
		printf("%i. %s\n", loop, name);
	}
	PAUSE;
	return 0;
}// End displayNameAlot()

int addNumbers()
{
	CLS;
	int numOne, numTwo, sum;

	printf("Please Enter Two Numbers So We Can Add Them: \n");
	scanf_s("%i %i", &numOne, &numTwo); FLUSH

	sum = numOne + numTwo;

	printf("The Sum Of %i & %i is: %i\n\n", numOne, numTwo, sum);
	PAUSE;
	return 0;
}// End addNumbers()

int squareChoiceThree(int sum)
{
	CLS;
	int numOne, numTwo;

	printf("Enter The Two Numbers You Entered In Option 3:  \n");
	scanf_s("%i %i", &numOne, &numTwo);


	int numsAddedTogether = numOne + numTwo;
	int numsSquared = numsAddedTogether * numsAddedTogether;
	
	printf("The Two Numbers Added (%i + %i = %i) Then Squared Is: %i.\n\n", numOne, numTwo, numsAddedTogether, numsSquared);
	PAUSE;
	return 0;
}// End squareChoiceThree()

int getChoice()
{
	int result;
	displayMenu();
	scanf_s("%i", &result); FLUSH;

	return result;
}// End getChoice()


