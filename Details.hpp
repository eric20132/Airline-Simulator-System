//
//  Details.hpp
//  Airline_Registration_System
//
//  Created by YLin on 2023/4/17.
//

#ifndef Details_hpp
#define Details_hpp

#include <stdio.h>
#include <iostream>
//#include <iomanip>
using namespace std;

class Details
{
public:
    static string name, gender;
    int age;
    string address;
    static int customerID;
    char arr[100];
    void information();
};

#endif /* Details_hpp */
