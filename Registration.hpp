//
//  Registration.hpp
//  Airline_Registration_System
//
//  Created by YLin on 2023/4/17.
//

#ifndef Registration_hpp
#define Registration_hpp

#include <stdio.h>
#include <iostream>
using namespace std;



void mainMenu();

class Registration
{
public:
    static int choice;
    int choiceFlight;
    int back;
    static float charges;
    void flights();
};

#endif /* Registration_hpp */
