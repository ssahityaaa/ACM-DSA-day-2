#include<iostream>
using namespace std;


int main(){
    int ar[5]={10,20,30,40,50};
    cout<<ar;
    cout<<ar;
    int *p=ar;
    cout<<*p;
    cout<<&ar[0];
    return 0;
}

