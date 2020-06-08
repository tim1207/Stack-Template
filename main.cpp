#include<iostream>
#include "Header.h"
using namespace std;


int main()
{
	stack_array<int, 20 > stackInt;
	cout << stackInt.isEmpty() << endl;
	cout << stackInt.isFull() << endl;
	int i;
	cout << "push :" << endl;
	for (i = 0; i < 15; i++)
	{
		stackInt.push(i);
	}
	stackInt.printStack();
	cout << "pop :" << endl;
	for (i = 0; i < 15; i++)
	{
		stackInt.pop();
	}
	cout << stackInt.isEmpty() << endl;
	cout << stackInt.isFull() << endl;
	stackInt.printStack();
	system("pause");
	system("cls");


	stack_array<float, 20 > stackFloat;
	cout << stackFloat.isEmpty() << endl;
	cout << stackFloat.isFull() << endl;

	cout << "push :" << endl;
	float aa = 1.01;
	for (i = 0; i < 10; i++)
	{
		stackFloat.push(aa);
		aa += 0.01;

	}
	stackFloat.printStack();
	cout << "pop :" << endl;
	for (i = 0; i < 15; i++)
	{
		stackFloat.pop();

	}
	cout << stackFloat.isEmpty() << endl;
	cout << stackFloat.isFull() << endl;
	stackFloat.printStack();
	system("pause");
	system("cls");
}