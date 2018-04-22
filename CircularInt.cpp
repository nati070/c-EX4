
#include <iostream>
#include <vector>
#include "CircularInt.hpp"

using namespace std;
//constarctur
CircularInt::CircularInt(int a,int b){
    y = b;
    x = a%b; 
}
// negetive and positive 
CircularInt& CircularInt::operator -() {//turn against the clock
    x = y - x;
    return *this;
}
CircularInt& CircularInt::operator +() {
    return *this;
}
//the normal operators between Object + , - , / , *  , =  
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
CircularInt operator -(const int num ,CircularInt& a){
    a = -a;
    CircularInt z {num - a.x , a.y};
    if(z.x < 0){
        z.x  = z.x + z.y;
    }
    return z;
}
// add one or minus one
CircularInt&  CircularInt::operator++(int){
   x++;
   x = x%y;
    return *this;
}
CircularInt&  CircularInt::operator ++(){
    ++x;
    x = x%y;
    return *this;
}
CircularInt&  CircularInt::operator--(int){
   x--;
    return *this;
}
CircularInt&  CircularInt::operator --(){
    --x;
    if(x == 0) x = y;
    return *this;
}

//Comparison operators/relational operators
bool CircularInt::operator ==(CircularInt const& a){
    if (this->x == a.x && this->y == a.y)return true;
    return false;
}
bool CircularInt::operator !=(CircularInt const& a){
    if (this->x == a.x && this->y == a.y)return false;
    return true;
}

 //input anf output operator
ostream& operator <<(ostream& os, CircularInt& a) {
    os << a.x;
    return os;
}
istream& operator >>(istream& is, CircularInt& a){  
    is >> a.x;  
    return is;  
}  









