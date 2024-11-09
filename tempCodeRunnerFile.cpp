#include<iostream>
using namespace std;
int factorila(int n){
    int fact=1;
   for(int i=1; i<=n;i++){
     fact *=i;
   }
   return fact;
}
int main(){

    cout<<"hello"<<endl;
    cout<<factorila(4);

    return 0;
}