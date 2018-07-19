//
//  Customer.h
//  ParkingGarage
//
//  Created by Steven on 16/07/18.
//  Copyright © 2018 Steven. All rights reserved.
//

#include "Vehicle.h"
#include "ParkingPass.h"
#include "Security.h"

#ifndef Customer_h
#define Customer_h

class Customer
{
private:
    string firstName;
    string lastName;
    int phoneNumber;
    string parkingPassType;
    Vehicle vehicle;
    Security credentials;
    
public:
    Customer(string fName, string lName, int pNumber, string pass, Vehicle car)
    {
        this.firstName = fName;
        this.lastName = lName;
        this.phoneNumber = pNumber;
        this.parkingPassType = pass;
        
    }
    
    string getFirstName
    {
        return firstName;
    }
    
    void setFirstName(string fName)
    {
        firstName = fName;
    }
    
    
    string getlastName
    {
        return lastName;
    }
    
    void setLastName(string lName)
    {
        lastName = lName;
    }
    
    
    int getphoneNumber
    {
        return phoneNumber;
    }
    
    void setphoneNumber(int pNumber)
    {
        phoneNumber = pNumber;
    }
    
    
    string getParkingPassType
    {
        return parkingPassType;
    }
    
    void setParkingPassType(string pass)
    {
        parkingPassType = pass;
    }
    
    
    void createNewCustomer()
    {
        
        
        cout<<"Enter customer's first name:"<<endl;
        cin>>firstName;
        
        cout<<"Enter customer's last name:"<<endl;
        cin>>lastName;
        
        cout<<"Enter customer's phone number:"<<endl;
        cin>>phoneNumber;
        
        this.inputVehicleInfo();
        
        cout<<"Enter parking pass type (p for premium, b for basic, d for day pass): "<<endl;
        cin>>parkingPassType;
        
        if(parkingPassType == 'p')
        {
            cout<<"Enter"
        }
        
        
        
        
    }
    
    
    
    
    
    
}



#endif /* Customer_h */
