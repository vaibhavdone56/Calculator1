/*
 * Calculator.c
 *
 * Copyright 2011 Desg <desg@xdesg.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 * other member harshal tarle
 */


#include <stdio.h>
#include <stdlib.h>
#include<math.h>


float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);
//New function of Floor Division Added
int floorDivide(float num1, float num2);

int main(void)
{
	int choice;
	float num[2];
	// / A mini dialog we are using to get the user to make a choice
	printf("Welcome to the Calculator world\n");
	printf("\n Enter The Any Two Number for Calc: ");
	scanf("%f%f",&num[0], &num[1]); //These are the numbers we are going to use inside of the calculator

	printf("\nEnter your choice:\n");
	printf("1. Addition of numbers\n");
	printf("2. Multiplication of numbers\n");
	printf("3. Subtraction of numbers\n");
	printf("4. Division\n");
	printf("5. Floor Division \n");
	scanf("%d",&choice);



	// This function is going to be used to switch the functions if some aren't used.
	switch (choice)
	{
		case 1:
			printf("The sum is %f and %f : %f",num[0],num[1], add(num[0], num[1]));
			break;
		case 2:
			printf("The product is %f and %f : %f",num[0],num[1], multiply(num[0],num[1]));
			break;
		case 3:
			printf("The difference is %f and %f : %f", num[0],num[1],subtract(num[0], num[1]));
			break;
		case 4:
			printf("The Quotient is %f and %f : %f",num[0],num[1], divide(num[0], num[1]));
			break;
		case 5:
			printf("The floor division  is %f and %f : %d",num[0],num[1], floorDivide(num[0], num[1]));
			break;
		default:
			printf("Wrong choice.");
			return 1;

	}
	return 0;

}

// These are the functions we are going to use inside the main function
float add(float num1, float num2)
{
	return num1 + num2;
}

float multiply(float num1, float num2)
{
	return num1 * num2;
}

float subtract(float num1, float num2)
{
	return num1 - num2;
}

float divide( float num1, float num2)
{
	return num1 / num2;
}

int floorDivide(float num1, float num2){
	int answer= (int)num1/num2;
	return answer;
}






