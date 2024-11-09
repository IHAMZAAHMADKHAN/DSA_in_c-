#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of arr" << endl;
    cin >> n;

    // Now declare the array with the correct size
    int arr[n];

    // Input the elements of the array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Find the largest element in the array
    int largest = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    cout << "Largest element of arr is " << largest << endl;
    return 0;
}
