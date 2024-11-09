#include <iostream>
using namespace std;

int main() {
    int arr[5]= {1,2,3,4,5};
    int arr1p[3];
    for(int i=0 ; i<3; i++){
        cin>>arr1p[i];
    }
    for(int i=0; i<5; i++){
        cout<<"index no =  "<<i<<"  value  "<<arr[i]<<endl;
    }

    return 0;
}
   

