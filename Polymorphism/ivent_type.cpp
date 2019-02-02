//强制类型转换
#include <iostream>
using namespace std;

class Father
{
public:
    int age;
    Father()
    {
        age = 50;
    }
    virtual void show()
    {

    }
};

class Son : public Father
{
public:
    int age;
    void show()
    {

    }
};

class Daughter
{
public:
    int age;
};
int main()
{
    Father* ptr_f;
    Son* ptr_s;
    //Daughter* ptr_d;
    //ptr_f = (Father*)ptr_s;老式转换
    //ptr_f = static_cast<Father*>(ptr_s);新式转换
    const Father* ptr_f1;
    Father* ptr_f2 = const_cast<Father*>(ptr_f1);
    Father* ptr_f3 = dynamic_cast<Father*>(ptr_s);
    Son* ptr_s1 = dynamic_cast<Son*>(ptr_f);
    return 0;
}
