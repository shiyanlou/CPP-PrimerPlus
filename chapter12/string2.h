#ifndef __STRING2_H__
#define __STRING2_H__
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
class String 
{
	char *mp_text;
	unsigned m_text_length;
	void assignMember(const char *text)
	{
		m_text_length=strlen(text);
		mp_text=new char [m_text_length+1];
		strcpy(mp_text,text);
	}
	public:
	static const unsigned k_buffer_max_size=256;
	const char *toCstr()const 
	{
		return (mp_text);
	}
	String (const char *text="")
	{
		assignMember(text);
	}
	String (const String &str)
	{
		assignMember(str.toCstr());
	}
	~String ()
	{
		delete[]mp_text;
	}
	unsigned getLength()const 
	{
		return (m_text_length);
	}
	void stringup()
	{
		for(unsigned i=0;i<m_text_length;++i)
		mp_text[i]=(char )toupper(mp_text[i]);
	}
	void stringlow()
	{
		for(unsigned i=0;i<m_text_length;++i)
		mp_text[i]=(char )tolower((int )mp_text[i]);
	}
	unsigned has(char ch)const 
	{
		unsigned 
		cnt=0;
		for(unsigned i=0;i<m_text_length;++i)
		if(ch==mp_text[i])
		++cnt;
		return (cnt);
	}
	String &operator =(const String &str)
	{
		if(&str==this)
		    return (*this);
		delete[]mp_text;
		assignMember(str.toCstr());
		return (*this);
	}
	String &operator +=(const String &str)
	{
		return (*this+=str);
	}
	char &operator [](unsigned idx)
	{
		return (mp_text[idx]);
	}
	const char &operator [](unsigned idx)const 
	{
		return (mp_text[idx]);
	}
	friend ostream&operator <<(ostream&os,const String &str)
	{
		os<<str.toCstr();
		return (os);
	}
	friend istream&operator >>(istream&is,String &str)
	{
		char txt[k_buffer_max_size];
        for (int i = 0;i<k_buffer_max_size;++i)
        {
            is.get(txt[i]);
            if (txt[i] == '\n')
            {
                txt[i] = '\0';
                break;
            }
                

        }
        
        str=txt;
		return (is);
	}
	friend bool operator <(const String &lvalue,const String &rvalue)
	{
		return (strcmp(lvalue.toCstr(),rvalue.toCstr())<0);
	}
	friend bool operator >(const String &lvalue,const String &rvalue)
	{
		return (rvalue<lvalue);
	}
	friend bool operator ==(const String &lvalue,const String &rvalue)
	{
		return (!(lvalue<rvalue)&&!(lvalue>rvalue));
	}
	friend bool operator <=(const String &lvalue,const String &rvalue)
	{
		return (!(lvalue>rvalue));
	}
	friend bool operator >=(const String &lvalue,const String &rvalue)
	{
		return (!(lvalue<rvalue));
	}
	friend String operator +(const String &lvalue,const String &rvalue)
	{
		char *p_txt=new char [lvalue.getLength()+rvalue.getLength()+1];
		strcpy(p_txt,lvalue.toCstr());
		strcat(p_txt,rvalue.toCstr());
		String tmp(p_txt);
		delete[]p_txt;
		return (tmp);
	}
};

#endif
