#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int nums[] = {100, 22, 5, 11, -9};
    int size = 5;

    int largest = INT_MIN;
    int index = -1;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
            index = i;
        }
    }
    cout << "largest no : " << largest<<endl;
    cout<<"index : "<<index;

    return 0;
}