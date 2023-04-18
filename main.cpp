//
//  main.cpp
//  Airline_Registration_System
//
//  Created by YLin on 2023/4/16.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include "Registration.hpp"
#include "Ticket.hpp"
#include "Details.hpp"
using namespace std;

void mainMenu();

class Management
{
    public:
    Management()
    {
        mainMenu();
    }
    
};
    
void mainMenu()
{
    int lchoice;
    int back;
    
    cout<<"\t                Lin Airline \n "<<endl;
    cout<<"\t_________________Main Meau___________________"<<endl;
    cout<<"\t_____________________________________________"<<endl;
    
    cout<<"\t_____________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t|\t\t\t\t\t\t|"<<endl;
    cout<<"\t|\t Press 1 to add the custumer details  \t|"<<endl;
    cout<<"\t|\t Press 2 for Flight Registration      \t|"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges       \t|"<<endl;
    cout<<"\t|\t Press 4 for Exit                     \t|"<<endl;
    cout<<"\t|\t\t\t\t\t|\t\t\t\t\t\t|"<<endl;
    cout<<"\t_____________________________________________"<<endl;
    
    cout<<"Enter the choice: ";
    cin>>lchoice;
    
    Details d;
    Registration r;
    Ticket t;
    
    switch (lchoice)
    {
        case 1:
        {
            cout<<"_____________Customers____________\n";
            d.information();
            cout<<"Press any key to go back to the Main Meau";
            cin>>back;
            
            if(back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }
        case 2:
        {
            cout<<"____________Book a Flight____________\n"<<endl;
            r.flights();
            break;
        }
        case 3:
        {
            cout<<"_________Get your ticket_________\n"<<endl;
            t.Bill();
            cout<<"Your ticket is printed\n"<<endl;
            cout<<"Press 1 to display your ticket";
            
            cin>>back;
            
            if(back == 1)
            {
                t.displayBill();
                cout<<"Press any key to go back to main meau:";
                cin>>back;
                if(back == 1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                    
                }
            }
            else
            {
                mainMenu();
            }
            break;
        }
        case 4:
        {
            cout<<"\n\n\t______Thank you______"<<endl;
            break;
        }
            
        default:
        {
            cout<<"Invalid input, Please try again!\n"<<endl;
            mainMenu();
            break;
        }
    }
}


int main()
{
    Management Mobj;
    return 0;
};
