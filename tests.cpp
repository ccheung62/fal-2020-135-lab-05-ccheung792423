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
TEST_CASE ("Task D: Upper bound is less than lower bound"){
  CHECK(countPrimes(13,3)==0);
  CHECK(countPrimes(29,23)==0);
  CHECK(countPrimes(61,53)==0);
}

//Task E
TEST_CASE("Task E: Regular cases"){
  CHECK(isTwinPrime(15)==false);
  CHECK(isTwinPrime(43)==true);
  CHECK(isTwinPrime(56)==false);
  CHECK(isTwinPrime(71)==true);
}
TEST_CASE("Task E: Negative numbers"){
  CHECK(isTwinPrime(-27)==false);
  CHECK(isTwinPrime(-25)==false);
  CHECK(isTwinPrime(-10)==false);
}
TEST_CASE("Task E: Zero"){
  CHECK(isTwinPrime(0)==false);
}
TEST_CASE("Task E: Input is not a prime but ±2 is"){
  CHECK(isTwinPrime(25)==false);
  CHECK(isTwinPrime(45)==false);
  CHECK(isTwinPrime(27)==false);
  CHECK(isTwinPrime(64)==false);
}
TEST_CASE("Task E: Input is the in between the twin prime number"){
  CHECK(isTwinPrime(42)==false);
  CHECK(isTwinPrime(12)==false);
  CHECK(isTwinPrime(30)==false);
}

//Task F
TEST_CASE("Task F: Regular cases"){
  CHECK(nextTwinPrime(9)==11);
  CHECK(nextTwinPrime(8)==11);
  CHECK(nextTwinPrime(41)==43);
}
TEST_CASE("Task F: Input is the second twin prime"){
  CHECK(nextTwinPrime(43)==59);
  CHECK(nextTwinPrime(13)==17);
  CHECK(nextTwinPrime(31)==41);
}
TEST_CASE("Task F: Input is the number in between the prime number"){
  CHECK(nextTwinPrime(12)==13);
  CHECK(nextTwinPrime(18)==19);
  CHECK(nextTwinPrime(42)==43);
}

//Task G
TEST_CASE("Task G: Regular cases"){
  CHECK(largestTwinPrime(2,18)==17);
  CHECK(largestTwinPrime(21,30)==29);
  CHECK(largestTwinPrime(41,50)==43);
}
TEST_CASE("Task G: No twin prime in range"){
  CHECK(largestTwinPrime(2,2)==-1);
  CHECK(largestTwinPrime(-100,-80)==-1);
  CHECK(largestTwinPrime(20,28)==-1);
}
TEST_CASE("Task G: Upper bound is less than lower bound"){
  CHECK(largestTwinPrime(18,2)==-1);
  CHECK(largestTwinPrime(30,21)==-1);
  CHECK(largestTwinPrime(50,41)==-1);
}
TEST_CASE("Task G: Lower bound is the only twin prime"){
  CHECK(largestTwinPrime(43,55)==43);
  CHECK(largestTwinPrime(13,16)==13);
  CHECK(largestTwinPrime(73,100)==73);
}
TEST_CASE("Task G: Upper bound is the largest twin prime"){
  CHECK(largestTwinPrime(2,13)==13);
  CHECK(largestTwinPrime(27,31)==31);
  CHECK(largestTwinPrime(-100,19)==19);
}

