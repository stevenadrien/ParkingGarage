//
//  Testing.h
//  ParkingGarage
//
//  Created by Steven on 6/08/18.
//  Copyright © 2018 Steven. All rights reserved.
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

    
    
    //fills customers[300] up; making sure it doesnt allow another entry after 300
    void testingCapacityBound()
    {
        cout<<"****TESTING CAPACITY****"<<endl;
        
        Customer customer;
        customer.setFirstName("john");
        customer.setLastName("doe");
        customer.setPhoneNumber("4052401392");
        
        
        
        for(int x=0; x<300; x++)
        {
            garage.addACustomer(customer);
            cout<<"Added customer #"<<x<<endl;
        }
        
        cout<<"Testing complete"<<endl;
        
    }

    
    
    //park car (parked in the garage);;;parkACar(int customerID)
    void testingParkingCapabilities()
    {
        cout<<"****TESTING PARKING CAPABILITIES****"<<endl;
        
        garage.displayOperationsAnalytics();
        cout<<"Parking a car"<<endl;
        garage.parkACar(0);
        garage.displayOperationsAnalytics();
        cout<<"Unparking a car"<<endl;
        garage.unParkACar(0);
    
        cout<<"Testing complete"<<endl;
    }

    
    //edit customer info
    void testingEditCustomerInformationCapabilities()
    {
        cout<<"****TESTING CUSTOMER INFO EDIT CAPABILITIES****"<<endl;
        
        garage.editCustomerInfo(0);
        
        cout<<"Testing complete"<<endl;
        
    }
    
    
    //renew parking pass
    void testingRenewParkingPass()
    {
        cout<<"****TESTING RENEW PARKING PASS CAPABILITY****"<<endl;
        
        cout<<"Testing complete"<<endl;
        
        
    }
    
    
    //update pass prices
    void testingUpdatePassPrices()
    {
        cout<<"****TESTING UPDATE PARKING PRICES CAPABILITY****"<<endl;
        
        cout<<"Testing complete"<<endl;


    }
    
    
    //display ops analytics
    void testingDisplayOperationsAnalyticsCapability()
    {
        cout<<"****TESTING OPERATIONS ANALYTICS CAPABILITY****"<<endl;

        
        cout<<"Testing complete"<<endl;
    }
    
    
    
    //display biz analytics
    void testingDisplayBusinessAnalyticsCapability()
    {
        cout<<"****TESTING BUSINESS ANALYTICS CAPABILITY****"<<endl;
        
        
        cout<<"Testing complete"<<endl;
    }












#endif /* Testing_h */
