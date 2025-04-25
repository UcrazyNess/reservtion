#include <iostream>

#include "view/index.hpp"


using namespace std;

int main (){
    unsigned int i = 0 ;
    Student *students  = new Student[i + 2 ];
    auto x =  [](int i ,int j){
        return (i + j);
    };
    cout << x(1,2);
    delete[] students ;


}