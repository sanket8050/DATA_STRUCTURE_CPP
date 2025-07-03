#include<iostream>
#include "bird.h"
using namespace std;

void birddoessomething(bird *&bird){
    bird->eat();
    bird->fly();
}

int main(){
    bird *bird = new sparrow();  //by changing only bird name(sparrow)
                                // we can call other bird
   
    birddoessomething(bird);
    return 0;

}