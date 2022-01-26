#include <iostream>
#include "stacks.h"

template <class T>
void Stack<T>::pop(int index)
{
	if(index == 1) 
	{
		--top1;
	}
	else if(index == 2) 
	{
		--top2;
	}
	else if(index == 3) 
	{
		--top3;
	}
}


template <class T>
int Stack<T>::top(int index)
{
	if(index == 1) 
	{
		return arr[top1];
	}
	else if(index == 2) 
	{
		return arr[top2];
	}
	else if(index == 3) 
	{
		return arr[top3];
	}
}

template <class T>
void Stack<T>::push(int index,const T& data)
{
	if(index == 1) 
	{
		top1++;
		arr[top1] = data;
	}
	else if(index == 2) 
	{
		top2++;
		arr[top2] = data;
	}
	else if(index == 3) 
	{
		top3++;
		arr[top3] = data;
	}
	

}


