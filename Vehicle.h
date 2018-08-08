
//
//  Vehicle.h
//  ParkingGarage
//
//  Created by Steven Ouandji on 26/07/18.
//  Copyright © 2018 Steven Ouandji. All rights reserved.
//



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

#include <limits>

class Vehicle

{
private:
    int year;
    string make;
    string model;
    string licensePlateNumber;
    bool currentlyInTheGarage;

    
    
public:
    
    Vehicle()
    {
        currentlyInTheGarage = false;
    }
    
    
    Vehicle(int yr, string mk, string ml, string plate)
    {
        year = yr;
        make = mk;
        model = ml;
        licensePlateNumber = plate;
        
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
    
    string getLicensePlateNumber()
    {
        return licensePlateNumber;
    }
    
    void setLicensePlateNumber(string plate)
    {
        licensePlateNumber = plate;
    }
    
    
    bool isItCurrentlyInTheGarage()
    {
        return currentlyInTheGarage;
    }
    
    void parkingInParkingSpot()
    {
        currentlyInTheGarage = true;
    }
    
    void leavingTheParkingSpot()
    {
        currentlyInTheGarage = false;
    }
    
    
    //Related to actual program functionality
    void inputVehicleInfo()
    {
        editCustomerVehicleYear();
        editCustomerVehicleMake();
        editCustomerVehicleModel();
        editCustomerVehicleLicensePlateNumber();
    }
    
    

    //Related to edit customer functions
    
    void editCustomerVehicleYear()
    {
        bool validYearInput= false;       
        do
        {
            cin>>year;
	        if (cin.good())
	        {
		        if(year <=0 )
	            {
	            	cin.clear();
	            	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	                cout<<"Invalid year input.  Please enter a number greater than 0!"<<endl;
	    		}
	    		else
		    		validYearInput = true;  
	        }
	        else
	        {
	            cin.clear();
	            cin.ignore(numeric_limits<streamsize>::max(),'\n');
	            cout << "Invalid input; please renter the year of the customer's vehicle:" << endl;
	        }
	    } while (!validYearInput);
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
    void editCustomerVehicleLicensePlateNumber()
    {
        cout<<"Enter the plate number of the customer's vehicle:"<<endl;
        cin>>licensePlateNumber;
    }
    
};








#endif /* Vehicle_h */
