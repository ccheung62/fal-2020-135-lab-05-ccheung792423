#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

//Task A
TEST_CASE ("Regular cases"){
  CHECK(isDivisibleBy(4,5)==false);
  CHECK(isDivisibleBy(125,25)==true);
  CHECK(isDivisibleBy(8,3)==false);
}
TEST_CASE ("negative numbers"){
  CHECK(isDivisibleBy(-100,-25)==true);
  CHECK(isDivisibleBy(-178,-3)==false);
  CHECK(isDivisibleBy(-2,-3)==false);
}
TEST_CASE("zero"){
  CHECK(isDivisibleBy(0,100)==true);
  CHECK(isDivisibleBy(100,0)==false);
}

//Task B

