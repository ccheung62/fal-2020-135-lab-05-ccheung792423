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
  if(isPrime(n)){
    if (isPrime(n-2)){ 
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
  /*
  if (isTwinPrime(n+1)){  //if the previous number is prime then the next number is a twin prime
    return n+1;
  }
  else if((nextPrime(n)-2)<=n){ //if the next prime number is 2 number or lessaway from n, then the next twin number is the next prime number +2
    if (isPrime(nextPrime(n)+2)){
      return nextPrime(n);
    }
    else{
      return nextPrime(n)+2;
    }
  }
  else {
    return nextPrime(n)-2; //the closest twin prime is the next prime number minus 2
  }
  */
  for (int i=n+1;1==1;i++){
    if(isTwinPrime(i)){
      return i;
    }
  }
}

//Task G
int largestTwinPrime(int a, int b){
  int i;
  int num;
  for(i=a;nextTwinPrime(i)<=b; i++){
    num = nextTwinPrime(i);
  }
  if (nextTwinPrime(a)>b){ //no twin prime in range(not counting lower bound)
    if (isTwinPrime(a)){
      return a; //if lower bound is the only twin prime, return a
    }
    return 0; 
  }
  return num;
}
