#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"


TEST_CASE("test LZespolona Iloczynu1"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 1;
    y.im = -3;

    z.re = 4;
    z.im = -2;
    
    CHECK(x*y == z);
}

TEST_CASE("test LZespolona Iloczynu2"){
    LZespolona x, y, z;

    x.re = 100;
    x.im = -2000;

    y.re = 9999;
    y.im = -8888;

    z.re = -16776100;
    z.im = -20886800;
    
    CHECK(x*y == z);
}


TEST_CASE("test LZespolona Iloczynu3"){
    LZespolona x, y, z;

    x.re = 0.55;
    x.im = 0.88;

    y.re = -0.11;
    y.im = 0.44;

    z.re = -0.4477;
    z.im = 0.1452;
    
    CHECK(x*y == z);
}



TEST_CASE("test LZespolona Iloczyn4"){
    LZespolona x, y, z;

    x.re = 0.55;
    x.im = 0.88;

    y.re = 0;
    y.im = 0;

    z.re = 0;
    z.im = 0;
    
    CHECK(x*y == z);
}



TEST_CASE("test LZespolona Iloczyn5"){
    LZespolona x, y, z;

    x.re = 1/2;
    x.im = 1/2;

    y.re = 1/3;
    y.im = 1/3;

    z.re = 0;
    z.im = 1/3;
    
    CHECK(x*y == z);
}


TEST_CASE("test LZespolona Iloczyn6"){
    LZespolona x, y, z;

    x.re = 1/2;
    x.im = 1/2;

    y.re = 1/3;
    y.im = 1/3;

    z.re = 0;
    z.im = 1/3;
    
    CHECK(x*y == z);
}