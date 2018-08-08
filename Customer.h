#ifndef Customer_h
#define Customer_h

#include "Vehicle.h"
#include "ParkingPass.h"
#include "Security.h"
#include <string>
#include "Operations.h"



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
    
    Customer(string fName, string lName, string pNumber)
    {
        firstName = fName;
        lastName = lName;
        phoneNumber = pNumber;
        
    }
    
    
    Customer(string fName, string lName, string pNumber, ParkingPass pass, Vehicle Vehicle)
    {
        firstName = fName;
        lastName = lName;
        phoneNumber = pNumber;
        
    }
    
 
    
    //Basic relevant customer-related functions (getters and setters for this class's  variables)
    string getFirstName()
    {
        return firstName;
    }
    
    void setFirstName(string fName)
    {
        firstName = fName;
    }
    
    
    string getLastName()
    {
        return lastName;
    }
    
    void setLastName(string lName)
    {
        lastName = lName;
    }
    
    
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    
    void setPhoneNumber(string pNumber)
    {
        phoneNumber = pNumber;
    }
    
    

    
    
    
    
    //Customer info retrieval functions (primarily predicatd to Vehicle and ParkingPass objects)
    
    
    string getCustomerName()
    {
        return firstName + " " + lastName;
    }
    
    
    
    int getVehicleYear()
    {
        return vehicle.getYear();
    }
    
    string getVehicleMake()
    {
        return vehicle.getMake();
    }
    
    string getVehicleModel()
    {
        return vehicle.getModel();
    }
    
    string getVehiclePlateNumber()
    {
        return vehicle.getLicensePlateNumber();
    }
    
    
    char getParkingPassType()
    {
        return pass.getParkingPassType();
    }
    
    void setParkingPassType(char type)
    {
        pass.setParkingPassType(type);
    }
    
    double getDuration()
    {
        return pass.getDuration();
    }
    
    void setDuration(double duration)
    {
        pass.setDuration(duration);
    }
    
    
    
    int getParkingSpot()
    {
        return pass.getParkingSpot();
    }
    
    void setParkingSpot(int spot)
    {
        pass.setParkingSpot(spot);
    }
    
    
    
   
    
    
    
    //"Advanced" functions (related to ACTUAL software functionalities)
    
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
        
    }
    
    
    
    
    
    
    
    
    
    
    //  EDITING CUSTOMER-INFORMATION-RELATED functions
    
    
    void editCustomerFirstName()
    {
        cout<<"Enter customer's first name:"<<endl;
        cin>>firstName;
    }
    
    void editCustomerLastName()
    {
        cout<<"Enter customer's last name:"<<endl;
        cin>>lastName;
    }
    
    void editCustomerPhoneNumber()
    {
        cout<<"Enter customer's phone number:"<<endl;
        cin>>phoneNumber;
    }
    
    void editCustomerVehicleYear()
    {
        vehicle.editCustomerVehicleYear();
    }
    
    void editCustomerVehicleMake()
    {
        vehicle.editCustomerVehicleMake();
    }
    
    void editCustomerVehicleModel()
    {
        vehicle.editCustomerVehicleModel();

    }
    
    void editCustomerVehicleLicensePlateNumber()
    {
        vehicle.editCustomerVehicleLicensePlateNumber();

    }
    
    
    
    
    //Higher level functions//APIs (related to exposing data to higher level objects)
    
    
    
    
    void enteringTheGarage()
    {
        vehicle.parkingInParkingSpot();
    }
    
    void leavingTheGarage()
    {
        vehicle.leavingTheParkingSpot();
    }
    
    
    
    
    bool parkedInTheGarage()
    {
        return vehicle.isItCurrentlyInTheGarage();
        
    }
    
    
    bool isItExpired()
    {
        return pass.isItExpired();
        
    }
    
    void renewParkingPass()
    {
        pass.renewParkingPass();
        
    }
    
    
   
    
    
    
};



#endif /* Customer_h */
