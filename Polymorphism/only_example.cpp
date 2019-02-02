//单例模式
//#include <iostream>
//using namespace std;
//class Father
//{
//private:
//    Father()
//    {
//
//    }
//public:
//    static int flag;
//    static Father* Creatfather()
//    {
//        if(flag == 1)
//        {
//            flag = 0;
//            return new Father;
//        }
//        else
//        {
//            return nullptr;
//        }
//    }
//    ~Father()
//    {
//        flag = 1;
//    }
//
//
//};
//int Father::flag = 1;

//int main()
//{
//    Father* f1 = Father::Creatfather();
//    delete f1;
//    Father* f2 = Father::Creatfather();
//    delete f2;
//    return 0;
//}
