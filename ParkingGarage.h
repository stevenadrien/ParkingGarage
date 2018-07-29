
#ifndef ParkingGarage_h
#define ParkingGarage_h

#include "Customer.h"
#include "Employee.h"
#include "Operations.h"



class ParkingGarage
{
    //Data structure holding a set of customers with fixed-size capacity of 300
    //150 basic
    //100 premium
    //50 day passes
private:
    Customer customers[300];
    int customerCount;
    Employee admins;
    Operations operations;
    

    

    
    
public:
    
    ParkingGarage()
    {
        customerCount = 0;
        
    }
    
    
    string getLogin()
    {
        return admins.getLogin();
    
    }
    
    string getAdminName()
    {
        return admins.getName();
    }
    
    
    //Relevant functions of the parking garage ; DEH MEATZZ OF DEH PROGRAM
    //Add a customer
    //Renew a parking pass
    //Park a car in the garage;; check if its a customer. if so, let him in; else fukkk off m8
    //"Un-park" a car from the garage; decrement current car park
    //Bizzz analytics
    //Set parking pass prices
    void addACustomer()
    {
        if(customerCount != 300)
        {
            customers[customerCount].createNewCustomer();


            if(customers[customerCount].getParkingPassType() == 'p')
            {
                operations.premiumPassIssued();
                
                
            }
            
            if(customers[customerCount].getParkingPassType() == 'b')
            {
                operations.basicPassIssued();

                
            }
            
            if(customers[customerCount].getParkingPassType() == 'd')
            {
                operations.dayPassIssued();

                
            }
            
            
            cout<<"New Customer created."<<endl<<endl;
            
            customerCount++;


        }
        
        else if(customerCount == 300)
        {
            cout<<"Parking garage at maximum customer capacity.  I'm sorry but we cannot service you!"<<endl;
            return;
        }
        
            
        
    }
    
    void renewParkingPass(int customerID)
    {
        
        
        
    }
    
    void parkACar(int id)
    {
        if(customers[id].isPassValid == true)
        {
            if(customers[id].isItCurrentlyInTheGarage == false)
            {
                customers[id].enteringTheGarage;
                cout<<"Customer #" + id + " " + customers[id].getName() + " has entered the garage!"<<endl;
                operations.aCarHasEnteredInGarage();
            }
            
            else
            {
                cout<<"Customer #" + id + " " + customers[id].getName() + " is..already in the garage..."<<endl;
                cout<<"Someone may have forged their credentials and attempting to access the parking garage illegally"<<endl;
            }
        }
        
        else
        {
            cout<<"Customer #" + id + " " + customers[id].getName() + " no longer has a valid parking pass and, thus, is no longer authorized to enter the parking garage."<<endl;
            
            int choice;
            
            cout<<"Would they like to renew their parking pass? Enter 1 for yes, or 0 for no: "<<endl;
            cin>>choice;
            
            if(choice == 0)
            {
                return;
            }
            
            if(choice == 1)
            {
                renewParkingPass(id);
            }
            
        
    }
    
    
    void getParkingPassPrices()
    {
        cout<<"Price for a premium pass: $"<<premiumPassPrice<<endl;
        
        cout<<"Price for a basic pass: $"<<basicPassPrice<<endl;
        
        cout<<"Price for a day pass: $"<<dayPassPrice<<endl<<endl;
        
        
    }
    
    void setParkingPassPrices()
    {
        cout<<"****PARKING PRICES SETTINGS****"<<endl<<endl;
        
        cout<<"Enter the desired price for a premium pass"<<endl;
        cin>>operations.setPremiumPassPrice(int newPremium);
        
        cout<<"Enter the desired price for a basic pass"<<endl;
        cin>>operations.setBasicPassPrice(int newBasic);

        
        cout<<"Enter the desired price for a day pass"<<endl;
        cin>>operations.setDayPassPrice(int newDay);

        
        cout<<"Parking prices have been set.  Here are the new prices:"<<endl;
        
        getParkingPassPrices();
        
        
    }
    
   
    
    
    
    void displayBusinessAnalytics()
    {
        cout<<"****BUSINESS ANALYTICS****"<<endl<<endl;
        
        getParkingPassPrices();
        
        cout<<"Total revenue generated: $"<<totalRevenueGenerated<<endl;
        cout<<"Total revenue generated from premium pass sales: $"<<totalRevenueGeneratedFromPremium<<endl;
        cout<<"Total revenue generated from basic pass sales: $"<<totalRevenueGeneratedFromBasic<<endl;
        cout<<"Total revenue generated from day pass sales: $"<<totalRevenueGeneratedFromDay<<endl<<endl;
    
        
        cout<<"Total passes left: "<<totalPassesLeft<<endl;
        cout<<"Total premium passes left: "<<totalPremiumPassesLeft<<endl;
        cout<<"Total basic passes left: "<<totalBasicPassesLeft<<endl;
        cout<<"Total day passes left: "<<totalDayPassesLeft<<endl<<endl;
        

        
    }
    
    
    
    
    
    
    
    
};




#endif /* ParkingGarage_h */
