// abc.h
#ifndef __ABC_H__
#define __ABC_H__
#include <iostream>
using namespace std;

class ABC
{
private:
    string label; 
    int rating;
public: 
    ABC(const string l="null",int r=0) { label=l; rating=r;}
    virtual void View();
    friend std::ostream & operator<<(std::ostream & os, const ABC & abc);
};
//  Base Class Using DMA
class baseDMA: public ABC
{
private:
    char * label;
    int rating;
    
public:
    baseDMA(const char * l = "null", int r = 0);
    baseDMA(const baseDMA & rs);
    virtual ~baseDMA();
    baseDMA & operator=(const baseDMA & rs);
    void View();
    friend std::ostream & operator<<(std::ostream & os, 
                                     const baseDMA & rs);
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA :public ABC
{
private:
    enum { COL_LEN = 40};
    char color[COL_LEN];
public:
    lacksDMA(const char * c = "blank", const char * l = "null",
              int r = 0);
    lacksDMA(const char * c, const ABC & rs);
    void View();
    friend std::ostream & operator<<(std::ostream & os, 
                                     const lacksDMA & rs);
};

// derived class with DMA
class hasDMA :public ABC
{
private:
    char * style;
public:
    hasDMA(const char * s = "none", const char * l = "null",
              int r = 0);
    hasDMA(const char * s, const ABC & rs);
    hasDMA(const hasDMA & hs);
    ~hasDMA();
    hasDMA & operator=(const hasDMA & rs); 
    void View(); 
    friend std::ostream & operator<<(std::ostream & os, 
                                     const hasDMA & rs);
};

#endif
