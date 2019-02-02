//虚继承ĵ
#include <iostream>
using namespace std;

class Father
{
public:
    int a = 12;

};

class Son : virtual public Father
{
public:
    void show()
    {
        cout << "son show" <<endl;
    }
};

class Daughter : virtual public Father
{
public:
    void show()
    {
        cout << "Daughter show" <<endl;
    }
};

class Sonson : public Son,Daughter
{
public:
    void show()
    {
        cout << "sonson show" <<endl;
    }
};
//int main()
//{
//    Sonson s;
//    cout << s.a;
//
//    return 0;
//}
