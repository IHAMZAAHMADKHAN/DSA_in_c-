#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int size;
    int largest , smallest;
    
    cout<<"Enter size of arr"<<endl;
    cin>>size;
    
    for(int i = 0 ; i<size ; i++){
    	cin>>arr[i];
	}
    
    largest=arr[0];
    for(int i=0;i<size;i++){
    	if(arr[i]>largest){
    		largest=arr[i];
		}
		
	}
	 smallest=arr[0];
	for(int i=0;i<size;i++){
    	if(arr[i]<smallest){
    		largest=arr[i];
		}
		
	}
	
	cout<<"largest value are = "<<largest<<endl;
	cout<<"samllest value are = "<<smallest;
    delete[] arr;
  
}
   


