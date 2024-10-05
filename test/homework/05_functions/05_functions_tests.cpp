#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Verify Test Configuration", "verification")
{
	REQUIRE(true == true);
}

TEST_CASE("Get GC content test")
{
	REQUIRE(get_gc_content("AGCTATAG") == .375);
	REQUIRE(get_gc_content("CGCTATAG") == .50);
}

TEST_CASE("Get reverse string test")
{
	REQUIRE("GATATCGA" == get_reverse_string("AGCTATAG"));
	REQUIRE("GATATCGC" == get_reverse_string("CGCTATAG"));
}

TEST_CASE("Get DNA complement test")
{
	REQUIRE("ACCGGGTTTT" == get_dna_complement("AAAACCCGGT"));
	REQUIRE("ATTTTCCGGG" == get_dna_complement("CCCGGAAAAT"));
}