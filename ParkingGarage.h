
#ifndef ParkingGarage_h
#define ParkingGarage_h

#include "Customer.h"
#include "Security.h"
#include "Operations.h"
#include <string>
#include <chrono>




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
    std::chrono::time_point<std::chrono::system_clock> start, end;

    

    

    
    
public:
    
    ParkingGarage()
    {
        customerCount = 0;
        start = std::chrono::system_clock::now();

        
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
            
            weHaveANewCustomer(customerCount);
            
            
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
        bool validParkingPassTypeChoice = false;
        
        
        while(validParkingPassTypeChoice == false)
        {
            char type;
            cout<<"Enter parking pass type (p for premium, b for basic, d for day pass): "<<endl;
            cin>>type;
            
        
            if(type == 'p')
            {
                if( operations.getTotalPremiumPassesLeft() != 0 )
                {
                    customers[customerID].setParkingPassType(type);
                    
                    customers[customerID].setDuration(50);
                    
                    validParkingPassTypeChoice = true;

                    
                    
                    int spot;
                    
                    bool validParkingSpotChoice = false;

                    
                    do
                    {
                    
                        cout<<"Enter customer's reserved parking spot number (from 0-99): "<<endl;
                        cin>>spot;
                    
                        if(customerCount == 0)
                        {
                            customers[customerID].setParkingSpot(spot);
                            cout<<"Premium parking spot #"<<spot<<" has been reserved."<<endl<<endl;

                            cout<<"Premium pass issued"<<endl;
                            return;
                        }
                    
                    
                        //Check whether or not that parking spot is open
                        if(customerCount > 0)
                        {
                            int x = 0;
                            bool spotAlreadyTaken;
                        
                            while(x < customerCount)
                            {
                                if(customers[x].getParkingPassType() == 'p')
                                {
                                    if(customers[x].getParkingSpot() == spot)
                                    {
                                        spotAlreadyTaken = true;
                                        break;
                                    }
                                
                                    if(customers[x].getParkingSpot() != spot)
                                    {
                                        spotAlreadyTaken = false;
                                    }
                                }
                                    
                                x++;
                            }
                                
                                
                            if(spotAlreadyTaken == true)
                            {
                                cout<<"Sorry, that premium parking spot is already reserved.  Please select another."<<endl;
                                validParkingSpotChoice = false;
                            }
                                
                            if(spotAlreadyTaken == false)
                            {
                                    
                                cout<<"Premium parking spot is open for reservation."<<endl;
                                customers[customerID].setParkingSpot(spot);
                                cout<<"Premium parking spot #"<<spot<<" has been reserved."<<endl;
                                    
                                cout<<"Premium pass issued."<<endl;
                                    
                                validParkingSpotChoice = true;
                                
                            }
                        }
                    } while(validParkingSpotChoice == false);
                }
                
                    else
                    {
                        cout<<"No more premium passes available.  Please select another parking pass tier."<<endl;
                        validParkingPassTypeChoice = false;
                    }
                    
            }
            
            
        
            
            if(type == 'b')
            {
                if(operations.getTotalBasicPassesLeft() != 0)
                {
                    customers[customerID].setParkingPassType(type);
                    
                    customers[customerID].setDuration(30);

                    
                    cout<<"Basic pass issued"<<endl;
                    validParkingPassTypeChoice = true;
                }
                
                else
                {
                    cout<<"No more basic passes available.  Please select another parking pass tier."<<endl;
                    validParkingPassTypeChoice = false;
                }
            }
            
                
            if(type == 'd')
            {
                if( operations.getTotalDayPassesLeft() != 0)
                {
                    customers[customerID].setParkingPassType(type);
                    customers[customerID].setDuration(15);

                    cout<<"Day pass issued"<<endl;
                    validParkingPassTypeChoice = true;
                }
                
                else
                {
                    cout<<"No more day passes available.  Please select another parking pass tier."<<endl;
                    validParkingPassTypeChoice = false;
                }
            }
                
                
        
        }while (validParkingPassTypeChoice == false);
    }
    
    
    void renewParkingPass(int customerID)
    {
        bool isPassValid = customers[customerID].isItExpired();
        
        if(isPassValid == true)
        {
            
            customers[customerID].renewParkingPass();
            
            cout<<"Parking Pass renewed!"<<endl<<endl;
            return;
        }
        
        if(isPassValid == false)
        {
            cout<<"No need to renew your parking pass...it's still valid!"<<endl<<endl;
        }
    
    }
    
    void aPassHasExpired(int customerID)
    {
        char type = customers[customerID].getParkingPassType();
        
        if(type=='p')
        {
            operations.aPremiumPassHasExpired();
        }
        
        if(type == 'b')
        {
            operations.aBasicPassHasExpired();
        }
        
        if(type == 'd')
        {
            operations.aDayPassHasExpired();
        }
    }
    
    void weHaveANewCustomer(int customerID)
    {
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
    }
    
    
    void promptRenewalOfPass(int customerID)
    {
        int choice;
        
        cout<<"Would they like to renew their parking pass now?  Enter 1 for yes or 0 for no: "<<endl;
        cin>>choice;
        
        if(choice == 1)
        {
            int microChoice;
            
            cout<<"Would they like to keep everything as is (reserved parking spot included, if applicable) or would they like to change parking tier?  Enter 1 to keep things the same or 0 to modify parking tiers"<<endl;
            cin>>microChoice;
            
            if(microChoice == 1)
            {
                if(customers[customerID].getParkingPassType() == 'p')
                {
                    renewParkingPass(customerID);
                    
                    weHaveANewCustomer(customerID);
                }
            }
            
            if(microChoice == 0)
            {
                setParkingPassInfo(customerID);
                renewParkingPass(customerID);
                
                weHaveANewCustomer(customerID);
                
            }
        }
        
        if(choice == 0)
        {
            return;
        }
    }
    
    
    
    void parkACar(Customer customer)
    {
        parkACar(customer);
        
    }
    
    
    void parkACar(int customerID)
    {
        bool isPassExpired = customers[customerID].isItExpired();
        
        cout<<"Customer pass is expired (0 is no, 1 is yes): "<<isPassExpired<<endl;

        
        switch(isPassExpired)
        {
                case false:
                if(customers[customerID].parkedInHere() == false)
                {
                    customers[customerID].enteringTheGarage();
                    cout<<"Customer #" + to_string(customerID) + " - " + customers[customerID].getCustomerName() + " has entered the garage!"<<endl<<endl;
                    operations.aCarHasEnteredTheGarage();
                    
                    if(customers[customerID].getParkingPassType() == 'p')
                    {
                        operations.aPremiumPassCustomerHasEnteredTheGarage();
                    }
                    
                    if(customers[customerID].getParkingPassType() == 'b')
                    {
                        operations.aBasicPassCustomerHasEnteredTheGarage();
                    }
                    
                    if(customers[customerID].getParkingPassType() == 'd')
                    {
                        operations.aDayPassCustomerHasEnteredTheGarage();
                    }
                }
                
                else
                {
                    cout<<"Customer #" + to_string(customerID) + " - " + customers[customerID].getCustomerName() + " is..already in the garage...?"<<endl;
                    cout<<"Someone may have forged their credentials and attempting to access the parking garage illegally"<<endl;
                }
                
                break;
                
                
            case true:
                cout<<"Customer #" + to_string(customerID) + " - " + customers[customerID].getCustomerName() + " no longer has a valid parking pass and, thus, is no longer authorized to enter the parking garage."<<endl;
                
                aPassHasExpired(customerID);
                
                promptRenewalOfPass(customerID);
                break;
        }
        
    }
    
    
    void unParkACar(int customerID)
    {
        if(customers[customerID].parkedInHere() == true)
        {
            customers[customerID].leavingTheGarage();
            cout<<"Customer #" + to_string(customerID) + " - " + customers[customerID].getCustomerName() + " has unparked his car from the garage"<<endl<<endl;
            operations.aCarHasExitedTheGarage();
            
            
            if(customers[customerID].getParkingPassType() == 'p')
            {
                operations.aPremiumPassCustomerHasExitedTheGarage();
            }
            
            if(customers[customerID].getParkingPassType() == 'b')
            {
                operations.aBasicPassCustomerHasExitedTheGarage();
            }
            
            if(customers[customerID].getParkingPassType() == 'd')
            {
                operations.aDayPassCustomerHasExitedTheGarage();
            }
            
            
            
            bool isPassExpired = customers[customerID].isItExpired();

            cout<<"Customer pass is expired (0 is no, 1 is yes): "<<isPassExpired<<endl;
            
            if(isPassExpired == true)
            {
                aPassHasExpired(customerID);
                
                cout<<"Oh, by the way.  Customer #" + to_string(customerID) + " - " + customers[customerID].getCustomerName() + "'s pass has expired.  They will not be able to re-enter the parking garage once they have exited."<<endl<<endl;
                
                promptRenewalOfPass(customerID);
            }
        }

        else
        {
            cout<<"Error. This customer is not currently parked in here..Maybe you meant someone else??"<<endl;
        }
    }
        
 
    void setParkingPassPrices()
    {
        
        int newPremium;
        int newBasic;
        int newDay;
        
    
        cout<<"****PARKING PRICES SETTINGS****"<<endl<<endl;
        
        cout<<"Here are the current parking pass prices: "<<endl;
        operations.displayParkingPassPrices();
        
        
        cout<<"Enter the desired price for a premium pass"<<endl;
        cin>>newPremium;
        operations.setPremiumPassPrice(newPremium);
        
        cout<<"Enter the desired price for a basic pass"<<endl;
        cin>>newBasic;
        operations.setBasicPassPrice(newBasic);

        
        cout<<"Enter the desired price for a day pass"<<endl;
        cin>>newDay;
        operations.setDayPassPrice(newDay);

        
        cout<<"Parking prices have been set.  Here are the new prices:"<<endl<<endl;
        
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
    
    void displayOperationsAnalytics()
    {
        cout<<"****OPERATIONS ANALYTICS****"<<endl<<endl;
        
        operations.showOperationsAnalytics();
        
        
    }
    
    
    
    
    
    
    
    
};




#endif /* ParkingGarage_h */
