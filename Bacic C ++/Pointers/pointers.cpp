
#include <iostream>
#include <stdlib.h>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    // int a=10;
    // int *p; // declaration of pointer
    // p=&a;  //adress of a
    // cout<<p<<endl; //adress

    // cout<<a<<endl;
    // cout<<*p<<"  " <<&a<<endl; // will  print integer and a will show adress

    // int A[5]={2,3,4,5,6};

    // int *p;
    // p=A; // we do not have to use & to show adress in pointers..

    // // is we want to use A with & we have to give the value pf array like
    // // p= &A[0];

    // //printing all element of an array using pointers....

    // for(int i=0; i<5;i++){
    //     cout<<A[i]<<endl;
    //     cout<<p[i]<<endl;
    // };

    // lets creat pointers in heap
    //  int *p;
    //  // p=(int*)malloc(5*sizeof(int)); // this is for c
    //  //if we want to use it in c++ we can simply use:
    //  p=new int[5]; //dynamicalll  created memory so we have to deltee it topoo
    //  p[0]=10;
    //  p[1]=25;
    //  p[2]=23;
    //  p[3]=42;
    //  p[4]=24;
    //  // p[5]={10,1,15,2,21};  // this wil not work

    // cout<<p<<endl;

    // for(int i=0; i<5;i++){
    //     cout<<p[i]<<endl;
    // }
    // deltee[ ] p; // used to free or deloacted the hap memory, we can skip it
    // //inn samll programme

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct rectangle *p5;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;

    // it will show size of 8 to maintain padding

    return 0;
}
