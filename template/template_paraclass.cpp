//模板的参数是类的情况
#include <iostream>
using namespace std;

template<typename T, typename Y>
class Father
{
public:
    T age;
    Y name;
    Father(T t1, Y y1)
    {
        age = t1;
        name = y1;
    }
    virtual void show()
    {

    }
};


template<typename W, typename Z>
class Son
{
public:
    Son(Father<int, string>& a)
    {

    }
    virtual void show()
    {

    }
};



int main()
{
    Father<int, string> f1(30,"james");
    Son<int, Father<int, string>> s1(f1);
    return 0;
}
