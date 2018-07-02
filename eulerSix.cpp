//Program that finds the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <iostream>
#include <cmath>

using namespace std;

int main(){

  int sumSquare = 0;
  int squareSum = 0;
  int limit = 0;

  cin >> limit;

  for(int i = 1;i <=limit;i++){
    sumSquare+=pow(i,2);
    squareSum+=i;
  }

  squareSum *= squareSum;

  cout << squareSum - sumSquare;

  return 0;
}
