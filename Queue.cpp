#include<iostream>
using namespace std;

int queue [5] , y, x ,front=-1, rear=-1, size=5;
//fuctions for insertions
void insert(){
	
	if(rear==size-1){
		cout<<"Queue is Full"<<endl;
	}
	else
	{
		if(front==-1){
			front= 0;
		}
		cout<<"Enter  the elemrnt in queue : ";
		cin>>x;
		rear++;
		queue [rear]=x;
	}
}

//functions to delet elemet from queue
void delet(){
	if(front==-1){
		cout<<"Queue id empty"<<endl;
	}
	else
	{
		cout<<"Element delete form the queue is : "<<queue[front] <<endl;
		if(front==rear){
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
	}
}

// function for peek access top without removing it

int peek(){
	if(front==-1){
		return 0;
	}
	else
	{
		return queue[front];
	}
}

// function to display all elemnet in queue

void display(){
	if(front==-1){
		cout<<"Queue id empty"<<endl;
	}
	else
	{
		for(int i=front; i<=rear ; i++){
			cout<<queue[i]<<endl;
		}
	}
}
int main(){

insert();
insert();
insert();
insert();
insert();
//delet();
//delet();
//delet();
//delet();

display();
y=peek();
cout<<"Front element of queue is : "<<y<<endl;
return 0;

}

