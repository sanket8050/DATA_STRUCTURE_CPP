// // types of inheritance

// A}inheritance  1)compile time 
//                2)run time 

//                1)compilr time 
//                    a)function overloading
//                    b)operater overloading

// function overloading

#include<iostream>
using namespace std;

class math{
    public:
    int sum(int a,int b){
        return a + b ;
    }

    int sum(int a,int b,int c){
        return a + b+ c ;
    }

    int sum(int a,float b){
        return a + b;
    }
};

int main(){
    math ob1;
    cout<<ob1.sum(5,5.5f);
}