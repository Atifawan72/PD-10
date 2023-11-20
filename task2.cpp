#include<iostream>
#include<string>
using namespace std;

int countLetterOccurrences(const string arr[], int size, char letter) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        string word = arr[i];
        for (char ch : word) {
            if (ch == letter) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int arraySize ;
    cout<<"Enter how many words you want to enter: ";
    cin>>arraySize;
    string userArray[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> userArray[i];
    }

    char searchLetter;
    cout << "Enter the letter you want to count: ";
    cin >> searchLetter;

    int letterCount = countLetterOccurrences(userArray, arraySize, searchLetter);

    cout<< searchLetter << " shows up" << letterCount << " times in the data." ;
    
}
