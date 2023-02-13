// parametrea passing by value

// #include <iostream>
// using namespace std;
// int add(int a, int b)
// {
//     int c;
//     c = a + b;
//     return c;
// }
// int main()
// {
//     int num1 = 10, num2 = 20, sum;
//     sum = add(num1, num2);
//     cout << sum << endl;
// }

// call by adress

#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1 = 10, num2 = 20;
    swap(&num1, &num2);

    cout << "first number is : " << num1 << endl;
    cout << "first number is : " << num2 << endl;
    return 0;
}