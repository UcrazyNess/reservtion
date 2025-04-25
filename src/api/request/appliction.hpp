#include "transport.hpp"


using namespace std;

class Appliction
{
private:
    Transport transport ;
public:
    Appliction(/* args */);
    virtual void run(){
        cout<<"runnig";
    };
};

Appliction::Appliction(/* args */)
{
}
