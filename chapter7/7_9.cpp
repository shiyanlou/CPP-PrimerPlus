#include<iostream>
using namespace std;
const int SLEN=30;
struct student{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
// getinfo() 有两个参数：
// 一个是指向 student 结构体数组的第一个元素的指针，
// 另一个是表示数组大小的整数。
// 该函数可以获取学生的信息并且将信息存储在数组中。
// 当数组被填满或者在输入学生姓名是输入了一行空行时，该函数将会被停止，
// 并返回实际存储的学生数量。
int getinfo(studentpa[],intn);
// display1() 输入学生结构体，显示结构体的内容。
void display1(studentst);
// display2() 输入学生结构体的地址，显示该结构体的内容。
void display2(conststudent*ps);
// display3() 输入学生结构体数组的第一个元素的地址和数组大小，显示结构体的内容。
void display3(conststudentpa[],intn);
int main()
{
	cout<<"Enterclasssize:";
	int class_size;
	cin>>class_size;
	while(cin.get()!='\n')
	continue;
	student*ptr_stu=newstudent[class_size];
	int entered=getinfo(ptr_stu,class_size);
	for(inti=0;i<entered;i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu,entered);
	delete[]ptr_stu;
	cout<<"Done\n";
	return 0;
}

int getinfo(studentpa[],intn)
{
	int num_array_elem=n;
	char tmp[SLEN];
	for(inti=0;i<n;++i)
	{
		cout<<"Entername:";
		cin.getline(tmp,SLEN);
		boolblank_line=true;
		for(unsignedj=0;j<strlen(tmp);++j)
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
		cout<<"Enterhobby:";
		cin.getline(pa[i].hobby,SLEN);
		cout<<"Enterooplevel:";
		cin>>pa[i].ooplevel;
		cin.get();
	}
	cout<<endl;
	return num_array_elem;
}

void display1(studentst)
{
	cout<<st.fullname<<'\t'<<st.hobby<<'\t'<<st.ooplevel<<
	endl;
}

void display2(conststudent*ps)
{
	cout<<ps->fullname<<'\t'<<ps->hobby<<'\t'<<ps->ooplevel
	<<endl;
}

void display3(conststudentpa[],intn)
{
	for(inti=0;i<n;++i)
	cout<<pa[i].fullname<<'\t'<<pa[i].hobby<<'\t'<<
	pa[i].ooplevel<<endl;
}