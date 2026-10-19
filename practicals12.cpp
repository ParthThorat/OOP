#include <iostream>
using namespace std;

namespace Arithmetic {
    void show(int a, int b) {
        cout << "Arithmetic namespace: " << a << "+" << b << "=" << (a + b) << endl;
    }
}

namespace Geometry {
    void show(int length, int width) {
        cout << "Geometry namespace: rectangle area = " << (length * width) << endl;
    }
}

int main() {
    Arithmetic::show(10, 20);
    Geometry::show(6, 4);
    return 0;
}
