#ifndef _STACKS_H
#define _STACKS_H

template <class T>
class Stack {
public:
	Stack() {top1 = -1; top2 = 49; top3 = 99;}
	void push(int,const T&);
	void pop(int);
	int top(int);
	
private:
	const static int size = 150;
	T arr[size];
	int top1;
	int top2;
	int top3;

};
#endif
