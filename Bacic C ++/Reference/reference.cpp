#include <iostream>

using namespace std;

int main()
{

    int a = 10;
    int &r = a;

    cout << r << endl;
    a++;
    cout << r << endl;

    return 0;
}