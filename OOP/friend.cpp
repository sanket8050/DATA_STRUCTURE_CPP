// friend function ---------------------------------------------------------------
#include<iostream>
using namespace std;

class A {
private:
    int x = 8;  // Private member
    int y;

    // Declare class B's print function as a friend
    friend void printA(const A &a);

public:
    // Public member function (still available)
    void display() const {
        cout << "Value of x from class A: " << x << endl;
    }
};

class B {
public:
    // Function to call the friend function of class A
    void print(const A &a) const {
        printA(a);  // Accessing the friend function of class A
    }
};

// Definition of the friend function
void printA(const A &a) {
    cout << "Value of x from class A (via friend function): " << a.x << endl;
}

int main() {
    A objA;
    B objB;

    // Class B calls the friend function of class A
    objB.print(objA);

    return 0;
}


//**************************************************************-************ */
//-------------instead of friend function
#include<iostream>
using namespace std;

class A {
private:
    int x = 8;  // Private member
    int y;

public:
    // Public member function
    void print() {
        cout << x << endl;
    }
};

class B {
public:
    // Function to call A's public print() function
    void print(const A &a) {
        a.print();  // Accessing the public function of class A
    }
};

int main() {
    A objA;
    B objB;

    // Class B calls A's public function
    objB.print(objA);

    return 0;
}
