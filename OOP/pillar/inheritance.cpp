#include<iostream>
using namespace std;

class Animal{      //Parent class
   public: 
            int age; 
            int wt;

            void eat(){
                cout<<"eating"<<endl;

            }
};

class Dog : public Animal{           // child class 
                                     //accessing parents feature in child class

};

int main(){
    Dog d1;
    d1.eat();
}