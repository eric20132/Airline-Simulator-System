//
//  Registraion.cpp
//  Airline_Registration_System
//
//  Created by YLin on 2023/4/17.
//

#include "Registration.hpp"


void Registration::flights()
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

