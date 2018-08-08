//
//  Testing.h
//  ParkingGarage
//
//  Created by Steven Ouandji on 6/08/18.
//  Copyright © 2018 Steven Ouandji. All rights reserved.
//

#ifndef Testing_h
#define Testing_h

#include "ParkingGarage.h"




class Testing
{
    
public:
    Testing()
    {
        
    }
    
    ParkingGarage garage;
    Customer customer;

    
    
    //here, customerCount is set to 300, and this function attempts to add another; successful test is that it gets denied and I should see an error message
    void testingCapacityBound()
    {
        cout<<"****TESTING CAPACITY****"<<endl;
        
        garage.addACustomer();
        
        cout<<"Testing complete"<<endl;
        
    }

    
    
    //park car (parked in the garage);;;parkACar(int customerID); so we'll create 2 customers (premium customers); so we can cheeck
    //to see that it doesn't allow us to choose the same reserved parking spot. Then we'll park and un-park them. 3 birds, 1 stone :P
    //Also checking to make sure you can't park a car that's already parked, and we can't unpark a car that has already been unparked
    void testingParkingCapabilities()
    {
        cout<<"****TESTING PARKING CAPABILITIES****"<<endl;
        
        
        addACustomer();
        addACustomer();
        
        //Parking customers 1 and 2, and checking that this did indeed happen/also checking for parking already parked cars
        cout<<"Parking car #1"<<endl;
        parkACar(0);
        
        parkACar(0);
        
        cout<<"Parking car #2"<<endl;
        parkACar(1);
        
        displayOperationsAnalytics();
        
        
        //Unparking customers 1 and 2, and checking that this did indeed happen/also checking for unparking already unparked cars
        cout<<"Unparking car #1"<<endl;
        unParkACar(0);
        
        unParkACar(0);
        
        cout<<"Unparking car #2"<<endl;
        unParkACar(1);
        
        
        displayOperationsAnalytics();
        
        
        
        cout<<"Testing complete"<<endl;
    }

    
    
    
    
    void testingEditCustomerInformationCapabilities()
    {
        cout<<"****TESTING CUSTOMER INFO EDIT CAPABILITIES****"<<endl;
        
        addACustomer();
        editCustomerInfo(0);
        
        cout<<"Testing complete"<<endl;
        
    }
    
    
    void testingRenewParkingPass()
    {
        cout<<"****TESTING RENEW PARKING PASS CAPABILITY****"<<endl;
        
        addACustomer();
        
        int c;
        cout<<"1. Andddd go!!!: "<<endl;
        cin>>c;
        
        parkACar(0);
        
        cout<<"Testing complete"<<endl;
        
        
    }
    
    
    void testingUpdatePassPrices()
    {
        cout<<"****TESTING UPDATE PARKING PRICES CAPABILITY****"<<endl;
        
        setParkingPassPrices();
        
        cout<<"Testing complete"<<endl;
        
    }
    
    //display ops analytics
    void testingDisplayOperationsAnalyticsCapability()
    {
        cout<<"****TESTING OPERATIONS ANALYTICS CAPABILITY****"<<endl;
        
        displayOperationsAnalytics();
        
        addACustomer();
        addACustomer();
        addACustomer();
        
        displayOperationsAnalytics();
        
        parkACar(0);
        parkACar(1);
        parkACar(2);
        
        displayOperationsAnalytics();
        
        unParkACar(0);
        unParkACar(1);
        unParkACar(2);
        
        displayOperationsAnalytics();
        
        cout<<"Testing complete"<<endl;
    }
    
    
    
    //display biz analytics
    void testingDisplayBusinessAnalyticsCapability()
    {
        cout<<"****TESTING BUSINESS ANALYTICS CAPABILITY****"<<endl;
        
        
        displayBusinessAnalytics();
        
        addACustomer();
        addACustomer();
        addACustomer();
        
        displayBusinessAnalytics();
        
        int c;
        cout<<"1. Andddd go!!!: "<<endl;
        cin>>c;
        
        parkACar(0);
        parkACar(1);
        parkACar(2);
        
        displayBusinessAnalytics();
        
        
        
        cout<<"Testing complete"<<endl;
    }











#endif /* Testing_h */
