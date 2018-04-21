
#include <iostream>
#include <vector>
#include "CircularInt.hpp"

using namespace std;
//constarctur
CircularInt::CircularInt(int a,int b){
    y = b;
    x = a%b; 
}
//turn against the clock
CircularInt& CircularInt::operator -() {
    x = y - x;
    return *this;
}
//the normal operators between Object + , - , / , * 
CircularInt&  CircularInt::operator +( CircularInt& a){
    x = x + a.x;
    x = x%y;
    return *this;
}
CircularInt&  CircularInt:: operator  *( CircularInt& a){
    x = x * a.x;
    x = x%y;
    return *this;
}
CircularInt&  CircularInt::operator -( CircularInt& a){
    x = x - a.x;
    x = x%y;
    return *this;
}
CircularInt&  CircularInt::operator /( CircularInt& a){
    *this = *this/a.x;
    return *this;
}


//the opertors between Object to int
CircularInt&  CircularInt::operator /(int num){
   if(x%num != 0) {
       throw string("There is no number x in {1,12} such that x*" 
                      + to_string(num) + "=" + to_string(x));
   }
    x = x / num;
    return *this;
}
CircularInt&  CircularInt::operator /=(int num){
   if(x%num != 0) {
       throw string("There is no number x in {1,12} such that x*" 
                      + to_string(num) + "=" + to_string(x));
   }
    x = x / num;
    return *this;
}
CircularInt&  CircularInt::operator +(int num){
    x = x + num;
    x = x%y;
    return *this;
}
CircularInt&  CircularInt::operator +=(int num) {
   x = x + num;
   x = x%y;
    return *this;
}
CircularInt&  CircularInt::operator -(int num){
    int temp = num;
    num = num%y;
    x =  x - num;
    if(temp > y)x=x+y; 
    return *this;
}
CircularInt&  CircularInt::operator -=(int num){
    int temp = num;
    num = num%y;
    x =  x - num;
    if(temp > y)x=x+y; 
    return *this;
}
CircularInt&  CircularInt::operator *(int num){
   x = x * num;
   x = x%y;
   return *this;
}

CircularInt&  CircularInt::operator *=(int num){
   x = x * num;
   x = x%y;
   return *this;
}
CircularInt& CircularInt::operator =(int num){
   x = num;
   return *this;
}

ostream& operator <<(ostream& os, CircularInt& a) {
    os << a.x;
    return os;
}


CircularInt operator -(const int num ,CircularInt& a){
    a = -a;
    CircularInt z {num - a.x , a.y};
    if(z.x < 0){
        z.x  = z.x + z.y;
    }
    return z;
}



// CircularInt b& operator =(CircularInt a) {
//     x = a.x;
//     y = a.y;
//     return *this;
// }
// CircularInt& operator =(int num) {
//     x = num;
//     return *this;
// }


CircularInt&  CircularInt::operator++(int){
   x++;
   x = x%y;
    return *this;
}
CircularInt&  CircularInt::operator--(int){
   x--;
    return *this;
}







