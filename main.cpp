//
//  main.cpp
//  Airline_Registration_System
//
//  Created by YLin on 2023/4/16.
//

#include <iostream>
#include <fstream>
#include <iomanip>

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

class Details
{
    public:
        static string name, gender;
        int age;
        string address;
        static int customerID;
        char arr[100];
    
    void information()
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
    
};

int Details::customerID;
string Details::name;
string Details::gender;

class Registration
{
    public:
    static int choice;
    int choiceFlight;
    int back;
    static float charges;
    
    void flights()
    {
        string flightN[] = {"Dubai", "Canda", "UK", "USA", "Taiwan"};
        
        for(int i=0; i<5; i++)
        {
            cout<<(i+1)<<".flight to "<<flightN[i]<<endl;
            
        }
        
        cout<<"\nWelecome to the Airlines!"<<endl;
        cout<<"Press the number of the country which you want to book the flight:";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
            {
                cout<<"_______________Welecome to Dubai Emirates__________________\n"<<endl;
                cout<<"Following are the flights \n:"<<endl;
                cout<<" 1. DUB - 111"<<endl;
                cout<<"\t 04-01-2023 9:00AM 8hrs Rs .14000"<<endl;
                cout<<" 2. DUB - 222"<<endl;
                cout<<"\t 04-01-2023 11:00AM 8hrs Rs .9000"<<endl;
                cout<<" 3. DUB - 333"<<endl;
                cout<<"\t 04-01-2023 5:00PM 8hrs Rs .10000"<<endl;
                
                cout<<"\n Selet the flight you want to book:";
                cin>>choiceFlight;
                
                if(choiceFlight == 1)
                {
                    charges = 14000;
                    cout<< "\nYou have successfully book the flight DUB - 111"<<endl;
                    cout<<"\nYou can go back to the meau and take the flight"<<endl;
                }
                else if (choiceFlight == 2)
                {
                    charges = 9000;
                    cout<< "\nYou have successfully book the flight DUB - 222"<<endl;
                    cout<<"\nYou can go back to the meau and take the flight"<<endl;
                }
                else if (choiceFlight == 3)
                {
                    charges = 10000;
                    cout<< "\nYou have successfully book the flight DUB - 333"<<endl;
                    cout<<"\nYou can go back to the meau and take the flight"<<endl;
                }
                else
                {
                    cout<<"Invalid input, shifting to the previous meau"<<endl;
                    flights();
                }
                
                cout<<"Press any key to go back to the main meau"<<endl;
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
            case 2:
            {
                cout<<"_______________Welecome to Canadian Airlines__________________\n"<<endl;
                cout<<"Following are the flights \n:"<<endl;
                cout<<" 1. CA - 111"<<endl;
                cout<<"\t 04-01-2023 10:00AM 12hrs Rs .7500"<<endl;
                cout<<" 2. CA - 222"<<endl;
                cout<<"\t 04-01-2023 12:00AM 12hrs Rs .8000"<<endl;
                cout<<" 3. CA - 333"<<endl;
                cout<<"\t 04-01-2023 9:00PM 12hrs Rs .9000"<<endl;
                
                cout<<"\n Selet the flight you want to book:";
                cin>>choiceFlight;
                
                if(choiceFlight == 1)
                {
                    charges = 7500;
                    cout<< "\nYou have successfully book the flight CA - 111"<<endl;
                    cout<<"\nYou can go back to the meau and take the flight"<<endl;
                }
                else if (choiceFlight == 2)
                {
                    charges = 8000;
                    cout<< "\nYou have successfully book the flight CA - 222"<<endl;
                    cout<<"\nYou can go back to the meau and take the flight"<<endl;
                }
                else if (choiceFlight == 3)
                {
                    charges = 9000;
                    cout<< "\nYou have successfully book the flight CA - 333"<<endl;
                    cout<<"\nYou can go back to the meau and take the flight"<<endl;
                }
                else
                {
                    cout<<"Invalid input, shifting to the previous meau"<<endl;
                    flights();
                }
                
                cout<<"Press any key to go back to the main meau"<<endl;
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
            case 3:
            {
                cout<<"_______________Welecome to UK Airways__________________\n"<<endl;
                cout<<"Following are the flights \n:"<<endl;
                cout<<" 1. UK - 111"<<endl;
                cout<<"\t 04-01-2023 10:00AM 15hrs Rs .17500"<<endl;
                cout<<" 2. UK - 222"<<endl;
                cout<<"\t 04-01-2023 12:00AM 15hrs Rs .18000"<<endl;
                cout<<" 3. UK - 333"<<endl;
                cout<<"\t 04-01-2023 9:00PM 15hrs Rs .19000"<<endl;
                
                cout<<"\n Selet the flight you want to book:";
                cin>>choiceFlight;
                
                if(choiceFlight == 1)
                {
                    charges = 17500;
                    cout<< "\nYou have successfully book the flight UK - 111"<<endl;
                    cout<<"\nYou can go back to the meau and take the flight"<<endl;
                }
                else if (choiceFlight == 2)
                {
                    charges = 18000;
                    cout<< "\nYou have successfully book the flight UK - 222"<<endl;
                    cout<<"\nYou can go back to the meau and take the flight"<<endl;
                }
                else if (choiceFlight == 3)
                {
                    charges = 19000;
                    cout<< "\nYou have successfully book the flight UK - 333"<<endl;
                    cout<<"\nYou can go back to the meau and take the flight"<<endl;
                }
                else
                {
                    cout<<"Invalid input, shifting to the previous meau"<<endl;
                    flights();
                }
                
                cout<<"Press any key to go back to the main meau"<<endl;
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
            case 4:
            {
                cout<<"_______________Welecome to United Airlines__________________\n"<<endl;
                cout<<"Following are the flights \n:"<<endl;
                cout<<" 1. UA - 111"<<endl;
                cout<<"\t 04-01-2023 10:00AM 15hrs Rs .500"<<endl;
                cout<<" 2. UA - 222"<<endl;
                cout<<"\t 04-01-2023 12:00AM 15hrs Rs .800"<<endl;
                cout<<" 3. UA - 333"<<endl;
                cout<<"\t 04-01-2023 9:00PM 15hrs Rs .900"<<endl;
                
                cout<<"\n Selet the flight you want to book:";
                cin>>choiceFlight;
                
                if(choiceFlight == 1)
                {
                    charges = 500;
                    cout<< "\nYou have successfully book the flight UA - 111"<<endl;
                    cout<<"\nYou can go back to the meau and take the flight"<<endl;
                }
                else if (choiceFlight == 2)
                {
                    charges = 800;
                    cout<< "\nYou have successfully book the flight UA - 222"<<endl;
                    cout<<"\nYou can go back to the meau and take the flight"<<endl;
                }
                else if (choiceFlight == 3)
                {
                    charges = 900;
                    cout<< "\nYou have successfully book the flight UA - 333"<<endl;
                    cout<<"\nYou can go back to the meau and take the flight"<<endl;
                }
                else
                {
                    cout<<"Invalid input, shifting to the previous meau"<<endl;
                    flights();
                }
                
                cout<<"Press any key to go back to the main meau"<<endl;
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
            case 5:
            {
                cout<<"_______________Welecome to Taiwan Airlines__________________\n"<<endl;
                cout<<"Following are the flights \n:"<<endl;
                cout<<" 1. TW - 111"<<endl;
                cout<<"\t 04-01-2023 9:00AM 8hrs Rs .24000"<<endl;
                cout<<" 2. TW - 222"<<endl;
                cout<<"\t 04-01-2023 11:00AM 8hrs Rs .29000"<<endl;
                cout<<" 3. TW - 333"<<endl;
                cout<<"\t 04-01-2023 5:00PM 8hrs Rs .30000"<<endl;
                
                cout<<"\n Selet the flight you want to book:";
                cin>>choiceFlight;
                
                if(choiceFlight == 1)
                {
                    charges = 24000;
                    cout<< "\nYou have successfully book the flight TW - 111"<<endl;
                    cout<<"\nYou can go back to the meau and take the flight"<<endl;
                }
                else if (choiceFlight == 2)
                {
                    charges = 29000;
                    cout<< "\nYou have successfully book the flight TW - 222"<<endl;
                    cout<<"\nYou can go back to the meau and take the flight"<<endl;
                }
                else if (choiceFlight == 3)
                {
                    charges = 30000;
                    cout<< "\nYou have successfully book the flight TW - 333"<<endl;
                    cout<<"\nYou can go back to the meau and take the flight"<<endl;
                }
                else
                {
                    cout<<"Invalid input, shifting to the previous meau"<<endl;
                    flights();
                }
                
                cout<<"Press any key to go back to the main meau"<<endl;
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
            default:
            {
                cout<<"Invalid input, shifting you to the main meau"<<endl;
                mainMenu();
                break;
            }
        }
    }
    
    
};
    
float Registration::charges;
int Registration::choice;
    
class Ticket : public Registration, Details
{
    public:
    
    void Bill()
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
    void displayBill()
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
        
        
};


void mainMenu()
{
    int lchoice;
//    int schoice;
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
