#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int nums[] = {10, 22, 5, 11, -9};
    int size = 5;

    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    }
    cout << "largest no : " << largest;

    return 0;
}