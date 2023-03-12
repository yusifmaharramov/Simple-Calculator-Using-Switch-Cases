// This program is used to make arithmetic calculations of 2 numbers for example addition, subtraction, multiplication, and division.
// I've used switch case expressions to build the program. It's a very simple program and it's for beginners.

#include<stdio.h>
#include<stdlib.h>



float sum(float a, float b) { return (a + b); }//sum function prototyping. Takes 2 float arguments, and returns summation of that two numbers of float type.
float subtraction(float a, float b) { return (a - b); }// subtraction function prototyping. Takes 2 float arguments, and returns subtraction of that two numbers of float type.
float multiplication(float a, float b) { return (a * b); }//multiplication function prototyping. Takes 2 float arguments, and multiplies of that two numbers and returns float type
float division(float a, float b) { return (a / b); }//division function prototyping. Takes 2 float arguments, and returns division of that two numbers of float type


int main()
{
	int choice;// This is an integer variable entered by user that helps us to determine which function we'll call
	float a, b, result;// These are the float variables . "a" and "b" is entered by user and those are the numbers functions will take as arguments
	printf("Enter your choice : 0 is for sum, 1 is for subtraction, 2 is for multiplication, and 3 is for division\n");//ask user to enter number
	scanf_s("%d", &choice);//store that value in choice variable
	printf("Enter the two numbers that you want to perform operation : \n");// ask user to enter two numbers
	scanf_s("%f %f", &a, &b);//store those two numbers


	switch(choice)// used to determine which function is executed
	{
		case 0 : result = sum(a, b);
			break;
		case 1 : result = subtraction(a, b);
			break;
		case 2 : result = multiplication(a, b);
			break;
		case 3: result = division(a, b);
	}

	printf("%f", result);//print the result of the operation
	return 0;



}