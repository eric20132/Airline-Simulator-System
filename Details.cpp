//
//  Details.cpp
//  Airline_Registration_System
//
//  Created by YLin on 2023/4/17.
//

#include "Details.hpp"

void Details::information()
{
    cout<<"\nEnter the customer ID:";
    cin>>customerID;
    cout<<"\nEnter the name:";
    cin.ignore(); //This statement is for skipping the redundant enter(\n)
    getline(cin, name);
    cout<<"\nEnter the age:";
    cin>>age;
    cout<<"\nEnter the Address:";
    cin.ignore();
    getline(cin, address);
    cout<<"\nEnter the Gender:";
    cin>>gender;
    cout<<"\n Your details are saved with us!\n"<<endl;
    
    
}
