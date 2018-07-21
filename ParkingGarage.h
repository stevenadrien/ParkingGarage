
#ifndef ParkingGarage_h
#define ParkingGarage_h

#include "Customer.h"
#include "Employee.h"



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
    
    

    int premiumPassPrice = 150;
    int basicPassPrice = 50;
    int dayPassPrice = 5;
    
    int totalPassesLeft=300;
    int totalPremiumPassesLeft=100;
    int totalBasicPassesLeft=150;
    int totalDayPassesLeft=50;
    

    
    
    int totalRevenueGenerated;
    int totalRevenueGeneratedFromPremium;
    int totalRevenueGeneratedFromBasic;
    int totalRevenueGeneratedFromDay;
    
    
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
                totalPassesLeft--;
                totalPremiumPassesLeft--;
                
                totalRevenueGenerated+=premiumPassPrice;
                totalRevenueGeneratedFromPremium+=premiumPassPrice;
                
                
            }
            
            if(customers[customerCount].getParkingPassType() == 'b')
            {
                totalPassesLeft--;
                totalBasicPassesLeft--;
                
                totalRevenueGenerated+=basicPassPrice;
                totalRevenueGeneratedFromBasic+=basicPassPrice;
                
            }
            
            if(customers[customerCount].getParkingPassType() == 'd')
            {
                totalPassesLeft--;
                totalDayPassesLeft--;
                
                totalRevenueGenerated+=dayPassPrice;
                totalRevenueGeneratedFromDay+=dayPassPrice;
                
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
        cout<<"****PARKING PRICES SETTINGS****"<<endl;
        
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
        
        
        
    }
    
    
    
    
    
    
    
    
};




#endif /* ParkingGarage_h */
