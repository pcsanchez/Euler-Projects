//Program that calculates the smallest positive number that can be evenly
//divisible by all of the numbers from 1 to 20

/*
1: The number must end in a 0 in order to be divisible by 2,5,10

Divisibilities that depend on others:

6:  The number must be divisible by 2 and 3
12: The number must be divisible by 3 and 4
14: The number must be divisible by 2 and 7
15: The number must be divisible by 3 and 5
18: The number must be divisible by 2 and 9
20: The number must be divisible by 10

Independent Divisibilities

3,4,7,8,9,11,13,16,17,19
*/

#include <iostream>

using namespace std;

bool divisible(int num){
  if(num%3!=0||num%4!=0||num%7!=0||num%8!=0||num%9!=0||num%11!=0||num%13!=0||num%16!=0||num%17!=0||num%19!=0||num%20!=0)
  return false;
  else
  return true;
}

int main(){

bool found = false;
int answer = 0;

for(int i = 2520;!found;i+=10){
  if(divisible(i)){
    answer=i;
    found = true;
  }
}

cout << answer << endl;

  return 0;
}
