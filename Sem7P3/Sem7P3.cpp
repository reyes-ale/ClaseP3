#include <iostream>
using namespace std; 
template <class X>

void intercambiar(X &a, X &b) {
    X tp = a;
    a = b;
    b = tp;
    cout <<  " => " << a << " , " << b << endl;
}

int main() {
    int a = 10, b = 20;
    float c = 10.5, d = 20.5;
    intercambiar(a, b);
    intercambiar(c, d);
}
