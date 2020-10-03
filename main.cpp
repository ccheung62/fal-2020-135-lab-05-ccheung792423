#include <iostream>
#include <cstdlib>

#include "funcs.h"

int main()
{
  std::srand(time(0));
  int a,b;
  
  //Task A
  std::cout << "Task A:\n";
  for (int i=0; i<5; i++){
    a = std::rand()%100;
    b = std::rand()%100;
    if (isDivisibleBy(a,b)){
      std::cout << a << " is divisible by " << b << "\n";
    }
    else {
      std::cout << a << " is not divisible by " << b << "\n";
    }
  }
  std::cout << "\n";
  
  //Task B
  std::cout << "Task B:\n";
  for (int i=0; i<5; i++){
    a = std::rand()%100;
    if(isPrime(a)){
      std::cout << a << " is a prime number\n";
    }
    else {
      std::cout << a << " is not a prime number\n";
    }
  }
  std::cout << "\n";
  
  //Task C
  std::cout << "Task C:\n";
  for (int i=0; i<5; i++){
    a = std::rand()%100;
    std::cout << "The next prime number after " << a << " is " << nextPrime(a) << "\n";
  }
  std::cout << "\n";

  //Task D
  std::cout << "Task D:\n";
  for (int i=0; i<5; i++){
    a = std::rand()%100;
    b = std::rand()%100;
    std::cout << "There are " << countPrimes(a,b) << " prime numbers between " << a << " and " << b << "\n";
  }
  std::cout << "\n";

  //Task E
  std::cout << "Task E:\n";
  for (int i=0; i<5; i++){
    a = std::rand()%100;
    if (isTwinPrime(a)){
      std::cout << a << " is a twin prime number\n";
    }
    else{
      std::cout << a << " is not a twin prime number\n";
    }
  }
  std::cout << "\n";

  //Task F
  std::cout << "Task F:\n";
  for(int i=0; i<5; i++){
    a = std::rand()%100;
    std::cout << "The next twin prime from " << a << " is " << nextTwinPrime(a) << "\n";
  }
  std::cout << "\n";

  //Task G
  std::cout << "Task G:\n";
  for (int i=0; i<5; i++){
    a = std::rand()%100;
    b = std::rand()%100;
    std::cout << "The largest twin prime between " << a << " and " << b << " is " << largestTwinPrime(a,b) << "\n";
    
  }
  std::cout << "\n";
  
  return 0;
}
