#include <cstdlib>
#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    // struct rectangle r = {10, 5};
    // cout << r.length << endl;

    // rectangle *p = &r;
    // cout << (*p).breadth << endl;
    // cout << (*p).length << endl;

    // now we will creat a object in heap
    rectangle *p;
    // p = (struct rectangle *)malloc(sizeof(struct rectangle));
    p = new rectangle;
    (*p).length = 15;
    (*p).breadth = 20;
    cout << p << endl;
    cout << (*p).length << endl;
    cout << (*p).breadth << endl;

    return 0;
}