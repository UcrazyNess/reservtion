#include "../../models/student.hpp"
#include <iostream>

using namespace std;


class Logging
{
private:
    void login();
    void sigin();
    void setIp();
    const Student& setUser (string userName, string password ,char request );

public:
    Logging(/* args */);

};

Logging::Logging(/* args */)
{
    cout
        << "welcome to the reservtion :)"
        <<"\n I hope you aint be too hungry $)"
        << "\n pout s if you have an acount ore l foe create one [s/l] ? ";
    while (1)
    {   char  a ; 
        cin >> a ;
        if (a == 'l' )
            login();
        else if (a == 's') 
            sigin();
        else 
            cout 
                << "@@@@ wrong input @@@@ "  
                << "\n may be you're too hungry to put a lettere right"
                <<"\n please  pout s if you have an acount ore l foe create one [s/l] ? ";
    }

    
    
}

void Logging::sigin(){
    string userName ,password;
    while (1)
    {   
        char a ;
        cout<<"pot youre name :";        
        cin>> userName ;
        cout<<"pot youre password :";
        cin>> password ;        
        cout << "R U share ? [y/n] :";
        cin >> a;
        if (a== 'y' || !a )
            break;
    };
    const Student user =  setUser(userName , password  , 'p' );

}


const Student& Logging::setUser (
    string userName, 
    string password,
    char request
)
{
    Student student(userName , password , request);
}
