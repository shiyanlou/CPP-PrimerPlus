//list.h
#ifndef __LIST_H__
#define __LIST_H__
const int TSIZE=50;
struct film
{
	char title[TSIZE];
	int rating;
};
typedef struct film Item;
const int LISTMAX=10;
class List
{
private:
	Item items[LISTMAX];
	int count;
public:
	List();
	bool isempty();
	bool isfull();
	int itemcount();
	bool additem(Item item);
	void visit(void(*pf)(Item&));
};
#endif