#include <iostream>
using namespace std;

struct Link
{
	int data;
	Link *next;
};


class Stack
{
	private:
		Link *top;
		
	public:
		Stack()
		{
			top = NULL;
		}
		
		void push(int p)
		{
			Link *ptr, *temp;
			if(top == NULL)
			{
				top = new Link;
				top->data = p;
				top->next = NULL;
			}
			else
			{
				ptr = top;
				while(ptr->next != NULL)
					ptr = ptr->next;
				temp = new Link;
				temp->data = p;
				temp->next = NULL;
				ptr->next = temp;
			}
			cout<<p<<" is pushed in the stack."<<endl;
		}
		
		int pop()
		{
			Link *temp, *pre;
			int n;
			temp = top;
			if(top == NULL)
			{
				cout<<"Stack is Empty.\tStack Underflow"<<endl;
				return 0;
			}
			pre = temp;
			while(temp->next != NULL)
			{
				pre = temp;
				temp = temp->next;
			}
			pre->next = NULL;
			n = temp->data;
			delete temp;
			cout<<n<<" is poped from the stack."<<endl;
			return n;
		}
		
		void display();
};

void Stack::display()
{
	Link *temp;
	temp = top;
	cout<<"\nStack is:  "<<endl;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}


int main()
{
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	
	s.display();
	
	cout<<endl;
	s.pop();
	s.pop();
	
	s.display();
	
	cout<<endl;
	s.push(50);
	
	s.display();
	return 0;
}
