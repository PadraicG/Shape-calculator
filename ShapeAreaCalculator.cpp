// ShapeAreaCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

#define Triangle 1
#define Rectangle 2
#define Square 3
#define Parallelogram 4
#define Circle 5


int main()
{
	int Shape;
	
	//Triangle
	float Base = 0;
	float Height = 0;
		float TriangleArea = (Base / 2)*Height;

	//Rectangle
	float RectangleLength = 0;
	float RectangleWidth = 0;
	float RectangleArea = RectangleLength * RectangleWidth;

	//Square
	float SquareLength = 0;
	float SquareArea = SquareLength*SquareLength;

	//Parallelogram
	float ParallelogramBase = 0;
	float ParallelogramHeight = 0;
	float ParallelogramArea = ParallelogramBase * ParallelogramHeight;

	//Circle
	double Pi = 3.14;
		float Radius = 0;
		float CircleArea = Pi * Radius*Radius;

	printf("Pick a number to choose a shape, (1=Triangle, 2=Rectangle, 3=Square, 4=Parallelogram, 5=Circle):\n");
	scanf_s("%d", &Shape);

	switch (Shape)
	{
	case Triangle:
		printf("You chose Triangle \n");
		printf("Enter Base \n");
		scanf_s("%f", &Base);
		printf("Enter Height \n");
		scanf_s("%f", &Height);
		TriangleArea = (Base / 2)*Height;
		printf("%f", TriangleArea);
		break;

	case Rectangle:
		printf("You chose Rectangle \n");
		printf("Enter Length \n");
		scanf_s("%f", &RectangleLength);
		printf("Enter Width \n");
		scanf_s("%f", &RectangleWidth);
		RectangleArea = RectangleLength * RectangleWidth;
		printf("%f", RectangleArea);
		break;

	case Square:
		printf("You chose Square \n");
		printf("Enter Length \n");
		scanf_s("%f", &SquareLength);
		SquareArea = SquareLength * SquareLength;
		printf("%f", SquareArea);
		break;

	case Parallelogram:
		printf("You chose Parallelogram \n");
		printf("Enter Base \n");
		scanf_s("%f", &ParallelogramBase);
		printf("Enter Height \n");
		scanf_s("%f", &ParallelogramHeight);
		ParallelogramArea = ParallelogramBase * ParallelogramHeight;
		printf("%f", ParallelogramArea);
		break;

	case Circle:
		printf("You chose Circle \n");
		printf("Enter Radius \n");
		scanf_s("%f", &Radius);
		CircleArea = Pi * Radius*Radius;
		printf("%f", CircleArea);



	
	}




    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
