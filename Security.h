
//
//  Security.h
//  ParkingGarage
//
//  Created by Steven Ouandji on 26/07/18.
//  Copyright © 2018 Steven Ouandji. All rights reserved.
//

/*This class deals with the security and overall safeguard protocols for the parking garage system.  Things like; authentication, data fuzzing, encryption, etc will be implemented here.
 
 
 */



#ifndef Security_h
#define Security_h

class Security
{
private:
    string login = "superman";
    string name = "Harry";
    
public:
    
    string getLogin()
    {
        return login;
    }
    
    void setLogin(string log)
    {
        login = log;
    }
   
    string getName()
    {
        return name;
    }
    
    void setName(string nm)
    {
        name = nm;
    }
};
    
    




#endif /* Security_h */
