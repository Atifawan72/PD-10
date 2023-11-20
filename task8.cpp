#include <iostream>

using namespace std;

int numberRotation(int size, string *arr1)
{
    int rotation = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr1[i] == "right")
        {
            rotation += 90;
        }
        else
        {
            rotation -= 90;
        }
    }

    int Rotation = rotation / 360;
    return Rotation;
}

int main()
{
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;
    string *arr1 = new string[size];
    cout << "Enter the elements of the array (\"left\" or \"right\"): " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }

    cout << "Number of full rotations: " << numberRotation(size, arr1) << endl;

    delete[] arr1;

    return 0;
}
