//Quick program that shows the sum of all numbers
//under 1000 that are divisible by 3 or 5
//Programed by Francisco Carlos Sanchez Ramirez
#include <iostream>

using namespace std;

int main(){
  int sum = 0;

  for(int i = 0;i < 1000;i++){
    if(i%3==0||i%5==0)
      sum += i;
  }

  cout << sum << endl;
}
