
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
    
    
    void addACustomer()
    {
        if(customerCount != 300)
        {
            customers[customerCount].createNewCustomer();


            if(customers[customerCount].getParkingPassType() == 'p')
            {
                operations.issuePremiumPass();
                
                
            }
            
            if(customers[customerCount].getParkingPassType() == 'b')
            {
                operations.issueBasicPass();

                
            }
            
            if(customers[customerCount].getParkingPassType() == 'd')
            {
                operations.issueDayPass();

                
            }
            
            
            cout<<"New Customer created."<<endl<<endl;
            
            customerCount++;


        }
        
            
        
    }
    
    void renewParkingPass()
    {
        
        
        
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
        cin>>premiumPassPrice;
        
        cout<<"Enter the desired price for a basic pass"<<endl;
        cin>>basicPassPrice;
        
        cout<<"Enter the desired price for a day pass"<<endl;
        cin>>dayPassPrice;
        
        cout<<"Parking prices have been set.  Here are the new prices"<<endl;
        
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
