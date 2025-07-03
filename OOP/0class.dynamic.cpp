#include<iostream>
#include<string>
using namespace std;

class car{
    int age;
    int class;

    public:
    string name;


};

int main(){
    car* sanket = new car;
    sanket -> name = "sank";
    cout<<sanket.name<<endl;
}--------------------------------------------+