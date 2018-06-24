//Program that calculates the largest palindrome made from two three digit numbers

#include <iostream>

using namespace std;

bool palindrome(int x){

  int thresh = 0;
  int base = x;

  while(x > 0){
    thresh = (thresh*10) + (x%10);
    x = x/10;
  }

  return thresh == base;

}

int main(){

  int answer = 0;
  int temporalA = 0;
  bool found = false;

  for(int firstDigit = 990; firstDigit > 99;firstDigit-=11){
    for(int secondDigit = 999; secondDigit > 99;secondDigit--){
      temporalA = firstDigit*secondDigit;

      if(answer<temporalA && palindrome(temporalA)){
        answer = temporalA;
        break;
      }
      else if(temporalA < answer){
        break;
      }
    }
  }

  cout << answer << endl;

}
