#include<iostream>
using namespace std;


 int arr[10] , size ,  x ;
//functiom for binary search in array
 
 int bisearch(int low , int high){
 	
 	while(low<=high){
 		int mid=(low+high)/2;
 		if(arr[mid]==x){
 			return mid;
		 }
		 else if(arr[mid]>x){
		 	high=mid-1;
		 }
		 else{
		 	low=mid+1;
		 }
	 }
	 return -1;
 }

int main(){

cout<<"Enter size of array : "<<endl;
cin>>size;

cout<<"Enter elemnt : "<<endl;
for(int i=0;i<size; i++){
	cin>>arr[i];
}
cout<<"enter a number want to search"<<endl;
cin>>x;
int result=bisearch(0,size-1);

if(result==-1){
	cout<<"Result not found :"<<endl;
}
else{
	cout<<"Result at found index :"<<result;
}

return 0;

}

