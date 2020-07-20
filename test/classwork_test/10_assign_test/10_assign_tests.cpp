#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "employee.h"
#include "engineer.h"
#include "sales_employee.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify the engineer total pay")
{
	//You must create a dynamic instance of the class for testing
	Employee* engineer = new Engineer(1500, 400);
	//now you can access the class function
	REQUIRE(engineer->get_pay() == 1900);
}

TEST_CASE("Verify the sales employee pay")
{
	//Create a dynamic instance of the class
	Employee* sales = new SalesEmployee(40, 10, 500);
	//now you can access the class function
	REQUIRE(sales->get_pay() == 900);
}