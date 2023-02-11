
#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;
};
// }r1,r2,r3; //-------declatation along with defination

int main()
{
    struct Rectangle r1 = {10, 5};

    r1.length = 15;
    r1.breadth = 7;
    cout << sizeof(r1) << endl;
    cout << r1.breadth << endl;
    cout << r1.length << endl;

    // declaration of struct

    // struct Rectangle r1;

    // we can decare outeside  main function

    return 0;
}
