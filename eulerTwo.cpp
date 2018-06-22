//Program that finds the sum of all the even terms
//in the Fibonacci Sequence whose values do not
//exceed four million

#include <iostream>

using namespace std;

int fib(int n){
  if(n <= 1)
    return n;
  return fib(n-1)+fib(n-2);
}

int main(){
  int n = 10;
  cout << fib(n);
  return 0;
}
