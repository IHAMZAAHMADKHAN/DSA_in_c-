#include<iostream>
using namespace std;


int main(){
 
int arr[5] , size , x , i;

cout<<"Enter Size Of Array : "<<endl;
cin>>size;

cout<<"Enter Element Of Array : "<<endl;

for(int i = 0 ; i<size ; i++){
	cin>>arr[i];
}

cout<<"Enter number you want to find  : "<<endl;
cin>>x;

for( i=0 ; i<size ; i++){
	if(arr[i]==x){
		cout<<"Element are found at index "<<i<<endl;
		break;
	}

}
if(i==size){
	cout<<"Element are not found in arra"<<endl;
}
return 0;

}

