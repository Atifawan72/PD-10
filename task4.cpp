#include<iostream>
using namespace std;
int volume(int arr1[] , int number );
int main()
{
    int number;
    cout<<"Enter the number of boxes: ";
    cin>>number;
    int size;
    size = number * 3;
    int arr1[size];
    cout<<"Enter the dimensions of the boxes (length, width, height): "<<endl;
    for(int j = 0 ; j < size; j++ )
    {
        cin>>arr1[j];
    }
    cout<<"Total volume of all boxes: "<<volume( arr1 ,  size);
    
}
int volume(int arr1[] , int number)
{
    int sum  = 0;
    for(int i = 0 ; i < number ;i= i+3)
    {
        int mul = arr1[i] * arr1[i+1]*arr1[i+2];
        sum = sum + mul;
        
    }
    return sum; 
}