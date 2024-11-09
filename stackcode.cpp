#include<iostream>
using namespace std;

int stack[5] , size=5, top=-1;

void push(int x){
	// fuction for push or insersion 
	if(top==size-1){
		cout<<"Stack Is Full"<<endl;
	}
	else
	{
		top++;
		stack[top]=x;
	}
}

// function for pop or remove element 

void pop(){
	if(top==-1){
		cout<<"Stack is empty"<<endl;
	}
	else 
	{
		cout<<"the popped element is : "<<stack[top]<<endl;
		top--;
	}
}

// display function of stack 

void display(){
	if (top>=0){
		cout<<"stack elements are : "<<endl;
		
		for(int i=top ; i>=0 ; i--){
			
			cout<<stack[i]<<endl;
		}
	}
	else {
			cout<<"stack is empty";
		}
		
	}
	
	
// write peek fuchtion to access top value of the stack 

int peek(){
	return stack[top];
}

int main(){

push(1);

push(2);
push(3);
push(4);
push(5);

display();
pop();
pop();
cout<<peek()<<endl;
pop();
pop();
pop();
pop();
return 0;

}

