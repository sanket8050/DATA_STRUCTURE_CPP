#include<iostream>
using namespace std;

class param{
        public:
        int val;

        void operator + (param& ob2){
            int value1 = this -> val;
            int value2 = ob2.val;
            cout<<(value1 - value2)<<endl;
        }
};

int main(){
    param ob1,ob2;
    ob1.val = 7;
    ob2.val = 5;

    ob1 + ob2 ;
    return 0;
}