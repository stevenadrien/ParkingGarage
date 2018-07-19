# ParkingGarage

The following assets are for a solution system for a parking garage;

This parking garage has 300 parking spots and 3 levels, each level containing 100 parking spots.  They are 3 types of parking passes; premium, basic, and day passes.  Premium passes allow a customer to park in the garage for the duration of the month and are granted a reserved parking spot.  Basic passes allow a customer to park in the garage for the duration of the month.   Day passes allow a customer to park in the garage for the duration of a day.  

Each tier of parking pass is alloted a specific amount of passes; the premium pass tier is granted 100 passes, the basic pass tier is granted 150 passes, and the day pass tier is granted 50 passes.  Once all 300 parking passes are issued out, the parking garage no longer accepts any new customers.

Thus, here are the requirements it must meet:

•	It must keep track of each reserved spot
•	It must keep track of when someone’s pass expires
•	It must keep track of total revenue from each parking pass tier, and total revenue to-date I guess
•	It must keep track of total available parking spots so the parking garage knows when not to receive anymore new customers
•	It must keep track of total number of currently allotted premium pass, basic pass, and day pass so that the parking garage knows when not to issue a certain type of parking pass anymore
•	It must manage access to the garage, by granting or denying entry to the parking garage.  This is done by lifting, or not lifting, the vehicle barrier gate 
•	The pricing and assignment of parking passes can be managed by the solution should the system's operator decide to make changes pertaining to these elements.
•	Access to the garage is controlled by membership card.
•	Each user should be referenceable (by an ID number of sorts), date/time, if entering or exiting, and update a separate record of the total number of customers currently in the garage.
•	The garage should not allow access to any customers when it is full.
•	When parking passes expire, the administrator should be notified of any expired passes that have entered the garage but have not exited after.
•	Each purchase of a parking pass should store the customer name, date/time of transaction, tier of parking pass, payment amount, and update a separate record of the total number currently allotted passes of that type.
•	The combined revenue of each parking pass tier and total revenue should be tracked.
