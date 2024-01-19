#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "maths.h"

TEST_CASE("test primes", "[is_prime]")
{
  REQUIRE(is_prime(2) == true);
  REQUIRE(is_prime(3) == true);
  REQUIRE(is_prime(4) == false);
  REQUIRE(is_prime(5) == true);
  REQUIRE(is_prime(6) == false);
  REQUIRE(is_prime(7) == true);
  REQUIRE(is_prime(8) == false);
  REQUIRE(is_prime(9) == false);
}

TEST_CASE("test powers", "[power]")
{
  REQUIRE(power(2, 2) == 4);
  REQUIRE(power(2, 3) == 8);
  REQUIRE(power(2, 4) == 16);
  REQUIRE(power(3, 2) == 9);
  REQUIRE(power(3, 3) == 27);
  REQUIRE(power(5, 2) == 25);
  REQUIRE(power(5, 3) == 125);
  REQUIRE(power(10, 2) == 100);
}
