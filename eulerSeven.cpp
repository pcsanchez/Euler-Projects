//Program that calculates the nth Prime Number

#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n){
  for(int i = 2;i < n/2;i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}

int main(){

  int limit = 0;

  cin >> limit;

  vector<int> primeNumbers;

  primeNumbers.push_back(2);
  primeNumbers.push_back(3);

  for(int i = 5;primeNumbers.size()!=limit;i+=2){
    if(isPrime(i)){
      primeNumbers.push_back(i);
    }
  }

  cout << primeNumbers[primeNumbers.size()-1] << endl;

  return 0;
}
