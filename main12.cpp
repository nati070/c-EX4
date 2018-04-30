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
    // REQUIRE
CircularInt a1 {1, 12};
	CircularInt a2 {1,9};
	CircularInt a3 {-3, 1};
	CircularInt a4 {-4, -2};
	// REQUIRE(!(a1<a2));
	// REQUIRE(a1<a3);
REQUIRE(a3<a4); 

}
