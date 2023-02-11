#include <iostream>

using namespace std;

int main()
{
    int a[5] = {2, 3, 4, 5, 6};

    // we can skip the size while init a array
    //  integer  take 4 bit

    //   int A[5];
    //   A[0]=12;
    //   A[1]=15;
    //   A[2]=25;
    // //   A[3]
    // //   A[4]

    // or using for loop

    // for (int i=0; i<5;i++){
    //     cout<<a[i]<<endl;
    // };

    // using for each loop

    for (int x : a)
    {
        cout << x << endl;
    };

    // if not init by vallue theh default value is zero

    // cout<<sizeof(A)<<endl;
    // cout<<a[3]<<endl;

    return 0;
}
