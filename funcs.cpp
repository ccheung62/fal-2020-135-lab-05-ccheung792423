#include <iostream>
#include "funcs.h"

//Task A
bool isDivisibleBy(int n, int d) {
  if (d==0){
    return false; //can't divide by zero 
  }
  if (n%d==0){
    return true; //no remainder so it is divisible
  }
  else {
    return false;
  }
}

//Task B
bool isPrime(int n) {
  bool prime = true;
  if (n<0){       //negative numbers are not prime numbers
    return false;
  }
  if (n==0 || n==1){  //0 and 1 are not prime numbers
    return false;
  }
  for (int i=2; i<=n/2; i++){ //checking all possible factors
    if (isDivisibleBy(n,i)){
      prime = false; //not prime when divisible  
      break;
    }
  }
  return prime;
}

//Task C
int nextPrime(int n){
  int i;
  for (i=n+1; isPrime(i)==false; i++); //skip to the next prime
  return i;
}

//Task D
int countPrimes(int a, int b){
  int count=0;
  if (a>b){
    int temp = a;
    a = b;
    b = temp;
  }
  int num = a;
  if (isPrime(a)){ //if the starting bound is prime then count +1
    count++;
  }
  while (nextPrime(num)<=b){ //check the next prime to see if it's in range
    count++;
    num = nextPrime(num); //check the next prime after prime number checked
  }
  return count;
}

//Task E
bool isTwinPrime(int n){
  if(isPrime(n)){ //if n is not a prime number, it is not a twin prime
    if (isPrime(n-2)){ //check ±2 for prime
      return true; 
    }
    else if(isPrime(n+2)){
      return true;
    }
  }
  return false;
}

//Task F
int nextTwinPrime(int n){
  for (int i=n+1;1==1;i++){ //return i when the next twin prime is reached
    if(isTwinPrime(i)){
      return i;
    }
  }
}

//Task G
int largestTwinPrime(int a, int b){
  int num;
  if (a > b){
    int temp = a;
    a = b;
    b = temp;
  }
  for(int i=a;nextTwinPrime(i)<=b; i++){
    num = nextTwinPrime(i); //save the largest twin prime within the bound
  }
  if (nextTwinPrime(a)>b){ //no twin prime in range(not counting lower bound)
    if (isTwinPrime(a)){
      return a; //if lower bound is the only twin prime, return a
    }
    return -1; 
  }
  return num;
}
