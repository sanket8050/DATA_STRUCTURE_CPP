#include<iostream>
using namespace std;

class Animal{
    public: 
        int age ;
        int weight;
        //default constructor

        Animal(){
            this -> age =10;
            this -> weight =10;
        }

        // parameterised constructor

        Animal(int age){
            this -> age =age;
        }

        // copy constructoe

        Animal(const Animal& obj){
            this -> age = obj.age;
            this ->weight = obj.weight;
        }

        void print(){
            cout<<"age"<<this -> age <<"weight"<<this -> weight <<"kg"<<endl;
        }
};

int main(){
    Animal obj;                //default constructor call
    obj.print();

    Animal obj2(5);         //Parameterised constructor call
    obj2.print();

   
    Animal obj3 = obj2;   //copy constructor call
    obj3.print();
}