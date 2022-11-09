#include<iostream>
using namespace std;
int main(){
    int x=1080;
    int *p;
    p=&x;
    cout<<x<<endl;
    cout<<p<<endl;
    cout<<*p;
    
    return  0;
    /*
    p=&p;
    &p=p;
    x=*p;
    */

}