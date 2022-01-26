#include <iostream>
#include <vector>
#include <climits>
#include "stack.h"

template <class T>
void Stack<T>::sort()
{
	Stack<T> st_tmp;

	for(int i = top_index ; i >= 0; --i)
		{
			int Min = ret_min();
			st_tmp.push(Min);
			
			Stack<T> tmp2;
			int tmp = i;	

			while(tmp != -1)
			{
				if(top() != Min) 
					{
						tmp2.push(top());
					}

			pop();
			tmp--;
			}

			*this = tmp2;

		}
	*this = st_tmp;
}


template <typename T>
void Stack<T>::push(const T& value)
{
	if(value < min)
	{
		vec.push_back(value);
		min = value;
	}

    if(top_index < MAX_SIZE)
    arr[++top_index] = value;
}

template <typename T>
void Stack<T>::pop()
{
	
	if(arr[top_index] == vec[vec.size() - 1])
	{
		vec.pop_back();
		min = vec[vec.size() - 1];
	}

    if(!IsEmpty())
    {
        --top_index;
    }
    else
        std::cout << " STACK IS EMPTY ";
}

