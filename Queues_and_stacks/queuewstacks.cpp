#include <iostream>
#include "queue.h"

template <typename T>
T Queue<T>::front()
{

	while(!begin.IsEmpty())
	{
	end.push(begin.top());
	begin.pop();
	} 
	int ret_top = end.top();

	while(!end.IsEmpty())
	{
	begin.push(end.top());
	end.pop();	
	}

	return ret_top;
}

template <typename T>
void Queue<T>::push_back(const T& value)
{
	begin.push(value);
}

template <typename T>
void Queue<T>::pop_front()
{
	
	while(!begin.IsEmpty())
	{
	end.push(begin.top());
	begin.pop();
	}


	end.pop();

	while(!end.IsEmpty())
	{
		begin.push(end.top());
		//std::cout << end.top() << " ";
		end.pop();
	}
}


