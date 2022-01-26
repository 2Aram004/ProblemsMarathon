#include<iostream>
#include <vector>
#include "gitstack.cpp"
#include "queuewstacks.cpp" 

int main()
{
	Stack<int> a;
	a.push(2);
	a.push(8);
	a.sort();
	std::cout << "a top is " << a.top() << std::endl;

	Queue<int> q;
	q.push_back(7);
	q.push_back(6);
	q.push_back(8);
	q.pop_front();
	std::cout << q.front();
	std::cout << q.back();
}
