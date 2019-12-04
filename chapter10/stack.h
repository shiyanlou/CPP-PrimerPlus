//stack.h
#ifndef __STACK_H__
#define __STACK_H__
struct customer{
	char fullname[35];
	double payment;
};
typedef customer Item;
class Stack
{
	private:
	enum{MAX=10};
	Itemitems[MAX];
	int top;
	public:
	Stack();
	bool isempty()const;
	bool isfull()const;
	//push()returnsfalseifstackalreadyisfull,trueotherwise
	bool push(constItem&item);//additemtostack
	//pop()returnsfalseifstackalreadyisempty,trueotherwise
	bool pop(Item&item);//poptopintoitem
};
#endif