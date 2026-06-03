#include<iostream>
using namespace std;

int main(){
    int no = 0;

    cout<<"Enter a number : ";
    cin>> no;

    if(no % 2 == 0){
        cout<<"Even no : "<<no;
    }else{
        cout<<"Odd no : "<<no;
    }
}