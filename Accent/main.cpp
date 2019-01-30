//继承修饰符(继承限定词)的使用
//#include <iostream>
//using namespace std;
//
//class People
//{
//private:
//    void Priva()
//    {
//        cout <<"father private"<<endl;
//    }
//protected:
//    void Protec()
//    {
//        cout <<"father protected"<<endl;
//    }
//public:
//    void Publi()
//    {
//        cout <<"father public"<<endl;
//    }
//};
//
//class Child : public People
//{
//public:
//    void Study()
//    {
//        cout <<"Study"<<endl;
//    }
//};
//class Adult : public People
//{
//public:
//    void Work()
//    {
//        cout <<"Work"<<endl;
//    }
//};
//class Oldpeople : public People
//{
//public:
//    void Strenth()
//    {
//        cout <<"Strenth"<<endl;
//    }
//};
//class xiaoming1 : public People//继承修饰符为public
//{
//    friend int main();
//};
//class xiaoming2 : protected People//继承修饰符为protected
//{
//    //friend int main();
//} ;
//class xiaohua1 : public xiaoming2
//{
//public:
//    void xh()
//    {
//        Publi();
//    }
//};
//
//
//int main()
//{
//    People p1;
//    p1.Publi();
//    xiaoming1 xm1;
//    xm1.Publi();
//    xiaohua1 xh1;
//    xh1.xh();
//    //xiaoming2 xm2;
//    //xm2.Publi();
//
//    return 0;
//}
