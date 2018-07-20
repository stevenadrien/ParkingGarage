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
    ParkingPass pass;
    Vehicle vehicle;
   // Security credentials;
    
public:
    
    Customer();
    
   /* Customer(string fName, string lName, int pNumber, char pass, Vehicle car)
    {
        firstName = fName;
        lastName = lName;
        phoneNumber = pNumber;
        parkingPassType = pass;
        
    }
    */
    
    string getFirstName()
    {
        return firstName;
    }
    
    void setFirstName(string fName)
    {
        firstName = fName;
    }
    
    
    string getlastName()
    {
        return lastName;
    }
    
    void setLastName(string lName)
    {
        lastName = lName;
    }
    
    
    int getphoneNumber()
    {
        return phoneNumber;
    }
    
    void setphoneNumber(int pNumber)
    {
        phoneNumber = pNumber;
    }
    
    
    
    
    void createNewCustomer()
    {
        
        cout<<"Enter customer's first name:"<<endl;
        cin>>firstName;
        
        cout<<"Enter customer's last name:"<<endl;
        cin>>lastName;
        
        cout<<"Enter customer's phone number:"<<endl;
        cin>>phoneNumber;
        
        
        pass.setParkingPassInfo();
        
        vehicle.inputVehicleInfo();

        
    }
    
    
    
    
    
    
};



#endif /* Customer_h */
