#include <iostream>

using namespace std;

bool isRepeatingCycle(int arr[], int n, int cycleLength) {
    if (cycleLength > n) {
        return true;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j += cycleLength) {
            if (arr[i] != arr[j]) {
                return false; 
            }
        }
    }

    return true;
}

int main() {
    int n, cycleLength;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the length of the cycle: ";
    cin >> cycleLength;

    cout <<"Output: " <<isRepeatingCycle(arr, n, cycleLength);
   

    return 0;
}
