#include <vector>
#include <iostream>
#include <typeinfo>
#include <stdexcept>

using namespace std;

int main() {
    vector<int> vec;
    vec.push_back(10);
    int i = vec[100];

    try {
        i = vec[0];
        cout << i << endl;
    }
    catch (exception& e) {
        cout << "Caught: " << e.what() << endl;
        cout << "Type: " << typeid(e).name() << endl;
    }
    catch (...) {
        cout << "Unknown exception: " << endl;
    }

    return 0;
}