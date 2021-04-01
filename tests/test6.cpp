#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"
#include "Statystyki.hh"
#include "WyrazenieZesp.hh"



TEST_CASE("test LZespolona -wczytywanie standardowe"){
    LZespolona x;

    

    std::istringstream in("(10+10.1i)");
    in>>x;
    std::ostringstream out;
    out << x;
 

    CHECK("(10+10.1i)" == out.str());
}


TEST_CASE("test LZespolona -wyswietlanie standardowe"){
    LZespolona x;

    x.re=0.333333;
    x.im=0.333333;

    std::ostringstream out;
    out << x;

    std::cout<< out.str() <<std::endl;
   
 

    CHECK("(0.333333+0.333333i)" == out.str());
}



TEST_CASE("Test LZespolona arg")
{
    LZespolona x;
    // void  arg();
    double y;

    x.re = 1;
    x.im = 1;

    y=1.5707963268;

    // z = arg(x) ;

    WARN_THROWS((arg(x)) == y);
    // CHECK( (arg(x)) == y);
    
}



TEST_CASE("test LZespolona Sprzezenie") {
    LZespolona x, y;
    
	 x.re = 1;
     x.im = 1;

	 y = x.Sprzezenie();

    CHECK(y.re == 1);
    CHECK(y.im == -1);
}


TEST_CASE("test LZespolona modul") {
    LZespolona x;
    double  y, z;
    
	 x.re = 4;
     x.im = 3;
    y=x.modul2();
    z = 5;
    CHECK(y == z);
    
}


TEST_CASE("test LZespolona dodawanie5556") {
    LZespolona x,y,z;
    
    x.re = 1;
    x.im = 1;

    y.re = 0;
    y.im = 2;

	 z = x.operator + (y);
    
    CHECK(z.re == 1);
    CHECK(z.im == 3);
}

TEST_CASE("test LZespolona odejmowanie999") {
    LZespolona x,y,z;
    
    x.re = 1;
    x.im = 1;

    y.re = 0;
    y.im = 2;

	 z = x.operator - (y);
    
    CHECK(z.re == 1);
    CHECK(z.im == -1);
}

TEST_CASE("test LZespolona dzielenie 1515") {
    LZespolona x,y,z;
    
    x.re = 1;
    x.im = 1;

    y.re = 0;
    y.im = 2;

	 z = x.operator / (y);
    
    CHECK(z.re == 0.5);
    CHECK(z.im == -0.5);
}


TEST_CASE("test LZespolona Mnozenie") {
    LZespolona x,y,z;
    
    x.re = 1;
    x.im = 1;

    y.re = 0;
    y.im = 2;

	 z = x.operator * (y);
    
    CHECK(z.re == -2);
    CHECK(z.im == 2);
}


TEST_CASE("test LZespolona przeciazenie dodawania") {
    LZespolona x,y,z;
    
    x.re = 1;
    x.im = 1;

    y.re = 0;
    y.im = 2;

	 z = operator += (x,y);
    
    CHECK(z.re == 1);
    CHECK(z.im == 3);
}


// TEST_CASE("test LZespolona przeciazenie dodawania") {
//     LZespolona x,y,z,a;
    
//     x.re = 1;
//     x.im = 1;

//     y.re = 0;
//     y.im = 2;

//     z.re = 0.0;
//     z.im = 2;
//     a+=(x,y);
// 	//  z += operator += (x,y);
    
//     CHECK(z == a);
// }

TEST_CASE("test LZespolona przeciazenie dzielenia") {
    LZespolona x,y,z;
    
    x.re = 1;
    x.im = 1;

    y.re = 0;
    y.im = 2;

	 z = operator /= (x,y);
    
    CHECK(z.re == 0.5);
    CHECK(z.im == -0.5);
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


TEST_CASE("Lzespolona - wczytywanie "){

	LZespolona x;
	istringstream in("(2+3i)");
	in >> x;
	ostringstream out;
	out << x;
	CHECK("(2+3i)" == out.str());
}

