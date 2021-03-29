#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"

TEST_CASE("test LZespolona Dzielenie przez liczbe zespolona1"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 1;
    y.im = -3;

    z.re = -0.2;
    z.im = 0.4;
    
    CHECK(x/y == z);
}



TEST_CASE("test LZespolona Dzielenie przez liczbe zespolona2"){
    LZespolona x, y, z;

    x.re = 1000;
    x.im = 1100;

    y.re = 1000;
    y.im = -3000;

    z.re = -0.23;
    z.im = 0.41;
    
    CHECK(x/y == z);
}


TEST_CASE("test LZespolona Dzielenie przez liczbe zespolona3"){
    LZespolona x, y, z;

    x.re = 2;
    x.im = 3;

    y.re = 2;
    y.im = -3;

    z.re = -0.384615384;
    z.im = 0.92307692;
    
    CHECK(x/y == z);
}

TEST_CASE("test LZespolona Dzielenie przez liczbe zespolona4"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 3;

    y.re = 0.01;
    y.im = 0.02;

    z.re = 140;
    z.im = 20;
    
    CHECK(x/y == z);
}

TEST_CASE("test LZespolona Dzielenie przez liczbe zespolona5"){
    LZespolona x, y;

    x.re = 1;
    x.im = 1;

    y.re = 0;
    y.im = 0;

    // z.re = 1.5;
    // z.im = 0;
    
    WARN_THROWS(x / y);
    // CHECK(x/y == z);
}

