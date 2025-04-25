#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Datas
{
private:
    /* data */
public:
    Datas(/* args */);
    bool chekSqly(){
        fstream ysql(".ysql");
        if (ysql) {
            ysql.close();
            return true;
        }else return false;
      
    }
};

Datas::Datas(/* args */){

}

