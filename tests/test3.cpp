#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"


TEST_CASE("test LZespolona Roznica"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 1;
    y.im = -3;

    z.re = 0;
    z.im = 4;
    
    CHECK(x-y == z);
}


TEST_CASE("test LZespolona Roznica2"){
    LZespolona x, y, z;

    x.re = 10000;
    x.im = -1;

    y.re = 1;
    y.im = -3;

    z.re = 9999;
    z.im = 2;
    
    CHECK(x-y == z);
}


TEST_CASE("test LZespolona Roznica3"){
    LZespolona x, y, z;

    x.re = 0.2;
    x.im = 0.1;

    y.re = -0.3;
    y.im = -0.1;

    z.re = 0.5;
    z.im = 0.2;
    
    CHECK(x-y == z);
}



TEST_CASE("test LZespolona Roznica4"){
    LZespolona x, y, z;

    x.re = 1/2;
    x.im = 3/10;

    y.re = 0;
    y.im = 1/10;

    z.re = -1/2;
    z.im = 2/10;
    
    CHECK(x-y == z);
}


TEST_CASE("test LZespolona Roznica5"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = -10000;
    y.im = 30001.5;

    z.re = 10001;
    z.im = -30000.5;
    
    CHECK(x-y == z);
}

TEST_CASE("test LZespolona Roznica5"){
    LZespolona x, y, z;

    x.re = 100000000;
    x.im = 100000000;

    y.re = 100000000;
    y.im = -100000000;

    z.re = 0;
    z.im = 200000000;
    
    CHECK(x-y == z);
}