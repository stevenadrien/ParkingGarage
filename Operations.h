//
//  Operations.h
//  ParkingGarage
//
//  Created by Steven Ouandji on 26/07/18.
//  Copyright © 2018 Steven Ouandji. All rights reserved.
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
    
    
    int totalCarsCurrentlyInTheGarage;
    
    
    int totalCurrentPremiumPassCustomersInTheGarage;
    int totalCurrentBasicPassCustomersInTheGarage;
    int totalCurrentDayPassCustomersInTheGarage;

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
        
        totalRevenueGenerated = 0;
        totalRevenueGeneratedFromPremiumPasses = 0;
        totalRevenueGeneratedFromBasicPasses = 0;
        totalRevenueGeneratedFromDayPasses = 0;
        
        
        totalCarsCurrentlyInTheGarage = 0;
        totalCurrentPremiumPassCustomersInTheGarage = 0;
        totalCurrentBasicPassCustomersInTheGarage = 0;
        totalCurrentDayPassCustomersInTheGarage = 0;
        
        
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
    
    
    
    //Garage-related functions// state of the garage
    int getTotalCarsCurrentlyInGarage()
    {
        return totalCarsCurrentlyInTheGarage;
    }
 
    void aCarHasEnteredTheGarage()
    {
        totalCarsCurrentlyInTheGarage++;
    }
    
    void aCarHasExitedTheGarage()
    {
        totalCarsCurrentlyInTheGarage--;
    }
    
    
    
    int getTotalPremiumPassCustomersCurrentlyInTheGarage()
    {
        return totalCurrentPremiumPassCustomersInTheGarage;
    }
    
    void aPremiumPassCustomerHasEnteredTheGarage()
    {
        totalCurrentPremiumPassCustomersInTheGarage++;
    }
    
    void aPremiumPassCustomerHasExitedTheGarage()
    {
        totalCurrentPremiumPassCustomersInTheGarage--;
    }
    
    
    
    int getTotalBasicPassCustomersCurrentlyInTheGarage()
    {
        return totalCurrentBasicPassCustomersInTheGarage;
    }
    
    void aBasicPassCustomerHasEnteredTheGarage()
    {
        totalCurrentBasicPassCustomersInTheGarage++;
    }
    
    void aBasicPassCustomerHasExitedTheGarage()
    {
        totalCurrentBasicPassCustomersInTheGarage--;
    }
    
    
    int getTotalDayPassCustomersCurrentlyInTheGarage()
    {
        return totalCurrentDayPassCustomersInTheGarage;
    }
    
    void aDayPassCustomerHasEnteredTheGarage()
    {
        totalCurrentDayPassCustomersInTheGarage++;
    }
    
    void aDayPassCustomerHasExitedTheGarage()
    {
        totalCurrentDayPassCustomersInTheGarage--;
    }
    
    
    
    
    
    
    
    //Analytics related functions
    void showOperationsAnalytics()
    {
        cout<<"Total cars currently parked in garage: " << getTotalCarsCurrentlyInGarage()<<endl;
        cout<<"Total premium pass customers currently parked in the garage: "<<getTotalPremiumPassCustomersCurrentlyInTheGarage()<<endl;
        cout<<"Total basic pass customers currently parked in the garage: "<<getTotalBasicPassCustomersCurrentlyInTheGarage()<<endl;
        cout<<"Total day pass customers currently parked in the garage: "<<getTotalDayPassCustomersCurrentlyInTheGarage()<<endl<<endl;
    }
    
    void displayRevenueAnalytics()
    {
        cout<<"Total revenue generated: $"<<getTotalRevenueGenerated()<<endl;
        cout<<"Total revenue generated from premium pass sales: $"<<getTotalRevenueGeneratedFromPremiumPasses()<<endl;
        cout<<"Total revenue generated from basic pass sales: $"<<getTotalRevenueGeneratedFromBasicPasses()<<endl;
        cout<<"Total revenue generated from day pass sales: $"<<getTotalRevenueGeneratedFromDayPasses()<<endl<<endl;
    }
    
    void displayPassCounts()
    {
        cout<<"Total passes left: "<<getTotalPassesLeft()<<endl;
        cout<<"Total premium passes left: "<<getTotalPremiumPassesLeft()<<endl;
        cout<<"Total basic passes left: "<<getTotalBasicPassesLeft()<<endl;
        cout<<"Total day passes left: "<<getTotalDayPassesLeft()<<endl<<endl;
    }
    
    void displayParkingPassPrices()
    {
        cout<<"Price for a premium pass: $"<<getPremiumPassPrice()<<endl;
        
        cout<<"Price for a basic pass: $"<<getBasicPassPrice()<<endl;
        
        cout<<"Price for a day pass: $"<<getDayPassPrice()<<endl<<endl;
        
        
    }
    
    
    
    
    
    
    //State-of-sales-and-operations-related function (dealing with revenue and pass counts)
    void premiumPassIssued()
    {
        totalPassesLeft--;
        totalPremiumPassesLeft--;
        
        totalRevenueGenerated+=premiumPassPrice;
        totalRevenueGeneratedFromPremiumPasses+=premiumPassPrice;
    }
    
    void aPremiumPassHasExpired()
    {
        totalPassesLeft++;
        totalPremiumPassesLeft++;
    }
    
    
    
    void basicPassIssued()
    {
        totalPassesLeft--;
        totalBasicPassesLeft--;
        
        totalRevenueGenerated+=basicPassPrice;
        totalRevenueGeneratedFromBasicPasses+=basicPassPrice;
    }
    
    void aBasicPassHasExpired()
    {
        totalPassesLeft++;
        totalBasicPassesLeft++;
    }
    
    
    
    void aDayPassHasExpired()
    {
        totalPassesLeft++;
        totalDayPassesLeft++;
    }
    
    void dayPassIssued()
    {
        totalPassesLeft--;
        totalDayPassesLeft--;
        
        totalRevenueGenerated+=dayPassPrice;
        totalRevenueGeneratedFromDayPasses+=premiumPassPrice;
    }
    
    

    
    
    
};


#endif /* Operations_h */
