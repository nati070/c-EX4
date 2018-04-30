#include <iostream>
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "CircularInt.hpp"
#include "catch.hpp"
// REQUIRE
std::string cirToString(const CircularInt &circularInt)
{
    std::stringstream ss;
    ss << circularInt ;
    return ss.str();
}

// TEST_CASE("testing the operation == equals where CircularInt==CircularInt", "=="){
// 	CircularInt a1 {1, 12};
// 	CircularInt a2 {1, 12};
// 	CircularInt a3 {4, 9};
// 	CircularInt a4 {1, 12};
// 	CircularInt a5 {12, 1};
// 	CircularInt a6 {-3, 2};
// 	CircularInt a7 {2, -3};
// 	CircularInt a8 {-12, -1};
// 	a4+=7;
//    	 REQUIRE(a1 == a2);
// 	 REQUIRE(a1 == a5);
// 	 REQUIRE(a6 == a7);
// 	 REQUIRE(!(a1 == a4));
//  	 REQUIRE(!(a1 == a8));
// 	 REQUIRE(!(a1 == a3));
	
// }

// TEST_CASE("testing the operation == equals where int==CircularInt", "==") {
// 	CircularInt a1 {1, 12};
// 	CircularInt a2 {-4, 9};

//    	 REQUIRE(a1 == 1);
//    	 REQUIRE(a2 == -4);
// 	 REQUIRE(!(a1 == 10));
//  	 REQUIRE(!(a2 == 4));
// }

// TEST_CASE("testing the operation == equals where CircularInt==int", "==") {
// 	CircularInt a1 {1, 12};
// 	CircularInt a2 {-4, 9};

//    	 REQUIRE(1 == a1);
//    	 REQUIRE(-4 == a2);
// 	 REQUIRE(!(10 == a1));
//  	 REQUIRE(!(4 == a2));
// }

// TEST_CASE("testing the operation =" , "==") {
// 	CircularInt a1 {1, 12};
// 	CircularInt a2 {1, 12};
// 	CircularInt a3 {4, 9};
// 	a3=a2;
//    	 REQUIRE(a3 == a2);
// 	a3=a1;
// 	  REQUIRE(a3 == a1);
// 	 CircularInt a4=a3;
// 	REQUIRE(a3 == a4);
// }

// TEST_CASE("testing the operation = with int" , "==") {
// 	CircularInt a1 {1, 12};
// 	a1=3;
//    	 REQUIRE(a1.GetValue() == 3);
// 	a1=5;
//    	 REQUIRE(a1.GetValue() == 5);
// 	a1=14;
//    	 REQUIRE(a1.GetValue() == 2);
// 	a1=-2;
//    	 REQUIRE(a1.GetValue() == 10);
	
// }


//  TEST_CASE("testing the operation != not equals " , "==") {
// 	CircularInt a1 {1, 12};
// 	CircularInt a2 {1, 12};
// 	CircularInt a3 {4, 9};
// 	CircularInt a4 {1, 12};
// 	CircularInt a5 {12, 1};
// 	CircularInt a6 {-3, 2};
// 	CircularInt a7 {2, -3};
// 	CircularInt a8 {-12, -1};
// 	a4+=7;
//    	 REQUIRE(!(a1!=a2));
// 	 REQUIRE(!(a1!=a5));
// 	 REQUIRE(!(a6!=a7));
// 	 REQUIRE(a1!=a4);
//  	 REQUIRE(a1!=a8);
// 	 REQUIRE(a1!=a3);
	
// }


// TEST_CASE("testing the operation != not equals where int==CircularInt", "==") {
// 	CircularInt a1 {1, 12};
// 	CircularInt a2 {-4, 9};

//    	 REQUIRE(a1 != 5);
//    	 REQUIRE(a2 != 3);
// }

// TEST_CASE("testing the operation != not equals where CircularInt==int", "==") {
// 	CircularInt a1 {1, 12};
// 	CircularInt a2 {-4, 9};

//    	 REQUIRE(a1 != -1);
//    	 REQUIRE(a2 != 4);
// }


// TEST_CASE("testing the the operation < " , "==") {
// 	CircularInt a1 {1, 12};
// 	CircularInt a2 {1,9};
// 	CircularInt a3 {-3, 1};
// 	CircularInt a4 {-4, -2};
// 	REQUIRE(!(a1<a2));
// 	REQUIRE(a1<a3);
// 	REQUIRE(a3<a4);	
// }

// TEST_CASE("testing the the operation > " , "=") {
// 	CircularInt a1 {1, 12};
// 	CircularInt a2 {1,9};
// 	CircularInt a3 {-3, 1};
// 	CircularInt a4 {-4, -2};
// 	REQUIRE(!(a1>a2));
// 	REQUIRE(!(a1>a3));
// 	a4+=2;
// 	REQUIRE(a4>a3);	
// }

// TEST_CASE("testing the the operation <= " , "=") {
// 	CircularInt a1 {1, 12};
// 	CircularInt a2 {1,9};
// 	CircularInt a3 {-3, 1};
// 	CircularInt a4 {-4, -2};
// 	REQUIRE(a1<=a2);
// 	REQUIRE(a1<=a3);
// 	a4+=2;
// 	REQUIRE(!(a4<=a3));	
// }

// TEST_CASE("testing the the operation >= ", "") {
// 	CircularInt a1 {1, 12};
// 	CircularInt a2 {1,9};
// 	CircularInt a3 {-3, 1};
// 	CircularInt a4 {-4, -2};
// 	REQUIRE(a1>=a2);
// 	REQUIRE(!(a1>=a3));
// 	a4+=2;
// 	REQUIRE(a4>=a3);	
// }

// TEST_CASE("testing the the operation < with int after <" , "") {
// 	CircularInt a1 {1, 12};
// 	CircularInt a2 {-3, 1};
// 	REQUIRE(!(a1<1));
// 	REQUIRE(a1<5);
// 	REQUIRE(a2<5);
// 	a1+=11;
// 	REQUIRE(!(a1<-3));	
// }

// TEST_CASE("testing the the operation > with int after >" ,",") {
// 	CircularInt a1 {1, 10};
// 	CircularInt a2 {-3, 1};
// 	REQUIRE(!(a1>-3));
// 	REQUIRE(!(a1>1));
// 	a1+=3;
// 	a2+=3;
// 	REQUIRE(a1>12);
// 	REQUIRE(a2>2);
// }

// TEST_CASE("testing the the operation <= with int after <=" , "") {
// 	CircularInt a1 {1, 12};
// 	CircularInt a2 {-3, 1};
// 	REQUIRE(a1<=1);
// 	REQUIRE(a1<=5);
// 	REQUIRE(a2<=5);
// 	a1+=11;
// 	REQUIRE(!(a1<=-3));	
// }

// TEST_CASE("testing the the operation >= with int after >=" ,"") {
// // 	CircularInt a1 {1, 10};
// // 	CircularInt a2 {-3, 1};
// // 	REQUIRE(!(a1>=-3));
// // 	REQUIRE(a1>=1);
// // 	a1+=3;
// // 	a2+=3;
// // 	REQUIRE(a1>=12);
// // 	REQUIRE(a2>=2);
// // }

// TEST_CASE("testing the the operation < with int before <" , "") {
// 	CircularInt a1 {1, 10};
// 	CircularInt a2 {-3, 1};
// 	// REQUIRE(!(1<a1));
// 	// REQUIRE(!(-3<a1));
// 	 //REQUIRE(!(1<a1));
// 	a1+=3;
// 	a2+=3;
// 	REQUIRE(12<a1);
// 	REQUIRE(2<a2);
	
// }

// TEST_CASE("testing the the operation > with int before >","") {
// 	CircularInt a1 {1, 12};
// 	CircularInt a2 {-3, 1};
// 	REQUIRE(5>a1);
// 	REQUIRE(5>a2);
// 	a1+=11;
// 	REQUIRE(!(-3>a1));

// }

// TEST_CASE("testing the the operation <= with int before <=","") {
// 	CircularInt a1 {1, 10};
// 	CircularInt a2 {-3, 1};
// 	REQUIRE(!(-3<=a1));
// 	REQUIRE(1<=a1);
// 	a1+=3;
// 	a2+=3;
// 	REQUIRE(12<=a1);
// 	REQUIRE(2<=a2);
// }

// TEST_CASE("testing the the operation >= with int before >=" , "") {
// 	CircularInt a1 {1, 12};
// 	CircularInt a2 {-3, 1};
// 	REQUIRE(1>=a1);
// 	REQUIRE(5>=a1);
// 	REQUIRE(5>=a2);
// 	a1+=11;
// 	REQUIRE(!(-3>=a1));

	
// }

// TEST_CASE("testing the operation + with int after the + " , "") {
// 	CircularInt a {1, 10};
// 	CircularInt b(a);
// 	b=a+7;
//    	REQUIRE(b.GetValue() == 8);
// 	b=b+6;
//    	REQUIRE(b.GetValue() == 4);
// 	b=a+5;
//    	REQUIRE(b.GetValue() == 6);
	
// 	CircularInt c {-3, 5};	
// 	CircularInt d(c);
// 	d=c+7;
//    	REQUIRE(d.GetValue() == 4);
// 	d=c+3;
//    	REQUIRE(d.GetValue() == 0);
// }





// TEST_CASE("testing the operation + with int before the +" , "") {
// 	CircularInt a {6,15};
// 	CircularInt b(a);
// 	b=7+a;
//    	REQUIRE(b.GetValue() == 13);
// 	b=6+b;
//    	REQUIRE(b.GetValue() == 9);
// 	b=5+a;
//    	REQUIRE(b.GetValue() == 11);

// 	CircularInt c {-3, 5};	
// 	CircularInt d(c);
// 	d=7+c;
//    	REQUIRE(d.GetValue() == 4);
// 	d=4+c;
//    	REQUIRE(d.GetValue() == 1);
	
// }

// TEST_CASE("testing the operation * with int after the * " ,"") {
// 	CircularInt a {1, 10};
// 	CircularInt b(a);
// 	b=a*2;
//    	REQUIRE(b.GetValue() == 2);
// 	b=b*3;
//    	REQUIRE(b.GetValue() == 6);
// 	b=a*4;
//    	REQUIRE(b.GetValue() == 4);

// 	CircularInt c {-3, 5};	
// 	CircularInt d(c);
// 	d=c*2;
//    	REQUIRE(d.GetValue() == 3);
// 	d=c*3;
//    	REQUIRE(d.GetValue() == 0);	
// }

// TEST_CASE("testing the operation *= with int" , "") {
// 	CircularInt a {3, 10};
// 	a*=2;
//    	REQUIRE(a.GetValue() == 6);
// 	a*=3;
//     cout <<a;
//    	REQUIRE(a.GetValue() ==10);
// 	a*=1;
//    	REQUIRE(a.GetValue() == 10);

// 	CircularInt c {-8, -2};	
// 	c*=2;
//    	REQUIRE(c.GetValue() == -2);
// 	c*=3;
//    	REQUIRE(c.GetValue() == -6);
// }


// TEST_CASE("testing the operation * with int before the *" ,"") {
// 	CircularInt a {2,7};
// 	CircularInt b(a);
// 	b=2*a;
//    	REQUIRE(b.GetValue() == 4);
// 	b=1*b;
//    	REQUIRE(b.GetValue() == 4);
// 	b=2*a;
//    	REQUIRE(b.GetValue() == 4);

// 	CircularInt c {-3, 5};	
// 	CircularInt d(c);
// 	d=2*c;
//    	REQUIRE(d.GetValue() == 3);
// 	d=8*c;
//    	REQUIRE(d.GetValue() ==3 );

	
// }


// TEST_CASE("testing the operator/= function where CircularInt/=CircularInt" ,"," ) {
// 	CircularInt tmp1 {3,12};
// 	CircularInt tmp2 {3,12};
// 	tmp1/=tmp2;
// 	// REQUIRE(tmp1.GetValue() == 11);
// 	// REQUIRE(tmp2.GetValue() == 3);
	
// 	// CircularInt tmp3 {2,8};
// 	// tmp1/=tmp3;
// 	// REQUIRE(tmp1.GetValue() == 11);


// 	CircularInt tmp11 {-3,2};
// 	CircularInt tmp22 {-3,2};
// 	tmp11/=tmp22;
// 	// REQUIRE(tmp11.GetValue() == -3);
// 	// // REQUIRE(tmp22.GetValue() == -3);
	
// 	// CircularInt tmp33 {2,8};
// 	// tmp11/=tmp33;
// 	// REQUIRE(tmp11.GetValue() == -3);

// 	// // CircularInt tmp111 {-5,-2};
// 	// // tmp111=tmp111+1;
// 	// // CircularInt tmp222 {-3,-1};
// 	// // tmp111/=tmp222;
// 	// // REQUIRE(tmp222.GetValue() == -3);
	
// }

// // TEST_CASE("testing the operation +  ") {
// // 	CircularInt a {3, 10};
// // 	CircularInt b {1, 10};
// // 	CircularInt c {1, 10};
// // 	b+=3;
// // 	a=a+b;
// //    	REQUIRE(a.GetValue() == 7);
// // 	a=a+b;
// //    	REQUIRE(a.GetValue() == 3);
// // 	a=c+b;
// //    	REQUIRE(a.GetValue() == 5);

// // 	CircularInt d {-3, 1};
// // 	CircularInt e {-5, -2};	
// // 	d=d+e;
// //    	REQUIRE(d.GetValue() == -3);
// // 	d=e+a;
// //    	REQUIRE(d.GetValue() == -4);
// // }

// TEST_CASE("testing the operation - " ,"") {
// 	CircularInt a {3, 10};
// 	CircularInt b {1, 10};
// 	CircularInt c {1, 10};
// 	b+=3;
// 	a=a-b;
//    	REQUIRE(a.GetValue() == 7);
// 	a=a-b;
//    	REQUIRE(a.GetValue() == 3);
// 	a=c-b;
//    	REQUIRE(a.GetValue() == 7);

// 	CircularInt d {-3, 1};
// 	CircularInt e {-4, -2};	
// 	d=d-e;
//    	REQUIRE(d.GetValue() == 1);
// 	d=e-a;
//    	REQUIRE(d.GetValue() == -2);
// }

// TEST_CASE("testing the operation * " ,",") {
// 	CircularInt a {3, 10};
// 	CircularInt b {1, 10};
// 	CircularInt c {1, 10};
// 	b+=1;
// 	a=a*b;
//    	REQUIRE(a.GetValue() == 6);
// 	a=a*b;
//    	REQUIRE(a.GetValue() == 4);
// 	a=c*b;
//    	REQUIRE(a.GetValue() == 2);

// 	CircularInt d {-3, 1};
// 	CircularInt e {-4, -2};	
// 	d=d*e;
//    	REQUIRE(d.GetValue() == -3);
// 	d=e*a;
//    	REQUIRE(d.GetValue() == -2);	
// }


// TEST_CASE("testing the operation /" ,",") {
// 	CircularInt a {4, 10};
// 	CircularInt b {2, 10};
// 	CircularInt c {2, 10};
// 	a=a/b;
//    	REQUIRE(a.GetValue() == 9);
// 	a=a/b;
//    	REQUIRE(a.GetValue() == 8);
// 	// a=c/b;
//    	// REQUIRE(a.GetValue() == 10);

// 	// CircularInt d {-3, 1};
// 	// CircularInt e {-4, -2};	
// 	// d=d/e;
//    	// REQUIRE(d.GetValue() == -3);
// 	// d=e/a;
//    	// REQUIRE(d.GetValue() == -4);
	
// }

// TEST_CASE("testing the operation / with int after the / ") {
// 	CircularInt a {4, 10};
// 	CircularInt b(a);
// 	b=a/2;
//    	REQUIRE(b.GetValue() == 9);
// 	b=b/3;
//    	REQUIRE(b.GetValue() == 10);
// 	b=a/4;
//    	REQUIRE(b.GetValue() == 8);

// 	CircularInt c {-3, 1};
// 	CircularInt d(c);
// 	d=c/2;
//    	REQUIRE(d.GetValue() == 1);
// 	d=c/-2;
//    	REQUIRE(d.GetValue() == -1);
   	

// 	CircularInt e {-4, -2};
// 	CircularInt f(e);
// 	f=e/2;
//    	REQUIRE(f.GetValue() == -2);
// 	f=e/-2;
//    	REQUIRE(f.GetValue() == -4);	
// }

// TEST_CASE("testing the operation /= with int") {
// 	CircularInt a {2, 6};
// 	a/=2;
//    	REQUIRE(a.GetValue() == 6);
// 	a/=3;
//    	REQUIRE(a.GetValue() ==2);
	
// 	CircularInt b {-3, 1};
// 	b/=2;
//    	REQUIRE(b.GetValue() == 1);
// 	b/=-2;
//    	REQUIRE(b.GetValue() ==-3);

// 	CircularInt c {-4, -2};
// 	c/=2;
//    	REQUIRE(c.GetValue() == -2);
// 	c/=-2;
//    	REQUIRE(c.GetValue() ==-2);
// }

// TEST_CASE("testing the operator- function where CircularInt-int", "," ) {
	
// 	CircularInt tmp1 {1,12};
// 	CircularInt cop(tmp1);
// 	tmp1= cop-7;
// 	REQUIRE(cop.GetValue() == 1);
// 	REQUIRE(tmp1.GetValue() == 6);
// 	tmp1= tmp1-3;
// 	REQUIRE(tmp1.GetValue() == 3);

// 	CircularInt tmp2 {3,10};
// 	tmp2= tmp2-7;
// 	REQUIRE(tmp2.GetValue() == 4);
// 	tmp2= tmp2-1;
// 	REQUIRE(tmp2.GetValue() == 3);
	
// 	CircularInt tmp3 {-3,1};
// 	tmp3= tmp3-7;
// 	REQUIRE(tmp3.GetValue() == 0);
// 	tmp3= tmp3-1;
// 	REQUIRE(tmp3.GetValue() == -1);

// }

// TEST_CASE("testing the operator-= function where CircularInt-int" , "") {

// 	CircularInt tmp1 {1,12};
// 	tmp1-=7;
// 	REQUIRE(tmp1.GetValue() == 6);
// 	tmp1-= 14;
// 	REQUIRE(tmp1.GetValue() == 4);

// 	CircularInt tmp2 {3,10};
// 	tmp2-= 5;
// 	REQUIRE(tmp2.GetValue() == 6);
// 	tmp2-=2;
// 	REQUIRE(tmp2.GetValue() == 4);
		
// 	CircularInt tmp3 {-4,-2};
// 	tmp3-= 5;
// 	REQUIRE(tmp3.GetValue() == -3);
// 	tmp3-= -2;
// 	REQUIRE(tmp3.GetValue() == -4);
// }


// TEST_CASE("testing the operator- function where int-CircularInt" , "") {

// 	CircularInt tmp1 {1,12};
// 	CircularInt cop(tmp1);
// 	tmp1= 7-cop;
// 	REQUIRE(cop.GetValue() == 1);
// 	REQUIRE(tmp1.GetValue() == 6);
// 	tmp1= 14-tmp1;
// 	REQUIRE(tmp1.GetValue() == 8);

// 	CircularInt tmp2 {3,10};
// 	tmp2= 7-tmp2;
// 	REQUIRE(tmp2.GetValue() == 4);
// 	tmp2= 2-tmp2;
// 	REQUIRE(tmp2.GetValue() == 6);
	
// 	CircularInt tmp3 {-4,-2};
// 	tmp3=7-tmp3;
// 	REQUIRE(tmp3.GetValue() == -4);
// 	tmp3=-3-tmp3;
// 	REQUIRE(tmp3.GetValue() == -2);

// 	CircularInt tmp4 {-3,1};
// 	tmp4=7-tmp4;
// 	REQUIRE(tmp4.GetValue() ==0);
// 	tmp4=0-tmp4;
// 	REQUIRE(tmp4.GetValue() == 0);
// }




// TEST_CASE("testing the operation / where int/CircularInt") {

// 	CircularInt tmp1 {4,9};
// 	CircularInt cop(tmp1);
// 	tmp1= 6/cop;
// 	REQUIRE(cop.GetValue() == 4);
//    	REQUIRE(tmp1.GetValue() == 6);
// 	REQUIRE_THROWS(7/tmp1);

// 	CircularInt tmp2 {-1,-5};
// 	CircularInt cop2(tmp2);
// 	tmp2= 10/cop2;
// 	REQUIRE(cop2.GetValue() == -5);
//    	REQUIRE(tmp2.GetValue() == -5);

// 	CircularInt tmp3 {-2,3};
// 	REQUIRE(tmp3.GetValue() == -2);

// }

// TEST_CASE("testing the operator+= function where CircularInt+=CircularInt" ,"" ) {
// 	CircularInt tmp1 {1,12};
// 	CircularInt tmp2 {1,12};
// 	tmp1+=tmp2;
// 	// REQUIRE(tmp1.GetValue() == 2);
// 	// REQUIRE(tmp2.GetValue() == 1);
	
// 	CircularInt tmp3 {6,8};
// 	tmp1+=tmp3;
// 	REQUIRE(tmp1.GetValue() == 8);

// 	CircularInt tmp4 {14,20};
// 	tmp1+=tmp4;
// 	REQUIRE(tmp1.GetValue() == 10);

// 	CircularInt tmp11 {-2,-5};
// 	CircularInt tmp22 {-2,-5};
// 	tmp11+=tmp22;
// 	REQUIRE(tmp11.GetValue() == -2);
// 	REQUIRE(tmp22.GetValue() == -5);
	
// 	CircularInt tmp33 {-2,4};
// 	tmp33+=tmp11;
// 	REQUIRE(tmp33.GetValue() == 3);
// 	tmp11+=tmp33;
// 	REQUIRE(tmp11.GetValue() == -3);
// }


// TEST_CASE("testing the operator-= function where CircularInt-=CircularInt ", ",") {
// 	CircularInt tmp1 {1,12};
// 	CircularInt tmp2 {1,12};
// 	tmp1-=tmp2;
// 	REQUIRE(tmp1.GetValue() == 12);
// 	REQUIRE(tmp2.GetValue() == 1);
	
// 	CircularInt tmp3 {6,8};
// 	tmp1-=tmp3;
// 	REQUIRE(tmp1.GetValue() == 6);

// 	CircularInt tmp4 {14,20};
// 	tmp1-=tmp4;
// 	REQUIRE(tmp1.GetValue() == 4);

// 	CircularInt tmp11 {-2,-5};
// 	CircularInt tmp22 {-2,-5};
// 	tmp11-=tmp22;
// 	REQUIRE(tmp11.GetValue() == -4);
// 	REQUIRE(tmp22.GetValue() == -5);
	
// 	CircularInt tmp33 {-2,4};
// 	tmp33-=tmp11;
// 	REQUIRE(tmp33.GetValue() == 2);
// 	tmp11-=tmp33;
// 	REQUIRE(tmp11.GetValue() == -2);
// }


// TEST_CASE("testing the operator*= function where CircularInt*=CircularInt" ,"") {
// 	CircularInt tmp1 {1,12};
// 	CircularInt tmp2 {1,12};
// 	tmp1*=tmp2;
// 	REQUIRE(tmp1.GetValue() == 1);
// 	REQUIRE(tmp2.GetValue() == 1);
	
// 	CircularInt tmp3 {6,8};
// 	tmp1*=tmp3;
// 	REQUIRE(tmp1.GetValue() == 6);

// 	CircularInt tmp4 {4,20};
// 	tmp1*=tmp4;
// 	REQUIRE(tmp1.GetValue() == 12);


// 	CircularInt tmp11 {-1,-4};
// 	CircularInt tmp22 {-1,-4};
// 	tmp11*=tmp22;
// 	REQUIRE(tmp11.GetValue() == -4);
// 	REQUIRE(tmp22.GetValue() == -4);
	
// 	CircularInt tmp33 {-2,4};
// 	tmp33*=tmp11;
// 	REQUIRE(tmp33.GetValue() == 1);


// }


// TEST_CASE("testing the operator^ function where int ^ CircularInt" ) {

// 	CircularInt tmp1 {4,9};
// 	CircularInt cop(tmp1);
// 	tmp1= 10^cop;
// 	REQUIRE(cop.GetValue() == 4);
//    	REQUIRE(tmp1.GetValue() == 8);
// 	tmp1= 7^tmp1;
// 	REQUIRE(tmp1.GetValue() == 9);

// 	CircularInt tmp2 {-1,-5};
// 	CircularInt cop2(tmp2);
// 	tmp2= 6^cop2;
// 	REQUIRE(cop2.GetValue() == -5);
//    	REQUIRE(tmp2.GetValue() == -3);
// 	tmp2= -7^tmp2;
// 	REQUIRE(tmp2.GetValue() == -1);
	
// 	CircularInt tmp3 {-2,3};
// 	tmp3= -2^tmp3;
//    	REQUIRE(tmp3.GetValue() == 0);
// }


// TEST_CASE("testing the operator^ function where  CircularInt ^ int" ) {

// 	CircularInt tmp1 {4,9};
// 	CircularInt cop(tmp1);
// 	tmp1= cop^10;
// 	REQUIRE(cop.GetValue() == 4);
//    	REQUIRE(tmp1.GetValue() == 8);
// 	tmp1= tmp1^7;
// 	REQUIRE(tmp1.GetValue() == 9);

// 	CircularInt tmp2 {-1,-5};
// 	CircularInt cop2(tmp2);
// 	tmp2= cop2^6;
// 	REQUIRE(cop2.GetValue() == -5);
//    	REQUIRE(tmp2.GetValue() == -3);
// 	tmp2= tmp2^-7;
// 	REQUIRE(tmp2.GetValue() == -1);
	
// 	CircularInt tmp3 {-2,3};
// 	tmp3= tmp3^-2;
//    	REQUIRE(tmp3.GetValue() == 0);
// }



// TEST_CASE("testing the operator^ function where  CircularInt ^ CircularInt" ) {

// 	CircularInt a {3, 10};
// 	CircularInt b {1, 10};
// 	CircularInt c {1, 10};
// 	b+=1;
// 	a=a^b;
//    	REQUIRE(a.GetValue() == 9);
// 	a=a^b;
//    	REQUIRE(a.GetValue() == 3);
// 	a=c^b;
//    	REQUIRE(a.GetValue() == 3);

// 	CircularInt d {-3, 1};
// 	CircularInt e {-4, -2};	
// 	d=d^e;
//    	REQUIRE(d.GetValue() == 1);
// 	d=e^a;
//    	REQUIRE(d.GetValue() == -4);

// }



// TEST_CASE("testing the operator^= function where  CircularInt ^= CircularInt" ) {

// 	CircularInt tmp1 {1,12};
// 	CircularInt tmp2 {1,12};
// 	tmp1^=tmp2;
// 	REQUIRE(tmp1.GetValue() == 12);
// 	REQUIRE(tmp2.GetValue() == 1);
	
// 	CircularInt tmp3 {6,8};
// 	tmp1^=tmp3;
// 	REQUIRE(tmp1.GetValue() == 10);

// 	CircularInt tmp4 {4,20};
// 	tmp1^=tmp4;
// 	REQUIRE(tmp1.GetValue() == 2);


// 	CircularInt tmp11 {-1,-4};
// 	CircularInt tmp22 {-1,-4};
// 	tmp11^=tmp22;
// 	REQUIRE(tmp11.GetValue() == -4);
// 	REQUIRE(tmp22.GetValue() == -4);
	
// 	CircularInt tmp33 {-2,4};
// 	tmp33^=tmp11;
// 	REQUIRE(tmp33.GetValue() == 2);

// }

// TEST_CASE("testing the operator^= function where  CircularInt ^= int" ) {

// 	CircularInt a {3, 10};
// 	a^=2;
//    	REQUIRE(a.GetValue() == 9);
// 	a^=3;
//    	REQUIRE(a.GetValue() ==10);
// 	a^=1;
//    	REQUIRE(a.GetValue() == 3);

// 	CircularInt c {-8, -2};	
// 	c^=2;
//    	REQUIRE(c.GetValue() == -6);
// 	c^=3;
//    	REQUIRE(c.GetValue() == -7);
// 	c^=-5;
//    	REQUIRE(c.GetValue() == -5);

// }



// TEST_CASE("testing the operator% function where CircularInt % int" ) {

// 	CircularInt tmp1 {4,9};
// 	CircularInt cop(tmp1);
// 	tmp1= cop%10;
// 	REQUIRE(cop.GetValue() == 4);
//    	REQUIRE(tmp1.GetValue() == 4);
// 	tmp1= tmp1%2;
// 	REQUIRE(tmp1.GetValue() == 6);

// 	CircularInt tmp2 {-1,-5};
// 	CircularInt cop2(tmp2);
// 	tmp2= cop2%6;
// 	REQUIRE(cop2.GetValue() == -5);
//    	REQUIRE(tmp2.GetValue() == -5);
// 	tmp2= tmp2%-7;
// 	REQUIRE(tmp2.GetValue() == -5);
	
// 	CircularInt tmp3 {-2,3};
// 	tmp3= tmp3%-2;
//    	REQUIRE(tmp3.GetValue() == 0);
// }


// TEST_CASE("testing the operator% function where int % CircularInt" ) {

// 	CircularInt tmp1 {4,9};
// 	CircularInt cop(tmp1);
// 	tmp1= 10%cop;
// 	REQUIRE(cop.GetValue() == 4);
//    	REQUIRE(tmp1.GetValue() == 8);
// 	tmp1= 7%tmp1;
// 	REQUIRE(tmp1.GetValue() == 7);

// 	CircularInt tmp2 {-1,-5};
// 	CircularInt cop2(tmp2);
// 	tmp2= 6%cop2;
// 	REQUIRE(cop2.GetValue() == -5);
//    	REQUIRE(tmp2.GetValue() == -4);
// 	tmp2= -7%tmp2;
// 	REQUIRE(tmp2.GetValue() == -3);
	
// 	CircularInt tmp3 {-2,3};
// 	tmp3= -3%tmp3;
//    	REQUIRE(tmp3.GetValue() == -1);
// }



// TEST_CASE("testing the operator% function where  CircularInt % CircularInt" ) {

// 	CircularInt a {3, 10};
// 	CircularInt b {1, 10};
// 	CircularInt c {4, 10};
// 	b+=1;
// 	a=a%b;
//    	REQUIRE(a.GetValue() == 9);
// 	a=a%b;
//    	REQUIRE(a.GetValue() == 9);
// 	a=c%b;
//    	REQUIRE(a.GetValue() == 7);

// 	CircularInt d {-3, 1};
// 	CircularInt e {-4, -2};	
// 	d=d%e;
//    	REQUIRE(d.GetValue() == -3);
// 	d=e%a;
//    	REQUIRE(d.GetValue() == -4);

// }


// TEST_CASE("testing the operator%= function where  CircularInt %= CircularInt" ) {

// 	CircularInt tmp1 {1,12};
// 	CircularInt tmp2 {1,12};
// 	tmp1%=tmp2;
// 	REQUIRE(tmp1.GetValue() == 12);
// 	REQUIRE(tmp2.GetValue() == 1);
	
// 	CircularInt tmp3 {6,8};
// 	tmp1%=tmp3;
// 	REQUIRE(tmp1.GetValue() == 12);

// 	CircularInt tmp4 {5,20};
// 	tmp1%=tmp4;
// 	REQUIRE(tmp1.GetValue() == 2);


// 	CircularInt tmp11 {-1,-5};
// 	CircularInt tmp22 {-1,-2};
// 	tmp11%=tmp22;
// 	REQUIRE(tmp11.GetValue() == -1);
// 	REQUIRE(tmp22.GetValue() == -2);
	
// 	CircularInt tmp33 {-2,4};
// 	tmp33%=tmp11;
// 	REQUIRE(tmp33.GetValue() == 0);

// }


// TEST_CASE("testing the operator%= function where  CircularInt %= int" ) {

// 	CircularInt a {3, 10};
// 	a%=2;
//    	REQUIRE(a.GetValue() == 9);
// 	a%=3;
//    	REQUIRE(a.GetValue() ==8);
// 	a%=6;
//    	REQUIRE(a.GetValue() == 10);

// 	CircularInt c {-8, -2};	
// 	c%=2;
//    	REQUIRE(c.GetValue() == -7);
// 	c%=3;
//    	REQUIRE(c.GetValue() == -8);
// 	c%=-5;
//    	REQUIRE(c.GetValue() == -3);

// }

// TEST_CASE("testing the operator ++prefix"  ,"" ) {
// 	CircularInt a1 {1,12};
// 	++a1;
// 	REQUIRE(a1.GetValue() == 2);
// 	a1=12;
// 	++a1;
// 	REQUIRE(a1.GetValue() == 1);

// }

// TEST_CASE("testing the operator --prefix"  ,"" ) {
// 	CircularInt a1 {1,12};
// 	--a1;
// 	REQUIRE(a1.GetValue() == 12);
// 	--a1;
// 	REQUIRE(a1.GetValue() == 11);

// }


// TEST_CASE("testing the operator postfix--" ,"" ) {
// 	CircularInt a1 {-3,1};
// 	a1--;
// 	REQUIRE(a1.GetValue() == 1);
// 	a1--;
// 	REQUIRE(a1.GetValue() == 0);
// 	a1--;
// 	REQUIRE(a1.GetValue() == -1);

// }



// TEST_CASE("testing the operator postfix--" ,".") {
// 	CircularInt a1 {-3,1};
// 	a1++;
// 	REQUIRE(a1.GetValue() == -2);
// 	a1=0;
// 	a1++;
// 	REQUIRE(a1.GetValue() == 1);
// 	a1++;
// 	REQUIRE (a1.GetValue() == -3);

// }
