#include <iostream>

using namespace std;

int main()
{
    //1.建立两个列表,行和列
    string name[]{"Lily","Lucy","Andy"};
    string course[]{"Chinese","Math","English"};
    const int ROW = 3;
    const int COL = 3;
    double score[ROW][ROW];
    //2.将数字录入数组
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            cout <<"Plese enter the scores"<<endl;
            cout <<name[i]<<"'s"<<course[j]<<endl;
            cin >>score[i][j];
        }

    }

    //3.循环打印数组
    cout <<"\t";
    for(int i = 0; i < ROW; i++){
            cout <<course[i]<<"\t";
    }
    cout <<endl;
    for(int i = 0; i < ROW; i++){
            cout <<name[i]<<"\t";
            for(int j = 0; j < COL; j++){
                cout <<score[i][j]<<"\t";
            }
    cout <<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
