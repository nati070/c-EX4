
#include <iostream>
#include <vector>

using namespace std;

class CircularInt{

private:
int x;
int y;

public:

//constarctur
CircularInt(int a,int b){
    y = b;
    x = a%b; 
}
//turn against the clock
CircularInt& operator -() {
    x = y - x;
    return *this;
}
//the normal operators between Object + , - , / , * 
CircularInt& operator +( CircularInt a){
    x = x + a.x;
    x = x%y;
    return *this;
}
CircularInt& operator *( CircularInt a){
    x = x * a.x;
    x = x%y;
    return *this;
}
CircularInt& operator -( CircularInt a){
    x = x - a.x;
    x = x%y;
    return *this;
}
CircularInt& operator /( CircularInt a){
    *this = *this/a.x;
    return *this;
}


//the opertors between Object to int
CircularInt& operator /(int num){
   if(x%num != 0) {
       throw string("There is no number x in {1,12} such that x*" 
                      + to_string(num) + "=" + to_string(x));
   }
    x = x / num;
    return *this;
}
CircularInt& operator /=(int num){
   if(x%num != 0) {
       throw string("There is no number x in {1,12} such that x*" 
                      + to_string(num) + "=" + to_string(x));
   }
    x = x / num;
    return *this;
}
CircularInt& operator +(int num){
    x = x + num;
    x = x%y;
    return *this;
}
CircularInt& operator +=(int num) {
   x = x + num;
   x = x%y;
    return *this;
}
CircularInt& operator -(int num){
    int temp = num;
    num = num%y;
    x =  x - num;
    if(temp > y)x=x+y; 
    return *this;
}
CircularInt& operator -=(int num){
    int temp = num;
    num = num%y;
    x =  x - num;
    if(temp > y)x=x+y; 
    return *this;
}
CircularInt& operator *(int num){
   x = x * num;
   x = x%y;
   return *this;
}

CircularInt& operator *=(int num){
   x = x * num;
   x = x%y;
   return *this;
}
CircularInt& operator =(int num){
   x = num;
   return *this;
}

friend ostream& operator <<(ostream& os,const CircularInt a) {
    os << a.x;
    return os;
}


friend CircularInt operator -(const int num ,CircularInt a){
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


CircularInt& operator++(int){
   x++;
   x = x%y;
    return *this;
}
CircularInt& operator--(int){
   x--;
    return *this;
}


};
int main() {
	 CircularInt hour {1, 12};                 // <hour is an integer between 1 and 12, like an hour on the clock>
	// cout << hour << endl;                     // 1
	// hour += 4;  cout << hour << endl;         // 5
	// (hour += 2)++;  cout << hour << endl;     // 8
	// hour += 18;   cout << hour << endl;       // 2   (18 hours after 8)
	// cout << -hour << endl;                    // 10  (2 hours before midnight)
	hour = 1 - hour; cout << hour << endl;    // 11  (2 hours before 1)
	cout << hour+hour << endl;                // 10 (11 hours after 11)
	// hour *= 2;   cout << hour << endl;        // 10 (11*2 = 11+11)
	// cout << hour/2 << endl;                   // TWO OPTIONS: 11 (since 11*2=10) or 5 (since 5*2=10 too).

	// try {
	// 	cout << hour/3;
	// } catch (const string& message) {
	// 	cout << message << endl;     // "There is no number x in {1,12} such that x*3=10"
	}



