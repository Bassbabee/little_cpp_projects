#include <iostream>

class Base {
public:
    virtual ~Base() // note: virtual
    {
        std::cout << "Calling ~Base()\n";
    }
};

class Derived: public Base {
private:
    int* m_array;

public:
    Derived(int length) : m_array{ new int[length] } {}

    virtual ~Derived() // note: virtual
    {
        std::cout << "Calling ~Derived()\n";
        delete[] m_array;
    }
};

int main() {
    Derived *derived { new Derived(5) };
    Base *base { derived };

    delete base;

    return 0;
}


// If you intend your class to be inherited from, make sure your destructor is virtual.
// If you do not intend your class to be inherited from, mark your class as final. This will prevent other classes from inheriting from it in the first place, without imposing any other use restrictions on the class itself.
