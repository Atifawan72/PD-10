#include <iostream>
using namespace std;
void arrange(int arr[], int size);
bool checknum(int arr[], int size);
int main()
{
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;
    int arr1[size];
    cout << "Enter the elements of the array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }
    arrange(arr1, size);
    bool num = checknum(arr1, size);
    if (checknum(arr1, size))
    {
        cout << "Can be arranged: " << num;
    }
}
void arrange(int arr[], int size)
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
bool checknum(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i + 1] - arr[i] == 1)
        {
            return true;
        }
        else
            return false;
    }
}
