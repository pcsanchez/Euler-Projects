//Program that finds the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <iostream>
#include <cmath>

using namespace std;

int main(){

  int answer = 0;
  int thresh = 0;

  for(int i = 1;i <=100;i++){
    answer+=pow(i,2);
    thresh+=i;
  }

  thresh *= thresh;

  cout << thresh - answer;

  return 0;
}
