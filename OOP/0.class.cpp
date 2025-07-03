
// the store data in stack memory  

#include<iostream>
#include<string>
using namespace std;

class animal{
    private:
    int weight;
    int height;
    public:

    string name;
    string owner;

    int getweight(){
        return weight;
    }

    int setweight(int x){
        weight = x;
    }
};

int main(){

    animal rock;
    rock.name = "rocky";
    rock.owner = "Sanket";
    cout<<rock.name<<endl;
    cout<<rock.owner<<endl;

    animal rock1;
    rock1.setweight(100);
     
    cout<<rock1.getweight()<<endl;
    
    animal* a = new a;
    a -> weight = 10;
    cout<<a.getweight()<<endl;
}