#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter the number of Saturdays: ";
    cin >> size;

    int milesRun[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter miles run for Saturday " << i + 1 << ": ";
        cin >> milesRun[i];
    }

    int progressDays = 0;
    for (int i = 1; i < size; i++)
    {
        if (milesRun[i] > milesRun[i - 1])
        {
            progressDays++;
        }
    }

    cout << "Total progress days: " << progressDays << endl;

    
}
