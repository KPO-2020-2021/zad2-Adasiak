#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"

TEST_CASE("test LZespolona Suma"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 1;
    y.im = -3;

    z.re = 2;
    z.im = -2;
    
    CHECK(x+y == z);
}


TEST_CASE("test LZespolona Suma 2"){
    LZespolona x, y, z;

    x.re = 55;
    x.im = 77;

    y.re = 32;
    y.im = 23;

    z.re = 87;
    z.im = 100;
    
    CHECK(x+y == z);
}


TEST_CASE("test LZespolona Suma 3"){
    LZespolona x, y, z;

    x.re = 0.5;
    x.im = -0.5;

    y.re = 0.3;
    y.im = 0.2;

    z.re = 0.8;
    z.im = -0.3;
    
    CHECK(x+y == z);
}

TEST_CASE("test LZespolona Suma 4"){
    LZespolona x, y, z;

    x.re = 1/2;
    x.im = -1/2;

    y.re = 3/10;
    y.im = 2/10;

    z.re = 4/5;
    z.im = -3/10;
    
    CHECK(x+y == z);
}

TEST_CASE("test LZespolona Suma 5"){
    LZespolona x, y, z;

    x.re = 1.5;
    x.im = -1.5;

    y.re = 1.3;
    y.im = 0.2;

    z.re = 2.8;
    z.im = -1.3;
    
    CHECK(x+y == z);
}

TEST_CASE("test LZespolona Suma 6"){
    LZespolona x, y, z;

    x.re = 100000000.5;
    x.im = -122.5;

    y.re = 1.3;
    y.im = 0.2;

    z.re = 100000001.8;
    z.im = -122.3;
    
    CHECK(x+y == z);
}




