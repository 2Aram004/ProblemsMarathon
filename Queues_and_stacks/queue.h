#ifndef _QUEUE_H
#define _QUEUE_H
#include "stack.h"

template <typename T>
class Queue {

public:
void pop_front();
void push_back(const T&);
T back() {return begin.top();}
T front();

private:
Stack<T> begin;
Stack<T> end;

};
#endif
