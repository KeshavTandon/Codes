#include<bits/stdc++.h>
using namespace std;
class Animal{
    
    public:
    int age;
    int weight;
    string type;

    Animal(int age,int weight){ //Paramterised constrcutor
        this->age=age;
        this->weight=weight;
        cout << "Parametrised constructor is called" << endl;
    }

    Animal(Animal &obj){ //Copy Constructor
       this->age=obj.age;
       this->weight=obj.weight;
       cout <<"Copy Constructor is called" << endl;
    } 

    ~Animal(){
        cout << "Destructor is called" << endl;
    }

    void eat()  //Functions-Behaviour
    {
        cout <<"Eating" << endl;
    }

    void bark()
    {
        cout << "Barking" << endl;
    }

    int getWeight(){
        return weight;
    }

    void setWeight(int w)
    {
        weight=w;
    }

};
int main()
{
//   Animal ramesh;
//   ramesh.type="Cheetah";
//   cout << ramesh.type << endl;
//   ramesh.eat();
//   ramesh.bark();
//   ramesh.setWeight(100);
//   cout << "Weight is:" << ramesh.getWeight() << endl;

//Dynamic Memory Allocation using new keyword
// Animal *suresh=new Animal;
// (*suresh).age=20;
// suresh->type="billi";
// cout << (*suresh).age << " " << suresh->type << endl;

Animal a(10,60);
cout << a.age << endl;
// Animal* b=new Animal(100);

//Copy Constructor
Animal c=a;
cout << a.age << " " << a.weight << endl;

Animal* k=new Animal(10,100);
delete k;

}

