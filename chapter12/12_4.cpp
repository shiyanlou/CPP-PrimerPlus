#include<iostream>
using namespace std;
typedef unsigned long Item ;
class Stack {
private:
	enum {MAX=10};
	Item *items;
	int size;
	int top;
public:
	Stack (int n=MAX)
	{
		items=new Item [MAX];
		top=0;
		size=0;
	}
	Stack (const Stack &st)
	{
		items=new Item [st.size];
		top=0;
		size=0;
		for(int i=0;i<st.size;i++)
		{
			items[i]=st.items[i];
			size++;
			top++;
		}
	}
	~Stack ()
	{
		delete[]items;
	}
	bool isEmpty()
	{
		return top==0;
	}
	bool isFull()
	{
		return top==MAX;
	}
	bool push(const Item &it)
	{
		if(isFull())
		cout<<"error!Stack is full!"<<endl;
		else 
		{
			items[top++]=it;
			size++;
			return true;
		}
		return false;
	}
	bool pop(Item &item)
	{
		if(isEmpty())
		cout<<"error!Stack is empty!"<<endl;
		else 
		{
			item=items[top--];
			size--;
			return true;
		}
		return false;
	}
	Stack &operator =(Stack &st)
	{
		delete[]items;
		items=new Item [st.size];
		top=0;
		size=0;
		for(int i=0;i<st.size;i++)
		{
			items[i]=st.items[i];
			size++;
			top++;
		}
		return (*this);
	}
	friend ostream&operator <<(ostream&os,const Stack &st)
	{
		os<<"This Stack is:"<<endl;
		int len=st.top-1;
		while(len!=-1)
		{
			cout<<st.items[len]<<endl;
			len--;
		}
		return os;
	}
};
int main()
{
	Stack s;
	Item it[20]={0};
	for(int i=0;i<11;i++)
	{
		it[i]=i+1;
		s.push(it[i]);
	}
	cout<<s;
	Stack s1(s);
	cout<<"s1="<<s1;
	Stack s2=s;
	cout<<s;
}