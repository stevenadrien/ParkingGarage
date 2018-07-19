o

#ifndef ParkingGarage_h
#define ParkingGarage_h

#include "Customer.h"

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
    
    
    int totalPassesLeft;
    int totalPremiumPassesLeft;
    int totalBasicPassesLeft;
    int totalDayPassesLeft;
    
    
    int totalRevenueGenerated;
    int totalRevenueGeneratedFromPremium;
    int totalRevenueGeneratedFromBasic;
    int totalRevenueGeneratedFromDay;
    
    
public:
    
    ParkingGarage()
    
    
    
    void issueNewParkingPass()
    {
        while(customerCount != 300)
        {
            customers[customerCount].createNewCustomer();
            customerCount++;
            
            cout<<"hwatking 
            
            
        }
        
            
        
    }
    
    void renewParkingPass()
    {
        
        
        
    }
    
    void setParkingPassPrices()
    {
        
        
        
    }
    
    void getParkingPassPrices()
    {
        
        
        
    }
    
    
    
    void displayBusinessAnalytics()
    {
        
        
        
    }
    
    
    
    
    
    
    
    
}




#endif /* ParkingGarage_h */
