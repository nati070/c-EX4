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
    // CircularInt hour {1, 10};
    // CircularInt hour2 {1, 10};
    // bool test1 = (hour == hour2);
    // REQUIRE(test1);
    // REQUIRE(hour == 1 );
    // REQUIRE( 1 == hour );
    CircularInt a1 {1, 12};
	CircularInt a2 {1, 12};
	CircularInt a3 {4, 9};
	CircularInt a4 {1, 12};
	CircularInt a5 {12, 1};
	CircularInt a6 {-3, 2};
	CircularInt a7 {2, -3};
	CircularInt a8 {-12, -1};
	a4+=7;
   	//  REQUIRE(a1 == a2);
	  REQUIRE(a1 == a5);
	  REQUIRE(a6 == a7);
	//  REQUIRE(!(a1 == a4));
 	//  REQUIRE(!(a1 == a8));
	// REQUIRE(!(a1 == a3));
}
