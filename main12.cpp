#include <iostream>
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "CircularInt.hpp"
#include "catch.hpp"

std::string cirToString(const CircularInt &circularInt)
{
    std::stringstream ss;
    ss << circularInt ;
    return ss.str();
}

TEST_CASE("equals","==")
{
    CircularInt a1 {1, 12};
	CircularInt a2 {-4, 9};

   	 REQUIRE(a1 == 1);
     cout << a2;
   	 REQUIRE(a2 == -4);
	 REQUIRE(!(a1 == 10));
REQUIRE(!(a2 == 4));
}
