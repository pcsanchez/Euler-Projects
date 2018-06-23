//Program that calculalates the largest prime factor of a given number

#include <iostream>
#include <cmath>

using namespace std;

int largestPrime(long long int n){
  while(n%2==0){
    n=n/2;
  }

  for(int i = 3;i < sqrt(n);i+=2){

    while(n%i==0){

      n = n/i;
    }
  }

  return n;
}

int main(){
  long long int num = 0;

  cin >> num;

  cout << largestPrime(num);
}
