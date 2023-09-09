#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../main.cpp"

TEST_CASE( "1: 1 to the power of 0", "[multi-file:2]" ) {
    REQUIRE( power(1,0) == 1 );
}

TEST_CASE( "2: Powers of integers", "[multi-file:2]" ) {
    REQUIRE( power(1,8) == 1 );
    REQUIRE( power(2,3) == 8 );
    REQUIRE( power(3,3) == 27 );
    REQUIRE( power(10,2) == 100);
}

