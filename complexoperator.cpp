#include <iostream>
using namespace std;
class Complex {
    int a, b; 
public:
    void get_data() {
        cout << "Enter the value of Complex Numbers a (real part), b (imaginary part): ";
        cin >> a >> b;
    }
    Complex operator+(Complex ob) {
        Complex t;
        t.a = a + ob.a; 
        t.b = b + ob.b; 
        return t;
    }
    Complex operator-(Complex ob) {
        Complex t;
        t.a = a - ob.a; 
        t.b = b - ob.b; 
        return t;
    }
    void display() {
        cout << a << " + " << b << "i" << endl; 
    }
};
int main() {
    Complex c1, c2, result;
    c1.get_data();
    c2.get_data(); 
    result = c1 + c2;
    cout << "Sum: ";
    result.display();
    result = c1 - c2;
    cout << "Difference: ";
    result.display();
    return 0;
}