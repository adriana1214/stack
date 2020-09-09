//made by me (:))
//number counter
#include <iostream> 
#include <stack> 
using namespace std; 

int main() 
{ 
	
	stack<int> stackjadid; //making a new stack
	int x;
	cin>>x;
	while (x>=0){
	stackjadid.push(x);
	x=x-1;}

	// Printing content of stack 
	while (!stackjadid.empty()) { 
		cout << ' ' << stackjadid.top(); 
		stackjadid.pop(); 
	} 
} 

