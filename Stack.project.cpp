#include <iostream>
using namespace std;

class Stack{
	
	public:
		int size = 0;
		int top  = -1;
		char *items;
		
		Stack(int stackSize){ //constructor
		    size = stackSize;
		    items = new char[size];
        };
        
        void push(char item)
		{
        	if (top==size-1) //jika stack penuh
			{ 
        	    cout << "Error: Stack overflow, stack is full" << endl;
			}
			else 
			{
				top++; //top = top+1;
				items[top] = item;
			}
		}
		char pop()
		{
			char item;
			
			if (top==-1) //jika stack kosong
			{ 
			    cout << "Error: Stack is empty" << endl;
			} else {
				item = items[top];
				//items[top] = '';
				top--;
			}
			
			return item;
		}

};