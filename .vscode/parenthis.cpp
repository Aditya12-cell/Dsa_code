#include <iostream>
using namespace std;

class sample {
public:
    int a;

    int square() {         // return type is int
        cout << "Enter the value of a: ";
        cin >> a;
        return a * a;      // now valid
    }
};

int main() {
    sample s1;
    int result = s1.square();     // call and store result
    cout << "Square of a is: " << result << endl;
    return 0;
}
