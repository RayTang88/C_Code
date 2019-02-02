/**
 *Filename:
 *Description:
 *Author:
 *Time:
 *Copyright:
 */
#include <iostream>
using namespace std;

class People
{
private:

    void Priva()
    {
        cout <<"father private"<<endl;
    }
protected:
    void Protec()
    {
        cout <<"father protected"<<endl;
    }
public:
    People()
    {
        cout << "father people" << endl;
    }
    void Publi()
    {
        cout <<"father public"<<endl;
    }
};


class xiaoming1 : public People//继承修饰符为public
{
public:
    xiaoming1()
    {
        cout << "semfather xiaoming" << endl;
    }
};

class xiaohua1 : public xiaoming1
{
public:
    xiaohua1()
    {
        cout << "son xiaohua" << endl;
    }
    void xh()
    {
        Publi();
    }
};


int main()
{

    xiaoming1 xm1;
    xiaohua1 xh1;
//    xm1.Publi();
//    xiaohua1 xh1;
//    xh1.xh();


    return 0;
}
