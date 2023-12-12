#include<bits/stdc++.h>
using namespace std;
int main()
{

    //lvalue-variable which have memory location
    //rvalue-variable which doesnt have memory location


    //1.const with pointers
    //const content is constant but pointer is not

    // const int *a=new int(2);
    // cout << *a << endl;

    // int b=20;
    // a=&b;
    // cout << *a << endl;


    //2.content can be modified but pointers can't be reassigned
    // int *const a=new int(6);
    // cout << *a << endl;

    // *a=10;
    // cout << *a << endl; //6 10


    //3.Const pointer and const content
    // const int *const a=new int(20);
    // cout << *a << endl;


    //4.Const with classes
    //-IF WE ARE MAKING like void printABC(const abc &a) SO THE FUNCTIONS CALLS WILL ALSO BE TO CONST.It will throw an error if we try to make non-constant function call

    //If we want to debug the const then we can make use of mutable keyword through which we can change the value though it is not the good practice

    //5.Initialisation List
    //fancy way to write constructor
    
    //old way was like this
    //abc(int _x,int _y,int _z){
    //     x=_x;
    //     y=_y;
    //     z=_z;
    // }

    //new way
    // abc(int _x,int _y,int _z):x(_x),y(_y),z(_z){}  --Initilisation list

    // Advantage of Intialisation list- if we have declared on above const int z;
    // and we want to assign it the value -in old way we cant assign as it is const but 
    // in Initialisation list we can assign to it.

    //5.Macros
    //#define PI=3.145678



    //SHALLOW VS DEEP COPY
    // a=b || a(b) it will make the shallow copy
    //By default the copy constructor uses dumb constructor which means it makes shallow copy 
    // i.e it will point to the same location 
    //so if we free the one variable then another which is pointing to the same location will also get freed
    //also if we change the value of one,another will also be changed as it is pointing at same location


    //the solution of this is deep copy
    //abc(const abc&obj)
    // {
        //x=obj.x
        //y=new int(*obj.y)
    // }

    // from this it will make new memory location which will have the same value of the object


    //Global variable- for accessing this in main :: 

    //Static keyword-
    // Q How c++ identifies difference that which obj has called?
    // Ans It passes hidden parameter known as 'this' and this is separate for every instance of class.By this it identifies which object has called the function.
    // It is used as this->x << this->y

    // If we want to share same data member to all the instances of class then we use of static keyword
    // we use outside the class
    // int abc::x;
    // int abc::y;

    //static data member-that variable is going to share memory with all the class instances.
    //static memeber function-there is no instance of that class being passed into that method.



}