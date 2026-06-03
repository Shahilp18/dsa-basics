#include<iostream>

using namespace std;

int sum(int a, int b){
    int s = a + b;
    return s;
}

//! sum 1 to n
int sum2(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
    
}

int main(){
    int x = sum(10,20);
    cout<<x<<endl;

    cout<< sum2(5);

}