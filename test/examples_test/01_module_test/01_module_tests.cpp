#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vars.h"
#include "input.h"
#include<string>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*test case echo_variable */
TEST_CASE("Verify echo function returns function argurment")
{
	REQUIRE(echo_variable(5) == 5);
}

TEST_CASE("Verify function get total return 30 with parameters 5 and 6")
{
	REQUIRE(get_total(5, 6) == 30);
}
/*test case add_to_double_1 with 0 as parameter*/
TEST CASE("Verify ading .3 3 times to 0 equals .9")
{
	REQUIRED(add_to_double_1(0) == .9);
}

/*test case add_to_double_1 with 1 as parameter*/
TEST_CASE("Verify adding .3 3 times to 1 equals .9")
{
	REQUIRED(add_to_double_1(1)  == 1.9);
}

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

