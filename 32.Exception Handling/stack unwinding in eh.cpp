#include <iostream>
#include <stdexcept>
using namespace std;

class Resource {
public:
    Resource(const string& name) : name(name) {
        cout << "Acquiring resource: " << name << endl;
    }

    ~Resource() {
        cout << "Releasing resource: " << name << endl;
    }

private:
    string name;
};

void innerFunction() {
    Resource innerResource("InnerResource");
    throw runtime_error("Exception from innerFunction");
}

void middleFunction() {
    try {
        Resource middleResource("MiddleResource");
        innerFunction();
    } catch (const exception& ex) {
        cout << "Caught exception in middleFunction: " << ex.what() << endl;
        // Perform additional handling or rethrow
        throw;
    }
}

void outerFunction() {
    try {
        Resource outerResource("OuterResource");
        middleFunction();
    } catch (const exception& ex) {
        cout << "Caught exception in outerFunction: " << ex.what() << endl;
    }
}

int main() {
    try {
        outerFunction();
    } catch (const exception& ex) {
        cout << "Caught exception in main: " << ex.what() << endl;
    }

    return 0;
}
