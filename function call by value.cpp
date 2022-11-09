#include<iostream>
using namespace std;
int call_by_value(int n)
{
    cout<<"Adress "<<&n<<endl;
    n*= n;
    return n;
}
int main(){
    int n=0;
    cout<<"address of n in main "<<&n<<endl;
    cout<<"ans "<<call_by_value<<n<<endl;
    cout<<"value "<<n<<endl;
    return 0;
}
