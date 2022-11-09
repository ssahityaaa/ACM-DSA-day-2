#include<iostream>
using namespace std;
void call_by_refrence_pointer(int *n){
    cout<<"Adress "<<n<<endl;
    *n*= *n;
    
}
int main(){
    int n=0;
    cout<<"address of n in main "<<&n<<endl;
    call_by_refrence_pointer(&n);
    cout<<"ans "<<n<<endl;
    cout<<"value "<<n<<endl;
    return 0;
}

