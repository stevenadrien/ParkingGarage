//
//  Operations.h
//  ParkingGarage
//
//  Created by Steven on 26/07/18.
//  Copyright © 2018 Steven. All rights reserved.
//

#ifndef Operations_h
#define Operations_h

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

public:
    //getters and setters for parking pass prices
    int getPremiumPassPrice()
    {
        return premiumPassPrice;
    }
    
    int getBasicPassPrice()
    {
        return basicPassPrice;
    }
    
    int getDayPassPrice()
    {
        return dayPassPrice;
    }
    
    void setPremiumPassPrice(int premiumPrice)
    {
        premiumPassPrice = premiumPrice;
    }
    
    void setBasicPassPrice(int basicPrice)
    {
        basicPassPrice = basicPrice;
    }
    
    
    void setDayPassPrice(int dayPrice)
    {
        dayPassPrice = dayPrice;
    }
    
    
    
    void issuePremiumPass()
    {
        totalPassesLeft--;
        totalPremiumPassesLeft--;
        
        totalRevenueGenerated+=premiumPassPrice;
        totalRevenueGeneratedFromPremiumPasses+=premiumPassPrice;
        
    }
    
    void issueBasicPass()
    {
        totalPassesLeft--;
        totalBasicPassesLeft--;
        
        totalRevenueGenerated+=basicPassPrice;
        totalRevenueGeneratedFromBasicPasses+=basicPassPrice;
        
    }
    
    void issueDayPass()
    {
        totalPassesLeft--;
        totalDayPassesLeft--;
        
        totalRevenueGenerated+=dayPassPrice;
        totalRevenueGeneratedFromDayPasses+=premiumPassPrice;
        
    }
    
    
    
    
};


#endif /* Operations_h */
