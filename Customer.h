#ifndef Customer_h
#define Customer_h

#include "Vehicle.h"
#include "ParkingPass.h"
#include "Security.h"
#include <string>



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
    
    
    Customer(string fName, string lName, string pNumber, ParkingPass pass, Vehicle Vehicle)
    {
        firstName = fName;
        lastName = lName;
        phoneNumber = pNumber;
        
    }
    
    Customer(string fName, string lName, string pNumber, char desiredPassType, int desiredParkingSpot, string desiredVehicleYear, string desiredVehicleMake, string desiredVehicleModel, string desiredVehiclePlateNumber)
    {
        firstName = fName;
        lastName = lName;
        phoneNumber = pNumber;
    
        
        pass.setParkingPassData(desiredPassType);
        pass.setParkingPassData(desiredPassType, desiredParkingSpot);
        
        vehicle.setYear(desiredVehicleYear);
        vehicle.setMake(desiredVehicleMake);
        vehicle.setModel(desiredVehicleModel);
        vehicle.setPlateNumber(desiredVehiclePlateNumber);

        
        
    }
    
    //Basic relevant customer-related functions (getters and setters for those respective variables)
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
    
    
    char getParkingPassType()
    {
        return pass.getParkingPassType();
        
    }
    
    
    //Customer info retrieval functions
    
    
    string getCustomerName()
    {
        return firstName + " " + lastName;
    }
    
    
    string getCustomerVehicle()
    {
        return vehicle.getYear() + " " + vehicle.getMake() + " " + vehicle.getModel();
    }
    
    string getVehicleYear()
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
        return vehicle.getPlateNumber();
    }
    
    
    
    void displayCustomerParkingPassInfo()
    {
        cout<<"Parking Pass Type: " + pass.getParkingPassType()<<endl;
        if(pass.getParkingPassType() == 'p')
        {
            cout<<"Parking Pass Spot Number: " + pass.getParkingSpot()<<endl;
        }
        
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
    
    void editCustomerVehiclePlateNumber()
    {
        vehicle.editCustomerVehiclePlateNumber();

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
    
    
    
    
    bool parkedInHere()
    {
        return vehicle.isItCurrentlyInGarage();
        
    }
    
    
    bool isPassValid()
    {
        if(pass.isItExpired() == true)
        {
            return false;
        }
        
        if(pass.isItExpired() == false)
        {
            return true;
        }
    }
     
    
    char typeOfCustomer()
    {
        return pass.getParkingPassType();
    }
    
    void defineTypeOfCustomer(char type)
    {
        pass.setParkingPassType(type);
    }
    
    int getReservedSpot()
    {
        return pass.getParkingSpot();
    }
    
    
    
};



#endif /* Customer_h */
