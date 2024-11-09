#include<iostream>
#include<algorithm> // for min() and max()
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    int smallest = INT_MAX;  // Initialize to the maximum possible value
    int largest = INT_MIN;   // Initialize to the minimum possible value

    for (int i = 0; i < size; i++) {
        smallest = min(arr[i], smallest);  // Update smallest
        largest = max(arr[i], largest);    // Update largest
    }

    cout << "Smallest value = " << smallest << endl;
    cout << "Largest value = " << largest << endl;

    return 0;
}
