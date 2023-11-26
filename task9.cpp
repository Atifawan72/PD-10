#include <iostream>

using namespace std;

int specialNumber(int nums[], int size)
{

    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (nums[j] < nums[j + 1])
            {

                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; ++i)
    {
        if (nums[i] >= i + 1)
        {
            return i + 1;
        }
    }

    return -1;
}

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int nums[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i)
    {
        cin >> nums[i];
    }

    int result = specialNumber(nums, size);

    cout << "Output: " << result << endl;

    return 0;
}
