#ifndef Employee_h
#define Employee_h

class Employee
{
private:
    string login;
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
    }
    
    
};



#endif /* Employee_h */
