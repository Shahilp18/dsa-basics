#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int nums[] = {10, 22, 5, 11, -9};
    int size = 5;

    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        }
    }
    cout << "Smallest no : " << smallest;

    return 0;
}