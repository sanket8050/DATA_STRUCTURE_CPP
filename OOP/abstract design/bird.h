#if !defined(BIRD_H)
#define BIRD_H

#include<iostream>

class bird{
    public:
    virtual void fly()=0;
    virtual void eat()=0;
};

class sparrow:public bird{
    public:
    void fly(){
        std::cout<<"sparrow is flying\n";
    }
    void eat(){
        std::cout<<"sparrow is eating\n";
    }
};

class eagle:public bird{
    public:
    void fly(){
        std::cout<<"eagle is flying\n";
    }
    void eat(){
        std::cout<<"eagle is eating\n";
    }
};

#endif  