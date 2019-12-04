//list.cpp
#include"list.h"
List::List()
{
	count=0;
}
bool List::isempty()
{
	return count==0;
}
bool List::isfull()
{
	return count==LISTMAX;
}
int List::itemcount()
{
	return count;
}
bool List::additem(Item item)
{
	if(count==LISTMAX)
	return false;
	else
	items[count++]=item;
	return true;
}
void List::visit(void(*pf)(Item&))
{
	for( int i=0;i<count;i++)
	(*pf)(items[i]);
}