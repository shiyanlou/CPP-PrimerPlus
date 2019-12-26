#include<iostream>
#include<cstring>
using namespace std;
const  int SLEN=30;
struct  student{
	char  fullname[SLEN];
	char  hobby[SLEN];
	int  ooplevel;
};
// getinfo() 有两个参数：
// 一个是指向 student 结构体数组的第一个元素的指针，
// 另一个是表示数组大小的整数。
// 该函数可以获取学生的信息并且将信息存储在数组中。
// 当数组被填满或者在输入学生姓名是输入了一行空行时，该函数将会被停止，
// 并返回实际存储的学生数量。
int  getinfo(student pa[],int n);
// display1() 输入学生结构体，显示结构体的内容。
void  display1(student st);
// display2() 输入学生结构体的地址，显示该结构体的内容。
void  display2(const student*ps);
// display3() 输入学生结构体数组的第一个元素的地址和数组大小，显示结构体的内容。
void  display3(const student pa[],int n);
int  main()
{
	cout<<"Enter class size: ";
	int  class_size;
	cin>>class_size;
	while(cin.get()!='\n')
	    continue;
	student*ptr_stu=new student[class_size];
	int  entered=getinfo(ptr_stu,class_size);
	for(int i=0;i<entered;i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu,entered);
	delete[]ptr_stu;
	cout<<"Done\n";
	return  0;
}

int  getinfo(student pa[],int n)
{
	int  num_array_elem=n;
	char  tmp[SLEN];
	for(int i=0;i<n;++i)
	{
		cout<<"Enter name: ";
		cin.getline(tmp,SLEN);
		bool blank_line=true;
		for(unsigned j=0;j<strlen(tmp);++j) // 因为用户可能先输入空格，再输入有效字符，因此需要逐个判断
		{
			if(!isspace(tmp[j]))
			{
				blank_line=false;
				break;
			}
		}
		if(blank_line)
		{
			num_array_elem=i;
			break;
		}
		strcpy(pa[i].fullname,tmp);
		cout<<"Enter hobby: ";
		cin.getline(pa[i].hobby,SLEN);
		cout<<"Enter ooplevel: ";
		cin>>pa[i].ooplevel;
		cin.get();
	}
	cout<<endl;
	return  num_array_elem;
}

void  display1(student st)
{
	cout<<st.fullname<<'\t'<<st.hobby<<'\t'<<st.ooplevel<<
	endl;
}

void  display2(const student*ps)
{
	cout<<ps->fullname<<'\t'<<ps->hobby<<'\t'<<ps->ooplevel
	<<endl;
}

void  display3(const student pa[],int n)
{
	for(int i=0;i<n;++i)
	cout<<pa[i].fullname<<'\t'<<pa[i].hobby<<'\t'<<
	pa[i].ooplevel<<endl;
}