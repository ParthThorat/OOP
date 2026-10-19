#include <iostream>
#include <string>
using namespace std;
template <typename T>
T maximumValue(T a, T b) {
    return (a > b) ? a : b;
}
template <typename T>
class Box {
private:
    T value;
public:
    Box(T val) : value(val) {}

    void display() const {
        cout << "Box value = " << value << endl;
    }
};
int main() {
    cout << "Maximum integer = " << maximumValue(25, 10) << endl;
    cout << "Maximum double = " << maximumValue(2.3, 5.5) << endl;
    Box<int> intBox(100);
    intBox.display();
    Box<string> stringBox("C++ Templates");
    stringBox.display();
    return 0;
}
