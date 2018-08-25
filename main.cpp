
//
//  main.cpp
//  ParkingGarage
//
//  Created by Steven Ouandji on 26/07/18.
//  Copyright © 2018 Steven Ouandji. All rights reserved.
//



using namespace std;


#include <iostream>
#include "ParkingGarage.h"
#include <string>







int main()
{
    
    ParkingGarage parkingGarage;
    
    
    //TESTING
    //parkingGarage.testingCapacityBound();
    //parkingGarage.testingParkingCapabilities();
    //parkingGarage.testingEditCustomerInformationCapabilities();
    //parkingGarage.testingRenewParkingPass();
    //parkingGarage.testingUpdatePassPrices();
    //parkingGarage.testingDisplayOperationsAnalyticsCapability();
    //parkingGarage.testingDisplayBusinessAnalyticsCapability();
    
    
    
    
    
    int userChoice;
    
    string userLogin;
    
    cout<<"Welcome to the Parking Garage System."<<endl<<endl;
    
    bool validLogin;

    
    do
    {
        cout<<"Please type in your login password to gain access to the system:"<<endl;
    
        cin>>userLogin;
    
        if(userLogin == parkingGarage.getLogin())
        {
            cout<<"Login successful.  Welcome "<<parkingGarage.getAdminName()<<" :)"<<endl<<endl<<endl;
            validLogin = true;
            
        }
        
        if(userLogin != parkingGarage.getLogin())
        {
            cout<<"Invalid login.  Please try again."<<endl;
            validLogin = false;
        }
    } while (validLogin == false);
    
    
    
    do
    {
        cout << "Please type in your desired action. Type in -1 to logout and exit the program:"<<endl<<endl;
        cout << "1. Park A Car"<<endl;
        cout << "2. Un-Park A Car"<<endl;
        cout << "3. Issue A New Parking Pass"<<endl;
        cout << "4. Renew A Parking Pass"<<endl;
        cout << "5. Set Parking Pass Prices"<<endl;
        cout << "6. Who Is In The Garage"<<endl;
        cout << "7. Which Reserved Spots Are Already Taken"<<endl;
        cout << "8. Display Operations Analytics"<<endl;
        cout << "9. Display Business Analytics"<<endl;
        cout << "10. Edit Customer Info"<<endl;
        
        cin >> userChoice;
        int customerID;
        
        
        switch(userChoice)
        {
                
            case 1:
                cout<<"Please enter the customer ID of the person desiring to park their car: "<<endl;
                cin>>customerID;
                parkingGarage.parkACar(customerID);
                break;
                
                
            case 2:
                cout<<"Please enter the customer ID of the person desiring to park their car: "<<endl;
                cin>>customerID;
                parkingGarage.unParkACar(customerID);
                break;
                
            case 3:
                parkingGarage.addACustomer();
                break;
                
                
            case 4:
                cout<<"Please enter the customer ID of the person desiring to renew their parking pass: "<<endl;
                cin>>customerID;
                
                parkingGarage.promptRenewalOfPass(customerID);
                break;
                
                
            case 5:
                parkingGarage.setParkingPassPrices();
                break;
                
                
            case 6:
                parkingGarage.whoIsInTheGarage();
                break;
                
                
            case 7:
                parkingGarage.whichReservedSpotsAreAlreadyTaken();
                break;
                
                
            case 8:
                parkingGarage.displayOperationsAnalytics();
                break;
                
                
            case 9:
                parkingGarage.displayBusinessAnalytics();
                break;
                
                
            case 10:
                cout<<"Please enter the customer ID of the person desiring to edit their information: "<<endl;
                cin>>customerID;
                parkingGarage.editCustomerInfo(customerID);
                
        }
        
        
    } while(userChoice != -1);
     
    
    
}



