#ifndef INC_VEHICLE_H
#define INC_VEHICLE_H

#include<string>

class Vehicle{
    public:
        String get_plate_number();
        Date get_enter_date();
        Date get_leave_date();
        int get_enter_time();
        int get_leave_time();
        
        static double get_rate();
        
        void charge();
        void print(CALL);
        
        void enter(Date);
        void leave(Date);
    
        static void set_rate(double);    
    
        bool operator == (const Vehicle&) const;
        bool operator > (const Vehicle&) const;
        bool operator < (const Vehicle&) const;
        bool operator >= (const Vehicle&) const;
        bool operator <= (const Vehicle&) const;
        bool operator != (const Vehicle&) const;
    
    protected:
        static void (ChargingBeast::*charging_call)(Vehicle);
        static void (PrintingParrot::*printing_call)(Vehicle, CALL);
        
        Vehicle(String);
        ~Vehicle();
        
    private:
        Date enter_date;
        Date leave_date;
        int enter_time;
        int leave_time;
        String plate_number;
        
        static double rate;
};

#endif /* INC_VEHICLE_H */
