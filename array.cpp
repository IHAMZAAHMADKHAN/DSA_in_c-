#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;

    int arr[n];

    cout << "Enter elements of array" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "accessing array" << endl;

    for(int i = 0; i < n; i++) {
        cout << "Element at index " << i << " is " << arr[i] << endl;
    }

    return 0;
}
   

