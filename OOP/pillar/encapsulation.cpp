#include<iostream>
using namespace std;

class Animal{
    private:
            int age;            // Perfect encapsulation all data is hiden
            int weight;
    
    public:
            int getAge(){
                return this -> age ;     // data is accessed by get and set function
            }

            void setAge(){
                this -> age = age;
            }
};`