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


