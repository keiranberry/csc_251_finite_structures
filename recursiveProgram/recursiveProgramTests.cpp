#define CATCH_CONFIG_MAIN
#include "recursiveProgram.h"
#include "..\\catch.hpp"

TEST_CASE("binarySearch - initial test")
{
    int array[5] = { 1, 32, 145, 600, 985 };
    int beg = 0;
    int end = 4;
    int item = 600;
    int where = binarySearch(item, array, beg, end);
    REQUIRE(where == 4);
}

TEST_CASE("binarySearch - testing something that should not be found")
{
    int array[5] = { 1, 32, 145, 600, 985 };
    int beg = 0;
    int end = 4;
    int item = 700;
    int where = binarySearch(item, array, beg, end);
    REQUIRE(where == 0);
}

TEST_CASE("binarySearch - testing something at the start")
{
    int array[5] = { 1, 32, 145, 600, 985 };
    int beg = 0;
    int end = 4;
    int item = 1;
    int where = binarySearch(item, array, beg, end);
    REQUIRE(where == 1);
}

TEST_CASE("binarySearch - testing something at the end")
{
    int array[5] = { 1, 32, 145, 600, 985 };
    int beg = 0;
    int end = 4;
    int item = 985;
    int where = binarySearch(item, array, beg, end);
    REQUIRE(where == 5);
}

TEST_CASE("binarySearch - testing a larger array")
{
    int array[11] = { 1, 32, 145, 600, 985, 1098, 1100, 1234, 1345, 1587, 1986 };
    int beg = 0;
    int end = 10;
    int item = 1587;
    int where = binarySearch(item, array, beg, end);
    REQUIRE(where == 10);
}

TEST_CASE("binarySearch - second test of a larger array")
{
    int array[11] = { 1, 32, 145, 600, 985, 1098, 1100, 1234, 1345, 1587, 1986 };
    int beg = 0;
    int end = 10;
    int item = 32;
    int where = binarySearch(item, array, beg, end);
    REQUIRE(where == 2);
}

TEST_CASE("binarySearch - testing beginning of larger array")
{
    int array[11] = { 1, 32, 145, 600, 985, 1098, 1100, 1234, 1345, 1587, 1986 };
    int beg = 0;
    int end = 10;
    int item = 1;
    int where = binarySearch(item, array, beg, end);
    REQUIRE(where == 1);
}

TEST_CASE("binarySearch - testing middle of larger array")
{
    int array[11] = { 1, 32, 145, 600, 985, 1098, 1100, 1234, 1345, 1587, 1986 };
    int beg = 0;
    int end = 10;
    int item = 1098;
    int where = binarySearch(item, array, beg, end);
    REQUIRE(where == 6);
}

TEST_CASE("binarySearch - testing a list with an even number of items")
{
    int array[6] = { 0, 1, 32, 145, 600, 985 };
    int beg = 0;
    int end = 5;
    int item = 0;
    int where = binarySearch(item, array, beg, end);
    REQUIRE(where == 1);
}

TEST_CASE("binarySearch - testing a negative in the list")
{
    int array[6] = { -6, 1, 32, 145, 600, 985 };
    int beg = 0;
    int end = 5;
    int item = -6;
    int where = binarySearch(item, array, beg, end);
    REQUIRE(where == 1);
}

TEST_CASE("binarySearch - a list of all negatives")
{
    int array[6] = { -6, -5, -4, -3, -2, -1 };
    int beg = 0;
    int end = 5;
    int item = -4;
    int where = binarySearch(item, array, beg, end);
    REQUIRE(where == 3);
}

TEST_CASE("binarySearch - all negatives testing end")
{
    int array[6] = { -6, -5, -4, -3, -2, -1 };
    int beg = 0;
    int end = 5;
    int item = -1;
    int where = binarySearch(item, array, beg, end);
    REQUIRE(where == 6);
}