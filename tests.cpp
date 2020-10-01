#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

//Task A
TEST_CASE ("Task A: Regular cases"){
  CHECK(isDivisibleBy(4,5)==false);
  CHECK(isDivisibleBy(125,25)==true);
  CHECK(isDivisibleBy(8,3)==false);
}
TEST_CASE ("Task A: Negative numbers"){
  CHECK(isDivisibleBy(-100,-25)==true);
  CHECK(isDivisibleBy(-178,-3)==false);
  CHECK(isDivisibleBy(-2,-3)==false);
}
TEST_CASE("Task A: Zero"){
  CHECK(isDivisibleBy(0,100)==true);
  CHECK(isDivisibleBy(100,0)==false);
}

//Task B
TEST_CASE("Task B: Regular cases"){
  CHECK(isPrime(100)==false);
  CHECK(isPrime(47)==true);
  CHECK(isPrime(3)==true);
}
TEST_CASE("Task B: Negative numbers"){
  CHECK(isPrime(-100)==false);
  CHECK(isPrime(-45)==false);
  CHECK(isPrime(-7)==false);
}
TEST_CASE("Task B: Zero and one"){
  CHECK(isPrime(0)==false);
  CHECK(isPrime(1)==false);
}

//Task C
TEST_CASE("Task C: Regular cases"){
  CHECK(nextPrime(74)==79);
  CHECK(nextPrime(30)==31);
  CHECK(nextPrime(4)==5);
}
TEST_CASE("Task C: Input is a prime number"){
  CHECK(nextPrime(73)==79);
  CHECK(nextPrime(83)==89);
  CHECK(nextPrime(29)==31);
}
TEST_CASE("Task C: Less than 2"){
  CHECK(nextPrime(-100)==2);
  CHECK(nextPrime(0)==2);
  CHECK(nextPrime(1)==2);
}

//Task D
TEST_CASE("Task D: Regular cases"){
  CHECK(countPrimes(4,15)==4);
  CHECK(countPrimes(20,30)==2);
  CHECK(countPrimes(6,66)==15);
}
TEST_CASE("Task D: No prime in range"){
  CHECK(countPrimes(24,28)==0);
  CHECK(countPrimes(62,66)==0);
  CHECK(countPrimes(32,36)==0);
}
TEST_CASE("Task D: Starting and ending with prime numbers"){
  CHECK(countPrimes(3,13)==5);
  CHECK(countPrimes(23,29)==2);
  CHECK(countPrimes(53,61)==3);
}

//Task E
TEST_CASE("Task E: Regular cases"){
  CHECK(isTwinPrime(25)==true);
  CHECK(isTwinPrime(45)==true);
  CHECK(isTwinPrime(27)==true);
  CHECK(isTwinPrime(64)==false);
}
TEST_CASE("Task E: Negative numbers"){
  CHECK(isTwinPrime(-27)==false);
  CHECK(isTwinPrime(-25)==false);
  CHECK(isTwinPrime(-10)==false);
}
TEST_CASE("Task E: Zero"){
  CHECK(isTwinPrime(0)==true);
}

//Task F
TEST_CASE("Task F: Regular cases"){
  CHECK(nextTwinPrime(9)==11);
  CHECK(nextTwinPrime(8)==9);
  CHECK(nextTwinPrime(76)==77);
}
TEST_CASE("Task F: Input is a twin prime"){
  CHECK(nextTwinPrime(43)==45);
  CHECK(nextTwinPrime(39)==41);
  CHECK(nextTwinPrime(71)==73);
}
TEST_CASE("Task F: The previous number is a prime number"){
  CHECK(nextTwinPrime(60)==61);
  CHECK(nextTwinPrime(12)==13);
  CHECK(nextTwinPrime(74)==75);
}
TEST_CASE("Task F: Two prime number are one number apart"){
  CHECK(nextTwinPrime(28)==29);
}

//Task G
TEST_CASE("Task G: Regular cases"){
  CHECK(largestTwinPrime(2,18)==17);
  CHECK(largestTwinPrime(21,30)==29);
  CHECK(largestTwinPrime(41,50)==49);
}
TEST_CASE("Task G: No twin prime in range"){
  CHECK(largestTwinPrime(2,2)==0);
  CHECK(largestTwinPrime(-100,-80)==0);
  CHECK(largestTwinPrime(92,94)==0);
}
TEST_CASE("Task G: Lower bound is the only twin prime"){
  CHECK(largestTwinPrime(25,26)==25);
  CHECK(largestTwinPrime(55,56)==55);
  CHECK(largestTwinPrime(91,94)==91);
}
TEST_CASE("Task G: Upper bound is the largest twin prime"){
  CHECK(largestTwinPrime(80,95)==95);
  CHECK(largestTwinPrime(22,57)==57);
  CHECK(largestTwinPrime(-100,49)==49);
}

