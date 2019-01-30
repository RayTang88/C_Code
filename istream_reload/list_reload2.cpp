/**
 *Filename:
 *Description:数组下标重载及赋值
 *Author:
 *Time:
 *Copyright:
 */
#include <iostream>
using namespace std;

class Person
{
private:
    int age1;
    int age2;
    int age3;
    float weight;
    int Error;
public:
    Person()
    {
        age1 = 15;
        age2 = 18;
        age3 = 25;
        weight = 165.4;
        Error = -1;
    }

    void show()
    {
        cout << age2 <<endl;
    }
    int& operator [] (int n)
    {
        switch(n)
        {
            case 0:
                return age1;
            case 1:
                return age2;
            case 2:
                return age3;
        }

        return Error;

    }
};

int main()
{
    Person p1;
    //p1.show();
    p1[1] = 15;

    cout << p1[1] << endl;
    return 0;
}
