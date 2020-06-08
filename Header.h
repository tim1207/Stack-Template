#pragma once
#include <iostream>

using namespace std;


template <typename T, int size>
class stack_array
{
	T data[size];
	int top;

public:

	int isEmpty() const
	{
		if (top == -1)
		{
			return 1;
		}
		return 0;
	}


	int isFull() const
	{
		if (top == size - 1)
		{
			return 1;
		}
		return 0;
	}


	bool push(T pushNumber)
	{
		if (isFull() == 1)
		{
			return false;
		}
		data[++top] = pushNumber;
		return true;
	}

	bool pop()
	{
		if (isEmpty() == 1)
		{
			return false;
		}
		cout << data[top--] << " has been popped\n";
		return true;
	}


	void printStack()
	{
		int i;
		for (i = top; i >= 0; i--)
		{
			cout << "\t" << data[i] << "\n";
		}
	}


	stack_array()
	{
		top = -1;
	}
};