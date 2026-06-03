#include<iostream>
using namespace std;

int main(){
    int a, b, min = 0;

    cout<<"Enter A : ";
    cin>> a;

    cout<<"Enter B : ";
    cin>> b;

    if(a > b){
        cout<<"B is min : "<<b;
    }else{
        cout<<"A is min : "<<a;
    }
}