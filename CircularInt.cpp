
#include <iostream>
#include <vector>
#include "CircularInt.hpp"

using namespace std;
//constarctur
CircularInt::CircularInt(int a,int b){
  first = a;
  last = b;
  current = a; 
}

//negetive and positive 
CircularInt CircularInt::operator -() {//turn against the clock
CircularInt z = *this;
   normalization(-current , z);
    return z;
}
// CircularInt& CircularInt::operator +() {
//     return *this;
// }
// //the normal operators between Object + , - , / , *  , =  
CircularInt operator +(CircularInt& a ,CircularInt& b){
    CircularInt t = a;
    int num1 = a.current + b.current;
    normalization(num1, t);
    return t;
}
CircularInt operator +=(CircularInt& a ,CircularInt& b){
    CircularInt t = a;
    int num1 = a.current + b.current;

    normalization(num1, t);
    return t;
}
CircularInt operator /(const int num ,CircularInt& a){
    CircularInt z = a;
    
    if(z.current%num != 0) {
       throw string("There is no number x in {1,12} such that x*" 
                      + to_string(num) + "=" + to_string(z.current));
   }
    z.current = num / z.current;
    return z;
}
CircularInt operator /(CircularInt& a ,const int num){
    CircularInt z = a;
    
    if(z.current%num != 0) {
       throw string("There is no number x in {1,12} such that x*" 
                      + to_string(num) + "=" + to_string(z.current));
   }
    z.current = z.current / num;
    return z;
}
CircularInt operator+ (CircularInt& a, const int num){
    CircularInt t = a;
    int num1 =  num + a.current;
    normalization(num1 , t);
    return t;
}

CircularInt operator+ (const int num , CircularInt& a){
    CircularInt t = a;
    int num1 =  num + a.current;
    normalization(num1 , t);
    return t;
}
CircularInt& CircularInt::operator +=(int num) {
   num = current + num;
   normalization(num ,*this);
    return *this;
}

CircularInt& CircularInt::operator *=(int num){
   current = current * num;
   current = current % last;
   return *this;
}
CircularInt& CircularInt::operator /=(int num){    
    if(current%num != 0) {
       throw string("There is no number x in {" + to_string(current) + "," + to_string(last) + "} such that x*" 
                      + to_string(num) + "=" + to_string(current));
   }
    current = current / num;
    return *this;
}

// // add one or minus one
CircularInt&  CircularInt::operator++(int){
   current++;
   current = current % last;
    return *this;
}
CircularInt&  CircularInt::operator ++(){
    ++current;
    current = current % last;
    return *this;
}
CircularInt& CircularInt::operator --(int){
   current--;
  while(current < 0) current = current + last;
    return *this;
}
CircularInt&  CircularInt::operator --(){
    --current;
     while(current < 0) current = current + last;
    return *this;
}

// //Comparison
bool operator ==(CircularInt&  a , CircularInt&  b){
    normalization(a.current, a);
    normalization(b.current, b);
    if (b.current == a.current)return true;
    return false;
}
bool operator ==(CircularInt&  a , int num){
    if(a.current == num)return true;
    return false;
}
bool operator ==(int num , CircularInt& a){
    if(a.current == num)return true;
    return false;
}
bool operator !=(CircularInt&  a , CircularInt&  b){
    if (b.current != a.current)return true;
    return false;
}
bool operator !=(CircularInt&  a , int num){
    if(a.current != num)return true;
    return false;
}
bool operator !=(int num , CircularInt& a){
     
    if(a.current != num)return true;
    return false;
}
//big or small
bool operator <(CircularInt&  a , CircularInt&  b){
    CircularInt tmp(a);
	normalization(b.current,tmp);
	if(a.current<tmp.current)
		return true;
return false; 
}
bool operator <(CircularInt&  a , int num){
    normalization(num,a);
    if(a.current < num)return true;
    return false;
}
bool operator <(int num , CircularInt& a){
normalization(num,a);
    if(num < a.current)return true;
    return false;
}
bool operator >(CircularInt&  a , CircularInt&  b){
    normalization(a.current,a);
    normalization(b.current,b);
    if (a.current > b.current)return true;
    return false;
}
bool operator >(CircularInt&  a , int num){
normalization(num,a);
    if(a.current > num)return true;
    return false;
}
bool operator >(int num , CircularInt& a){
    normalization(num,a);
    if(num > a.current)return true;
    return false;
}
bool operator >=(CircularInt&  a , CircularInt&  b){
    normalization(a.current,a);
    normalization(b.current,b);
    if (a.current >= b.current)return true;
    return false;
}
bool operator >=(CircularInt&  a , int num){
   normalization(num,a);
    if(a.current >= num)return true;
    return false;
}
bool operator >=(int num , CircularInt& a){
normalization(num,a);
    if(num >= a.current)return true;
    return false;
}
bool operator <=(CircularInt&  a , CircularInt&  b){
    CircularInt tmp(a);
	normalization(b.current,tmp);
	if(a.current<tmp.current){
		return true;
    }
    return false;
}
bool operator <=(CircularInt&  a , int num){
normalization(num,a);
    if(a.current <= num)return true;
    return false;
}
bool operator <=(int num , CircularInt& a){
    normalization(num,a);
    if(num <= a.current)return true;
    return false;
}

//  //input anf output operator
ostream& operator <<(ostream& os, const CircularInt& a) {
    os << a.current;
    return os;
}

istream& operator >>(istream& is, CircularInt& a){  
    is >> a.current;  
    return is;  
}  
CircularInt& CircularInt::operator =(const int num){
    normalization(num,*this);
    return *this;
}

CircularInt operator* (CircularInt& a, const int num){
    CircularInt t = a;
    int num1 =  num * a.current;
    normalization(num1 , t);
    return t;
}
CircularInt operator *(CircularInt& a ,CircularInt& b){
    CircularInt t = a;
    int num1 = a.current * b.current;
    normalization(num1, t);
    return t;
}
CircularInt operator *=(CircularInt& a ,CircularInt& b){
    CircularInt t = a;
    int num1 = a.current * b.current;
    normalization(num1, t);
    return t;
}
CircularInt operator -(CircularInt& a ,CircularInt& b){
    CircularInt t = a;
    int num1 = a.current - b.current;
    normalization(num1, t);
    return t;
}
CircularInt operator -=(CircularInt& a ,CircularInt& b){
    CircularInt t = a;
    int num1 = a.current - b.current;
    normalization(num1, t);
    return t;
}
CircularInt operator- (CircularInt& a, const int num){
    CircularInt t = a;
    int num1 = a.current - num;
    normalization(num1 , t);
    return t;
}
CircularInt operator- (const int num , CircularInt& a){
    CircularInt t = a;
    int num1 =  num - a.current;
    normalization(num1 , t);
    return t;
}
CircularInt operator-= (CircularInt& a, const int num){
    CircularInt t = a;
    int num1 =  a.current - num;
    normalization(num1 , t);
    return t;
}






    




