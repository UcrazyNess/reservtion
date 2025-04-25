
#include "inthernet.hpp"
#include "../../datas/datas.hpp"

using namespace std;


class Transport
{
private:
    Datas datas;
    void setSission ();
public:
    Transport();

};

Transport::Transport()
{   
    if ( !datas.chekSqly()) {
        throw runtime_error("db dosen't exists ");
    }
    setSission();
}

void Transport::setSission (){
    time_t now = time(nullptr);
    Inthernet inthernet(*localtime(&now));
}


