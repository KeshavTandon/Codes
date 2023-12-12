// +++++++++++++++++++++++++++4 PILLARS OF OOPS +++++++++++++++++++++++++++++++++++++++++++++

//Encapsulation
//-data hiding 

//Inheritance

#include<bits/stdc++.h>
using namespace std;
// class Animal {
//   protected:
//   int age;
// };

// class Dog:public Animal {
//    public:
//    void print() {
//     cout << this->age;
//    }
// };


// class A{
//     public:
//     int weight;
// };

// class B{
//     public:
//     int weight;
// };

// class C: public A,public B{
//     int sub;
// };

// Operator Overloading
class Param{
public:
int val;
void operator+(Param& obj2){
  int val1=this->val;
  int val2=obj2.val;
  cout << (val2-val1) << endl;
}

};


int main()
{
//   Dog d1;
//   d1.print();
// C obj;
// cout << obj.A::weight << endl;

Param object1,object2;
object1.val=4;
object2.val=8;
object1+object2;
}