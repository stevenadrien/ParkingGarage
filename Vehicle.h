/*This class is responsible for the attributes that deal with a customer's vehicle; things like
 --getting and setting the year of the customer's vehicle
 --getting and setting the make of the customer's vehicle
 --getting and setting the model of the customer's vehicle
 --getting and setting the plate number of the customer's vehicle
 --keeping track of whether or not the vehicle is ACTUALLY in the parking garage
 
 Most relevant functions are:
 
 --inputVehicleInfo(); which is essentially a wizard that captures the values for all these attributes
 --editCustomerVehicleYear(),
 --editCustomerVehicleMake(),
 --editCustomerVehicleModel(),
 --editCustomerVehiclePlateNumber(), which is a wizard that captures these attributes individually, and is tied to a function in the
 Customer class
 
 */
 


#ifndef Vehicle_h
#define Vehicle_h



class Vehicle

{
private:
    int year;
    string make;
    string model;
    string plateNumber;
    bool currentlyInGarage;

    
    
public:
    
    Vehicle()
    {
        currentlyInGarage = false;
    }
    
    
    Vehicle(int yr, string mk, string ml, string plate)
    {
        year = yr;
        make = mk;
        model = ml;
        plateNumber = plate;
        
    }
    
    int getYear()
    {
        return year;
    }
    
    void setYear(int yr)
    {
        year = yr;
    }
    
    
    string getMake()
    {
        return make;
    }
    
    void setMake(string mk)
    {
        make = mk;
    }
    
    string getModel()
    {
        return model;
    }
    
    void setModel(string ml)
    {
        model = ml;
    }
    
    string getPlateNumber()
    {
        return plateNumber;
    }
    
    void setPlateNumber(string plate)
    {
        plateNumber = plate;
    }
    
    
    bool isItCurrentlyInGarage()
    {
        return currentlyInGarage;
    }
    
    void parkingInParkingSpot()
    {
        currentlyInGarage = true;
    }
    
    void leavingTheParkingSpot()
    {
        currentlyInGarage = false;
    }
    
    
    //Related to actual program functionality
    void inputVehicleInfo()
    {
        bool validYearInput;
        
        do
        {
            cout<<"Enter the year of the customer's vehicle:"<<endl;
            cin>>year;
            
            if(year <=0 )
            {
                cout<<"Invalid year input.  Please enter a number greater than 0!"<<endl;
                validYearInput = false;
            }
            
            if( year > 0)
            {
                validYearInput = true;
            }
            
        } while (validYearInput == false);
            
        
        cout<<"Enter the make of the customer's vehicle:"<<endl;
        cin>>make;
        
        cout<<"Enter the model of the customer's vehicle:"<<endl;
        cin>>model;
        
        cout<<"Enter the plate number of the customer's vehicle:"<<endl;
        cin>>plateNumber;
        
    }
    
    

    //Related to edit customer functions
    
    void editCustomerVehicleYear()
    {
        cout<<"Enter the year of the customer's vehicle:"<<endl;
        cin>>year;
    }
    
    void editCustomerVehicleMake()
    {
        cout<<"Enter the make of the customer's vehicle:"<<endl;
        cin>>make;
    }
    void editCustomerVehicleModel()
    {
        cout<<"Enter the model of the customer's vehicle:"<<endl;
        cin>>model;
    }
    void editCustomerVehiclePlateNumber()
    {
        cout<<"Enter the plate number of the customer's vehicle:"<<endl;
        cin>>plateNumber;
    }
    
    
    
    
    
};








#endif /* Vehicle_h */
