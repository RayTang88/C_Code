//多态和虚函数
#include <iostream>

using namespace std;
class Father
{
private:
    int age;
public:
    virtual void show(float b)
    {
        cout << "father" << endl;
    }
};

class Son : public Father
{
private:
    int age;
public:
    void show(float a)
    {
        cout << "son" << endl;
    }
};

class Daughter : public Father
{
private:
    int age;
public:
    void show(float a)
    {
        cout << "daughter" << endl;
    }
};

//int main()
//{
//    Father * f1 = new Son;
//    Father * f2 = new Daughter;
//    f1->show(12.5f);
//    f2->show(13.5f);
//    delete f1;
//    delete f2;
//    return 0;
//}
