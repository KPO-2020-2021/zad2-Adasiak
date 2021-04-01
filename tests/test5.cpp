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


TEST_CASE("Test LZespolona dzielenie przez skalar 6")
{
    LZespolona x, y;
    double t = 3;

    x.re = 2;
    x.im = 2;

    y.re = 0.66666;  
    y.im = 0.66667 ;
/*Porownanie miesci sie w bledzie przyblizenia*/
    CHECK(x/t == y);
}


TEST_CASE("Test LZespolona dzielenie przez skalar 7")
{
    LZespolona x, y;
    double t = 10;

    x.re = 2;
    x.im = 2;

    y.re = 0.2;
    y.im = 0.2 ;

    CHECK(x/t == y);
}



TEST_CASE("Test LZespolona dzielenie przez skalar 8 przyblizenie")
{
    LZespolona x, y;
    double t = 3;

    x.re = 1;
    x.im = 1;

    y.re = 0.33333;
    y.im = 0.333333 ;

    std::cout << (x/t)<<std::endl;
    std::cout << y << std::endl;
    std::cout << ((x/t)==y) << std::endl;
    CHECK(x/t == y) ;
}


TEST_CASE("Test LZespolona mnozenia przez liczbe1")
{
    LZespolona x, y;
    double t = 3;

    x.re = 2;
    x.im = 2;

    y.re = 6;  
    y.im =  6;
/*Porownanie miesci sie w bledzie przyblizenia*/
    CHECK(x*t == y);
}



TEST_CASE("Test LZespolona porownania")
{
    LZespolona x, y;
    // double t = 3;

    x.re = 2.33333333;
    x.im = 2.333333333;

    y.re = 2.3333333333;  
    y.im =  2.33333333333;
/*Porownanie miesci sie w bledzie przyblizenia*/
    CHECK(x == y);
}


