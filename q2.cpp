#include <iostream>
using namespace std;

class AccessDemo {
public:
    int publicVar;

protected:
    int protectedVar;

private:
    int privateVar;

public:
    AccessDemo() : publicVar(1), protectedVar(2), privateVar(3) {}

    void display() {
        cout << "Public Variable: " << publicVar << endl;
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Private Variable: " << privateVar << endl;
    }
};

class DerivedClass : public AccessDemo {
public:
    void accessProtected() {
        cout << "Accessing protected variable from derived class: " << protectedVar << endl;
    }
};

int main() {
    AccessDemo obj;
    obj.publicVar = 10; // Directly accessible
    obj.display();

    DerivedClass derived;
    derived.accessProtected();

    return 0;
}

