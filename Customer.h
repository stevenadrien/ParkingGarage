#ifndef Customer_h
#define Customer_h

#include "Vehicle.h"
#include "ParkingPass.h"
#include "Security.h"



class Customer
{
private:
    string firstName;
    string lastName;
    string phoneNumber;
    ParkingPass pass;
    Vehicle vehicle;
   // Security credentials;
    
public:
    
    Customer()
    {
        
    }
    
    
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
    
    
    string getphoneNumber()
    {
        return phoneNumber;
    }
    
    void setphoneNumber(string pNumber)
    {
        phoneNumber = pNumber;
    }
    
    
    
    
    
    void createNewCustomer()
    {
        cout<<"****ADDING A CUSTOMER****"<<endl;
        
        cout<<"Enter customer's first name:"<<endl;
        cin>>firstName;
        
        cout<<"Enter customer's last name:"<<endl;
        cin>>lastName;
        
        cout<<"Enter customer's phone number (format; 1234567890):"<<endl;
        cin>>phoneNumber;
        
        vehicle.inputVehicleInfo();
        
        pass.setParkingPassInfo();
        
        
        
        

        
    }
    
    char getParkingPassType()
    {
        return pass.getParkingPassType();
        
    }
    
    
    
    
    
    
};



#endif /* Customer_h */
