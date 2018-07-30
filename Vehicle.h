#ifndef Vehicle_h
#define Vehicle_h




class Vehicle

{
private:
    string year;
    string make;
    string model;
    string plateNumber;
    bool currentlyInGarage;

    
    
public:
    
    Vehicle()
    {
        currentlyInGarage = false;
    }
    
    
    Vehicle(string yr, string mk, string ml, string plate)
    {
        year = yr;
        make = mk;
        model = ml;
        plateNumber = plate;
        
    }
    
    string getYear()
    {
        return year;
    }
    
    void setYear(string yr)
    {
        year = yr;
    }
    
    
    string getMake()
    {
        return make;
    }
    
    void setMake(string mk)
    {
        make = mk;
    }
    
    string getModel()
    {
        return model;
    }
    
    void setModel(string ml)
    {
        model = ml;
    }
    
    string getPlateNumber()
    {
        return plateNumber;
    }
    
    void setPlateNumber(string plate)
    {
        plateNumber = plate;
    }
    
    
    bool isItCurrentlyInGarage()
    {
        return currentlyInGarage;
    }
    
    void enteringTheGarage()
    {
        currentlyInGarage = true;
    }
    
    
    
    
    void inputVehicleInfo()
    {
        cout<<"Enter the year of the customer's vehicle:"<<endl;
        cin>>year;
        
        cout<<"Enter the make of the customer's vehicle:"<<endl;
        cin>>make;
        
        cout<<"Enter the model of the customer's vehicle:"<<endl;
        cin>>model;
        
        cout<<"Enter the plate number of the customer's vehicle:"<<endl;
        cin>>plateNumber;
        
    }
    
    

    
    
    
    
    
};








#endif /* Vehicle_h */
