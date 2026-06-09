#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec; //!syntax 1
    // vector<int>vec = {1,2,3}; //!syntax 2
    // vector<int>vec(5, 0); //!syntax 3
    

    //! vetor functions
    
    cout<< "Size : " << vec.size()<<endl;

    vec.push_back(200);
    vec.push_back(400);
    vec.push_back(600);
    cout<< "Push Back : " << vec.size()<<endl;
    
    vec.pop_back();
    cout<< "Pop Back : " << vec.size()<<endl;

    cout<< "Front : " << vec.front()<<endl;
    cout<< "Back : " << vec.back()<<endl;
    cout<< "At : " << vec.at(1)<<endl;
    for(int i : vec){
        cout << i <<endl;
    }
    return 0;
}