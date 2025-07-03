// accessing protected class in form of private

#include<iostream>
using namespace std;

class Animal {
        protected:
            int age;
};

class Dog : private Animal{
    public :
    void Print(){
        cout<< this -> age;
    }
};

int main(){
    Dog d1;
    d1.Print();
}