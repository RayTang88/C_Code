//动态联编和静态联编
#include <iostream>
using namespace std;

class Father
{
public:
    int a = 12;
    virtual void show()
    {
        cout << "father show" <<endl;
    }
};

class Son : public Father
{
public:
    void show()
    {
        cout << "son show" <<endl;
    }
};

class Daughter : public Father
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
//    Father * f;
//    int choice;
//    cout << "Please input your choice:" << endl;
//    cin >> choice;
//    switch (choice)
//    {
//    case 1:
//        f = new Son;
//        break;
//    case 2:
//        f = new Daughter;
//        break;
//    default:
//        f = new Father;
//        break;
//    }
//    f->show();
//    delete f;
//    return 0;
//}
