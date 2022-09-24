#include <iostream>
#include <memory>
using namespace std;
/*
struct Owner {
   std::shared_ptr<Owner> other;
};

int main()
{
    std::shared_ptr<Owner> p1 (new Owner());
    std::shared_ptr<Owner> p2 (new Owner());
    p1->other = p2; // p1 references p2
    p2->other = p1; // p2 references p1

    cout << "DIRECCION DE MEMORIA DE P1: " << p1.get() << endl;
    cout << "CANTIDAD DE REFERENCIAS DE P1: " << p1.use_count() << endl;

    cout << "\nDIRECCION DE MEMORIA DE P2: " << p2.get() << endl;
    cout << "CANTIDAD DE REFERENCIAS DE P2: " << p2.use_count() << endl;

    p1.reset();

    cout << "\n\nDIRECCION DE MEMORIA DE P1: " << p1.get() << endl;
    cout << "CANTIDAD DE REFERENCIAS DE P1: " << p1.use_count() << endl;

    cout << "\nDIRECCION DE MEMORIA DE P2: " << p2.get() << endl;
    cout << "CANTIDAD DE REFERENCIAS DE P2: " << p2.use_count() << endl;

    return 0;
}*/

template<unsigned int n>
struct factorial{
    enum{
        value = n* factorial<n-1>::value
    };
};

template<>
struct factorial<0>
{
    enum {value = 1};
};

int main() {
    std::cout << factorial<7>::value << std::endl;
}
