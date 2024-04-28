#include <iostream>
#include <typeinfo>
using namespace std;


class Base {
public:
    virtual void foo() {}
};

class Derived : public Base {
public:
    void foo() override {}
};

int main() {
    Base baseObj;
    Derived derivedObj;

    const type_info& baseTypeInfo = typeid(baseObj);
    const type_info& derivedTypeInfo = typeid(derivedObj);

    cout << "Type of baseObj: " << baseTypeInfo.name() << endl;
    cout << "Type of derivedObj: " << derivedTypeInfo.name() << endl;

    // Comparing types
    if (typeid(Base) == typeid(derivedObj)) {
        cout << "derivedObj has type Base or a derived class of Base." << endl;
    } else {
        cout << "derivedObj does not have type Base or a derived class of Base." << endl;
    }

    return 0;
}
