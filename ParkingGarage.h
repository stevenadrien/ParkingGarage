
#ifndef ParkingGarage_h
#define ParkingGarage_h

#include "Customer.h"
#include "Security.h"
#include "Operations.h"
#include <string>



class ParkingGarage
{
    //Data structure holding a set of customers with fixed-size capacity of 300
    //150 basic
    //100 premium
    //50 day passes
private:
    Customer customers[300];
    int customerCount;
    Security admins;
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
    
    
    void addACustomer(Customer customer)
    {
        addACustomer();
    }
    
    
    void addACustomer()
    {
        if(customerCount != 300)
        {
            customers[customerCount].createNewCustomer();
            
            setParkingPassInfo(customerCount);
            
            


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
    
    void editCustomerInfo(int customerID)
    {
        int userChoice;
        
        do
        {
            cout<<"Here is Customer #" + to_string(customerID) + " - " + customers[customerID].getCustomerName() + "'s information:"<<endl;
            
            cout<<"First Name: "<<customers[customerID].getFirstName()<<endl;
            cout<<"Last Name: "<<customers[customerID].getLastName()<<endl;
            cout<<"Phone Number: "<<customers[customerID].getPhoneNumber()<<endl;
            
            cout<<"Year Of Vehicle: "<<customers[customerID].getVehicleYear()<<endl;
            cout<<"Make Of Vehicle: "<<customers[customerID].getVehicleMake()<<endl;
            cout<<"Model Of Vehicle: "<<customers[customerID].getVehicleModel()<<endl;
            cout<<"Plate Number Of Vehicle: "<<customers[customerID].getVehiclePlateNumber()<<endl<<endl;
            
        
            cout<<"What would you like to do: "<<endl;
            cout<<"1. Edit Customer's First Name"<<endl;
            cout<<"2. Edit Customer's Last Name"<<endl;
            cout<<"3. Edit Customer's Phone Number"<<endl;
            cout<<"4. Edit Customer's Vehicle Year"<<endl;
            cout<<"5. Edit Customer's Vehicle Make"<<endl;
            cout<<"6. Edit Customer's Vehicle Model"<<endl;
            cout<<"7. Edit Customer's Vehicle Plate Number"<<endl;
            cout<<"8.  Exit Customer Information Wizard"<<endl;
            
            cin>>userChoice;
            
            switch(userChoice)
            {
                case 1:
                    customers[customerID].editCustomerFirstName();
                    break;
                    
                case 2:
                    customers[customerID].editCustomerLastName();
                    break;
                    
                case 3:
                    customers[customerID].editCustomerPhoneNumber();
                    break;
                
                case 4:
                    customers[customerID].editCustomerVehicleYear();
                    break;
                    
                case 5:
                    customers[customerID].editCustomerVehicleMake();
                    break;
                    
                case 6:
                    customers[customerID].editCustomerVehicleModel();
                    break;
                    
                case 7:
                    customers[customerID].editCustomerVehiclePlateNumber();
                    break;
            }
            
            
            
        } while (userChoice != 8);
        
    
        
    }
    
    
    
    
    
    //This is for the parking pass stuff; I broke it up since premium gets quite elaborate, while basic and day passes
    //are pretty simple
    void setParkingPassInfo(int customerID)
    {
        while(bool flag = false)
        {
            char type;
            cout<<"Enter parking pass type (p for premium, b for basic, d for day pass): "<<endl;
            cin>>type;
        
            customers[customerID].defineTypeOfCustomer(type);
        
        
            if(type == 'p')
            {
                if(operations.getTotalPassesLeft() && operations.getTotalPremiumPassesLeft() != 0)
                {
                    bool valid = false;
                    do {
                            int spot;
                    
                            cout<<"Enter customer's reserved parking spot number (from 1-100): "<<endl;
                            cin>>spot;
                    
                            bool alreadyFilled;
                            int x;
                    
                            //Checks to see if that parking spot is not filled already
                            while(x != 300 )
                            {
                                if(customers[x].getReservedSpot() == spot)
                                {
                                    alreadyFilled = true;
                                }
                            }
                        
                        
                            if(alreadyFilled == true)
                            {
                                cout<<"Sorry, that parking spot is already reserved.  Please select another."<<endl;
                                //display available parking spots
                                valid = false;
                            }
                        
                            if(alreadyFilled == false)
                            {
                                cout<<"Premium pass issued"<<endl;
                                valid = true;
                            }
                        
                    } while(valid == false);
                        
                            flag = true;
                }
            
                else
                {
                    cout<<"No more premium passes available.  Please select another parking pass tier."<<endl;
                    flag = false;
                }
            }
            
            if(type == 'b')
            {
                if(operations.getTotalPassesLeft() && operations.getTotalBasicPassesLeft() != 0)
                {
                    cout<<"Basic pass issued"<<endl;
                    flag = true;
                }
                
                else
                {
                    cout<<"No more basic passes available.  Please select another parking pass tier."<<endl;
                    flag = false;
                }
                
                
            }
            
            if(type == 'd')
            {
                if(operations.getTotalPassesLeft() && operations.getTotalDayPassesLeft() != 0)
                {
                    cout<<"Day pass issued"<<endl;
                    flag = true;
                }
                
                else
                {
                    cout<<"No more day passes available.  Please select another parking pass tier."<<endl;
                    flag = false;
                }
            }
        }
    }
    
    void renewParkingPass(int customerID)
    {
        
        
        
    }
    
    void parkACar(Customer customer)
    {
        parkACar(customer);
        
    }
    
    
    void parkACar(int customerID)
    {
        if(customers[customerID].isPassValid() == true)
        {
            if(customers[customerID].parkedInHere() == false)
            {
                customers[customerID].enteringTheGarage();
                cout<<"Customer #" + to_string(customerID) + " " + customers[customerID].getCustomerName() + " has entered the garage!"<<endl;
                operations.aCarHasEnteredTheGarage();
            }
            
            else
            {
                cout<<"Customer #" + to_string(customerID) + " " + customers[customerID].getCustomerName() + " is..already in the garage..."<<endl;
                cout<<"Someone may have forged their credentials and attempting to access the parking garage illegally"<<endl;
            }
        }
        
        else
        {
            cout<<"Customer #" + to_string(customerID) + " " + customers[customerID].getCustomerName() + " no longer has a valid parking pass and, thus, is no longer authorized to enter the parking garage."<<endl;
            
            int choice;
            
            cout<<"Would they like to renew their parking pass? Enter 1 for yes, or 0 for no: "<<endl;
            cin>>choice;
            
            if(choice == 0)
            {
                return;
            }
            
            if(choice == 1)
            {
                renewParkingPass(customerID);
            }
        }
    }
    
    
    void unParkACar(int customerID)
    {
        if(customers[customerID].parkedInHere() == true)
        {
            customers[customerID].leavingTheGarage();
            operations.aCarHasExitedTheGarage();
            
            if(customers[customerID].isPassValid() == false)
            {
                int choice;
                cout<<"Oh, by the way.  Customer #" + to_string(customerID) + " " + customers[customerID].getCustomerName() + "'s pass has expired.  They will not be able to re-enter the parking garage once they have exited."<<endl;
                cout<<"Would they like to renew their parking pass now?  Enter 1 for yes or 0 for no: "<<endl;
                cin>>choice;
            
                if(choice == 1)
                {
                    renewParkingPass(customerID);
                }
            
                if(choice == 0)
                {
                    return;
                }
            }
        }

        else
        {
            cout<<"Error. This customer is not currently parked in here..Maybe you meant someone else??"<<endl;
        }
    }
        
        
        
        
        
    
    
    
    
    void setParkingPassPrices()
    {
        cout<<"****PARKING PRICES SETTINGS****"<<endl<<endl;
        
        int newPremium;
        int newBasic;
        int newDay;
        
        
        cout<<"Enter the desired price for a premium pass"<<endl;
        cin>>newPremium;
        operations.setPremiumPassPrice(newPremium);
        
        cout<<"Enter the desired price for a basic pass"<<endl;
        cin>>newBasic;
        operations.setBasicPassPrice(newBasic);

        
        cout<<"Enter the desired price for a day pass"<<endl;
        cin>>newDay;
        operations.setDayPassPrice(newDay);

        
        cout<<"Parking prices have been set.  Here are the new prices:"<<endl;
        
        operations.displayParkingPassPrices();
        
        
    }
    
    
    
    //Strictly analytics related st00f (displaying information)
    
    void showCurrentPassPrices()
    {
        operations.displayParkingPassPrices();
    }
   
    
    
    
    void displayBusinessAnalytics()
    {
        cout<<"****BUSINESS ANALYTICS****"<<endl<<endl;
        
        operations.displayParkingPassPrices();
        
        operations.displayRevenueAnalytics();
        
        operations.displayPassCounts();

        

        
    }
    
    void displayOperationsInformation()
    {
        cout<<"****OPERATIONS****"<<endl;
        
        operations.showOperationsAnalytics();
        
    }
    
    
    
    
    
    
    
    
};




#endif /* ParkingGarage_h */
