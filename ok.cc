  
#include <iostream>
using namespace std;


class B {
public:
        B(int* ptr) :int_ptr(ptr) {};

        int *int_ptr;
};

class A {
public:
        A() :ptr(nullptr) {};
        A(B* ptr) :B_ptr(ptr) {};
        A(A* ptr) :ptr(ptr) {};
        A(int* ptr) :int_ptr(ptr) {};

        B* B_ptr;
        A* ptr;
        int* int_ptr; 

};

int main() {

        int *c = new int(3);

        A *z = new A;

        B *a = new B(c);

        A *b = new A(a);
        A *w = new A(b);
 
        cout << b->B_ptr << endl;

        delete a;

        delete c; 

        cout << b->B_ptr << endl;

        return 0;
}
