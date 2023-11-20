#include <iostream>
using namespace std;

void ascending(int arr[], int size);

int main()
{
    const int size = 10;
    int arr1[size];

    cout << "Enter the weights of the 10 packages: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }

    ascending(arr1, size);
    cout<<"Sorted array in ascending order: ";
    cout << "[";
    for (int k = 0; k < size - 1; k++)
    {
        cout << arr1[k] << ", ";
    }
    cout << arr1[size - 1] << "]" << endl;
}

void ascending(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
