#include "../src/api/request/appliction.hpp"
#include <iostream>

using namespace std;



class Index :
private Appliction
{
    private:
    public:
    Index(){

    };
    void run ();

};

void Index::run(){
    cout << "runing";
}