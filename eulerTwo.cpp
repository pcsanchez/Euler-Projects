//Program that finds the sum of all the even terms
//in the Fibonacci Sequence whose values do not
//exceed four million

#include <iostream>

using namespace std;

int main(){
  int sum = 0;
  int array[100];
  array[0] = 0;
  array[1] = 1;

  for(int i = 2;array[i-1]+array[i-2]<=4000000;i++){
    array[i] = array[i-1]+array[i-2];
    if(array[i]%2==0)
    sum+=array[i];
  }

  cout << sum;

}
