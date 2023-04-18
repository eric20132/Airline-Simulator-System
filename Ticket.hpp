//
//  Ticket.hpp
//  Airline_Registration_System
//
//  Created by YLin on 2023/4/17.
//

#ifndef Ticket_hpp
#define Ticket_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include "Registration.hpp"
#include "Details.hpp"
using namespace std;


class Ticket : public Registration, Details
{
public:
    void Bill();
    void displayBill();
};



#endif /* Ticket_hpp */
