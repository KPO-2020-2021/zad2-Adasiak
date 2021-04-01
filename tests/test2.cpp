#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"

TEST_CASE("Test LZespolona dzielenie przez skalar 1")
{
    LZespolona x, y;
    double t = 2;

    x.re = 2;
    x.im = 2;

    y.re = 1;
    y.im = 1;

    CHECK(x/t == y);
}

TEST_CASE("Test LZespolona dzielenie przez skalar 2")
{
    LZespolona x, y;
    double t = 2;

    x.re = 2;
    x.im = 2;

    y.re = 1;
    y.im = 1;

    // WARN_THROWS(x/t == y);
    CHECK(x/t == y);
}

TEST_CASE("Test LZespolona dzielenie przez skalar - zero")
{
    LZespolona x;
    double t = 0;

    x.re = 2;
    x.im = 2;

    // CHECK(x/t );
    WARN_THROWS(x / t);
}


TEST_CASE("Test LZespolona dzielenie przez skalar 3")
{
    LZespolona x, y;
    double t = (0.5);

    x.re = 2;
    x.im = 2;

    y.re = 4;
    y.im = 4;

    CHECK(x/t == y);
}


TEST_CASE("Test LZespolona dzielenie przez skalar 4")
{
    LZespolona x, y;
    double t = 0.5;

    x.re = 0.5;
    x.im = 0.5;

    y.re = 1;
    y.im = 1;

    CHECK(x/t == y);
}


TEST_CASE("Test LZespolona dzielenie przez skalar 5")
{
    LZespolona x, y;
    double t = (0.5);

    x.re = 2;
    x.im = 2;

    y.re = 4;
    y.im = 4;

    CHECK(x/t == y);
}

TEST_CASE("test LZespolona Suma"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 1;
    y.im = -3;

	 z = x.operator + (y);

    
    CHECK(z.re ==  2);
	 CHECK(z.im == -2);
}

TEST_CASE("test LZespolona Roznica") {
    LZespolona x,y,z;
    
    x.re = 1;
    x.im = 1;

    y.re = 1;
    y.im = -3;

	 z = x.operator - (y);
    
    CHECK(z.re == 0);
    CHECK(z.im == 4);
}



// TEST_CASE("Test LZespolona dzielenie przez skalar 6")
// {
//     LZespolona x, y;
//     double t = 3;

//     x.re = 2;
//     x.im = 2;

//     y.re = 0.66666;  
//     y.im = 0.66667 ;
// /*Porownanie miesci sie w bledzie przyblizenia*/
//     CHECK(x/t == y);
// }


// TEST_CASE("Test LZespolona dzielenie przez skalar 7")
// {
//     LZespolona x, y;
//     double t = 10;

//     x.re = 2;
//     x.im = 2;

//     y.re = 0.2;
//     y.im = 0.2 ;

//     CHECK(x/t == y);
// }



// TEST_CASE("Test LZespolona dzielenie przez skalar 8 przyblizenie")
// {
//     LZespolona x, y;
//     double t = 3;

//     x.re = 1;
//     x.im = 1;

//     y.re = 0.33333;
//     y.im = 0.333333 ;

//     std::cout << (x/t)<<std::endl;
//     std::cout << y << std::endl;
//     std::cout << ((x/t)==y) << std::endl;
//     CHECK(x/t == y) ;
// }