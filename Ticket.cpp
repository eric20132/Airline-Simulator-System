//
//  Ticket.cpp
//  Airline_Registration_System
//
//  Created by YLin on 2023/4/17.
//

#include "Ticket.hpp"

int Details::customerID;
string Details::name;
string Details::gender;

float Registration::charges;
int Registration::choice;

void Ticket::Bill()
{
    string destination = "";
    ofstream outf("records.txt");
    {
        outf<<"______Lin Airlines______"<<endl;
        outf<<"_________Ticket_________"<<endl;
        outf<<"________________________"<<endl;
        
        outf<<"Customer ID:"<<Details::customerID<<endl;
        outf<<"Customer Name:"<<Details::name<<endl;
        outf<<"Customer Gender:"<<Details::gender<<endl;
        outf<<"\t Description"<<endl;
        
        if(Registration::choice == 1)
        {
            destination = "Dubai";
        }
        else if(Registration::choice == 2)
        {
            destination = "Canada";
        }
        else if(Registration::choice == 3)
        {
            destination = "UK";
        }
        else if(Registration::choice == 4)
        {
            destination = "USA";
        }
        else if(Registration::choice == 5)
        {
            destination = "Taiwan";
        }
        
        outf<<"Destination\t\t"<<destination<<endl;
        outf<<"Flight Cost:\t\t"<<Registration::charges<<endl;
    
    }
    outf.close();
}
void Ticket::displayBill()
{
    ifstream ifs("records.txt");
    {
        if(!ifs)
        {
            cout<<"File error!"<<endl;
        }
        while(!ifs.eof())
        {
            ifs.getline(arr, 100);
            cout<<arr<<endl;
        }
    }
    ifs.close();
}
        
        
