//
//  main.cpp
//  ParkingGarage
//
//  Created by Steven on 16/07/18.
//  Copyright © 2018 Steven. All rights reserved.
//
using namespace std;

#include <iostream>
#include "ParkingGarage.h"

int main()
{
    ParkingGarage parkingGarage;
    
    
    parkingGarage.issueNewParkingPass();

    
    
    
    
}

void selectOptions()
{
   
    
    int userChoice;
    
    do
    {
        cout << "Please type in your desired action. Type in -1 to logout and exit the program:"<<endl;
        cout << "1. Issue A New Parking Pass"<<endl;
        cout << "2. Renew A Parking Pass"<<endl;
        cout << "3. Set Parking Pass Prices"<<endl;
        cout << "4. Display Business Analytics"<<endl;
        
        cin >> userChoice;
        
        switch(userChoice)
        
    case 1:
        parkingGarage.issueNewPass();
        break;
        
    case 2:
        parkingGarage.renewParkingPass();
        break;
        
    case 3:
        parkingGarage.setParkingPassPrices();
        
    case 4:
        parkingGarage.displayBusinessAnalytics();
        
        
        
        
        cout<<"Total Revenue Generated: "<<totalRevenueGenerated<<endl;
        cout
        
        
    } while(userChoice != -1);
    
    
  
}
