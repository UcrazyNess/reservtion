#include "../api/request/network.hpp"
#include <iostream>
using namespace std ;


class Student
{
private:
    void post(string userName , string password );
    string get();


public:

    Student(
        string userName  ,
        string password  ,
        char request   
        );

};
void Student::post(string userName , string password ){
    
}

Student::Student(
            string userName = "" ,
        string password = "" ,
        char request = ' '  )
{
    if (request == 'p')
        post(userName ,  password );
}