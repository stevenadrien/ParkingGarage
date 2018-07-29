//
//  Operations.h
//  ParkingGarage
//
//  Created by Steven on 26/07/18.
//  Copyright © 2018 Steven. All rights reserved.
//

#ifndef Operations_h
#define Operations_h
#include "Customer.h"
 

class Operations
{
private:
    
    
    
    
    int premiumPassPrice;
    int basicPassPrice;
    int dayPassPrice;
    
    
    
    int totalPassesLeft;
    int totalPremiumPassesLeft;
    int totalBasicPassesLeft;
    int totalDayPassesLeft;
    
    
    int totalRevenueGenerated;
    int totalRevenueGeneratedFromPremiumPasses;
    int totalRevenueGeneratedFromBasicPasses;
    int totalRevenueGeneratedFromDayPasses;
    
    
    int totalCarsCurrentlyInGarage;

public:
    //Default constructor:
    //Capaacity of 300 customers
    //100 premium passes;$150/mo
    //150 basic passes;$50/mo
    //50 day passes;$5/day
    
    Operations()
    {
        premiumPassPrice = 150;
        basicPassPrice = 50;
        dayPassPrice = 5;
        
        totalPassesLeft=300;
        totalPremiumPassesLeft=100;
        totalBasicPassesLeft=150;
        totalDayPassesLeft=50;
        
    }
    
    
    
    
    
    
    //Parking pass-related functions (getters and setters for those respective variables)
    int getPremiumPassPrice()
    {
        return premiumPassPrice;
    }
    
    void setPremiumPassPrice(int premiumPrice)
    {
        premiumPassPrice = premiumPrice;
    }
    
    int getBasicPassPrice()
    {
        return basicPassPrice;
    }
    
    void setBasicPassPrice(int basicPrice)
    {
        basicPassPrice = basicPrice;
    }
    
    int getDayPassPrice()
    {
        return dayPassPrice;
    }
    
    void setDayPassPrice(int dayPrice)
    {
        dayPassPrice = dayPrice;
    }

    
    int getTotalPassesLeft()
    {
        return totalPassesLeft;
    }
    
    void setTotalPasses(int totalP)
    {
        totalPassesLeft = totalP;
    }
    
    int getTotalPremiumPassesLeft()
    {
        return totalPremiumPassesLeft;
    }
    
    void setTotalPremiumPasses(int totalPrem)
    {
        totalPassesLeft = totalPrem;
    }
    
    int getTotalBasicPassesLeft()
    {
        return totalBasicPassesLeft;
    }
    
    void setTotalBsicPasses(int totalBas)
    {
        totalPassesLeft = totalBas;
    }
    
    int getTotalDayPassesLeft()
    {
        return totalDayPassesLeft;
    }
    
    void setTotalDayPasses(int totalDay)
    {
        totalPassesLeft = totalDay;
    }
    
    
    
    //Revenue-related functions (getters and setters for those respective variables)
    int getTotalRevenueGenerated()
    {
        return totalRevenueGenerated;
    }
    
    
    int getTotalRevenueGeneratedFromPremiumPasses()
    {
        return totalRevenueGeneratedFromPremiumPasses;
    }
    
    int getTotalRevenueGeneratedFromBasicPasses()
    {
        return totalRevenueGeneratedFromBasicPasses;
    }
    
    int getTotalRevenueGeneratedFromDayPasses()
    {
        return totalRevenueGeneratedFromDayPasses;
    }
    
    
    
    //Current state of the garage
    int getTotalCarsCurrentlyInGarage()
    {
        return totalCarsCurrentlyInGarage;
    }
    
    
    //Garage-related functions
    
    
    
    
    
    
    
    
    
    
    
    
    //"Advanced" parking pass related functions
    void issuePremiumPass()
    {
        if(getTotalPasses && getPremiumPassPrice() != 0)
        {
            totalPassesLeft--;
            totalPremiumPassesLeft--;
        
            totalRevenueGenerated+=premiumPassPrice;
            totalRevenueGeneratedFromPremiumPasses+=premiumPassPrice;
        }
        
        else
        {
            cout<<"All premium passes have been issued.  Unable to issue another one..sorry :("
        }
        
    }
    
    void issueBasicPass()
    {
        if(getTotalPasses && getBasicPassPrice() != 0)
        {
            totalPassesLeft--;
            totalBasicPassesLeft--;
        
            totalRevenueGenerated+=basicPassPrice;
            totalRevenueGeneratedFromBasicPasses+=basicPassPrice;
        }
        
        else
        {
            cout<<"All basic passes have been issued.  Unable to issue another one..sorry :("
        }
        
        
    }
    
    void issueDayPass()
    {
        if(getTotalPasses && getDayPassPrice() != 0)
        {
            totalPassesLeft--;
            totalDayPassesLeft--;
        
            totalRevenueGenerated+=dayPassPrice;
            totalRevenueGeneratedFromDayPasses+=premiumPassPrice;
        }
        

        else
        {
            cout<<"All day passes have been issued.  Unable to issue another one..sorry :("
        }
        
    }
    
    
    
    
};


#endif /* Operations_h */
