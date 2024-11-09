#include<iostream>
using namespace std;
int main(){

int a[5]={5,10,15,20};

int n=4, k;
cout<<"Enter location for insertion= ";
cin>>k;

for(int i=n-1;i>=k;i--){
    a[i+1]=a[i];
}

cout<<"Enter new number= ";
cin>>a[k];
n++;
    
for(int i=0;i<5;i++){
    cout<<a[i]<<endl;
}
return 0;
}