#include <iostream>
using namespace std;
class GrandFather
{
private:
    int age;
public:
    virtual void show(float b)
    {
        cout << "grandfather" << endl;
    }
};

class Father : public GrandFather
{
private:
    int age;
public:
    void show(float a)
    {
        cout << "father" << endl;
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
//    GrandFather* gf1 = new Father;
//    Father* f1 = new Daughter;
//    gf1->show(12.5f);
//    f1->show(21.5);
//    delete gf1;
//    delete f1;
//    return 0;
//}
