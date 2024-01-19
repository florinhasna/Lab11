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
