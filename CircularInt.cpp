
#include <iostream>
#include <vector>
#include "CircularInt.hpp"

using namespace std;
//constarctur
CircularInt::CircularInt(int a,int b){
    y = b;
    x = a%b; 
}
//negetive and positive 
CircularInt CircularInt::operator -() {//turn against the clock
CircularInt z = *this;
   normalization(-x , z);
    return z;
}
// CircularInt& CircularInt::operator +() {
//     return *this;
// }
// //the normal operators between Object + , - , / , *  , =  
CircularInt operator +(CircularInt& a ,CircularInt& b){
    CircularInt t = a;
    int num1 = a.x + b.x;
    normalization(num1, t);
    return t;
}
CircularInt operator +=(CircularInt& a ,CircularInt& b){
    CircularInt t = a;
    int num1 = a.x + b.x;
    normalization(num1, t);
    return t;
}
CircularInt operator /(const int num ,CircularInt& a){
    CircularInt z = a;
    
    if(z.x%num != 0) {
       throw string("There is no number x in {1,12} such that x*" 
                      + to_string(num) + "=" + to_string(z.x));
   }
    z.x = z.x / num;
    return z;
}
CircularInt operator /(CircularInt& a ,const int num){
    CircularInt z = a;
    
    if(z.x%num != 0) {
       throw string("There is no number x in {1,12} such that x*" 
                      + to_string(num) + "=" + to_string(z.x));
   }
    z.x = z.x / num;
    return z;
}
CircularInt operator+ (CircularInt& a, const int num){
    CircularInt t = a;
    int num1 =  num + a.x;
    normalization(num1 , t);
    return t;
}

CircularInt operator+ (const int num , CircularInt& a){
    CircularInt t = a;
    int num1 =  num + a.x;
    normalization(num1 , t);
    return t;
}
CircularInt& CircularInt::operator +=(int num) {
   num = x + num;
   normalization(num ,*this);
    return *this;
}

CircularInt& CircularInt::operator *=(int num){
   x = x * num;
   x = x%y;
   return *this;
}
CircularInt& CircularInt::operator /=(int num){    
    if(x%num != 0) {
       throw string("There is no number x in {" + to_string(x) + "," + to_string(y) + "} such that x*" 
                      + to_string(num) + "=" + to_string(x));
   }
    x = x / num;
    x = x % y;
    return *this;
}

// // add one or minus one
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
  while(x < 0) x = x + y;
    return *this;
}
CircularInt&  CircularInt::operator --(){
    --x;
     while(x < 0) x = x + y;
    return *this;
}

// //Comparison
bool operator ==(CircularInt&  a , CircularInt&  b){
    if (b.x == a.x)return true;
    return false;
}
bool operator ==(CircularInt&  a , int num){
    if(a.x == num)return true;
    return false;
}
bool operator ==(int num , CircularInt& a){
    if(a.x == num)return true;
    return false;
}
bool operator !=(CircularInt&  a , CircularInt&  b){
    if (b.x != a.x)return true;
    return false;
}
bool operator !=(CircularInt&  a , int num){
    if(a.x != num)return true;
    return false;
}
bool operator !=(int num , CircularInt& a){
    if(a.x != num)return true;
    return false;
}
//big or small
bool operator <(CircularInt&  a , CircularInt&  b){
    if (a.x < b.x)return true;
    return false;
}
bool operator <(CircularInt&  a , int num){
    if(a.x < num)return true;
    return false;
}
bool operator <(int num , CircularInt& a){
    if(num < a.x)return true;
    return false;
}
bool operator >(CircularInt&  a , CircularInt&  b){
    if (a.x > b.x)return true;
    return false;
}
bool operator >(CircularInt&  a , int num){
    if(a.x > num)return true;
    return false;
}
bool operator >(int num , CircularInt& a){
    if(num > a.x)return true;
    return false;
}
bool operator >=(CircularInt&  a , CircularInt&  b){
    if (a.x >= b.x)return true;
    return false;
}
bool operator >=(CircularInt&  a , int num){
    if(a.x >= num)return true;
    return false;
}
bool operator >=(int num , CircularInt& a){
    if(num >= a.x)return true;
    return false;
}
bool operator <=(CircularInt&  a , CircularInt&  b){
    if (b.x <= a.x)return true;
    return false;
}
bool operator <=(CircularInt&  a , int num){
    if(a.x <= num)return true;
    return false;
}
bool operator <=(int num , CircularInt& a){
    if(num <= a.x)return true;
    return false;
}





//  //input anf output operator
ostream& operator <<(ostream& os, const CircularInt& a) {
    os << a.x;
    return os;
}

istream& operator >>(istream& is, CircularInt& a){  
    is >> a.x;  
    return is;  
}  
CircularInt& CircularInt::operator =(const int num){
    normalization(num,*this);
    return *this;
}

CircularInt operator* (CircularInt& a, const int num){
    CircularInt t = a;
    int num1 =  num * a.x;
    normalization(num1 , t);
    return t;
}
CircularInt operator *(CircularInt& a ,CircularInt& b){
    CircularInt t = a;
    int num1 = a.x * b.x;
    normalization(num1, t);
    return t;
}
CircularInt operator *=(CircularInt& a ,CircularInt& b){
    CircularInt t = a;
    int num1 = a.x * b.x;
    normalization(num1, t);
    return t;
}
CircularInt operator -(CircularInt& a ,CircularInt& b){
    CircularInt t = a;
    int num1 = a.x - b.x;
    normalization(num1, t);
    return t;
}
CircularInt operator -=(CircularInt& a ,CircularInt& b){
    CircularInt t = a;
    int num1 = a.x - b.x;
    normalization(num1, t);
    return t;
}
CircularInt operator- (CircularInt& a, const int num){
    CircularInt t = a;
    int num1 = a.x - num;
    normalization(num1 , t);
    return t;
}
CircularInt operator- (const int num , CircularInt& a){
    CircularInt t = a;
    int num1 =  num - a.x;
    normalization(num1 , t);
    return t;
}
CircularInt operator-= (CircularInt& a, const int num){
    CircularInt t = a;
    int num1 =  a.x - num;
    normalization(num1 , t);
    return t;
}






    




