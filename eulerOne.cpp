//Quick program that shows the sum of all numbers
//under 1000 that are divisible by 3 or 5
//Programed by Francisco Carlos Sanchez Ramirez
#include <iostream>

using namespace std;

int main(){

  int limit = 0;
  int sum = 0;

  cin >> limit;


  for(int i = 0;i < limit;i++){
    if(i%3==0||i%5==0)
      sum += i;
  }

  cout << sum << endl;
}
