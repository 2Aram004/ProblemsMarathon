#ifndef _STACK_H
#define _STACK_H

template <typename T>
class Stack {
  public:

  void sort();
  T ret_min() {return vec[vec.size() - 1];}
  Stack() {top_index = -1; min = INT_MAX;}
  int top() {
            if(!IsEmpty())
            return arr[top_index];
            
            else 
                std::cout << " STACK IS EMPTY ";
                return -1;
  }
 
  void push(const T&);
  void pop();
  bool IsEmpty() {return top_index == -1;}
  
  private:
  std::vector<T> vec;	
  T min;
  int top_index;
  static const int MAX_SIZE = 50;
  T arr[MAX_SIZE];
  
};
#endif

