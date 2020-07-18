#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "employee.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify the engineer total pay")
{
	REQUIRE(get_pay(1500, 400) == 1900);
}

TEST_CASE("Verify the sales employee pay")
{
	REQUIRE(get_pay(40, 10, 500) == 900);
}