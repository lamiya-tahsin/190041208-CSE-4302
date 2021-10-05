#include<bits/stdc++.h>
using namespace std;
//git push
class Seat{
protected:
    string comfort_info;
    int choice;
    bool seat_warmer;
public:
    void get_data()
    {
        cout<<"Please enter the information of comfortability: ";
        cin>>comfort_info;
        cout<<"Are seat warmers present?"<<endl;
        cout<<"1.Yes"<<endl<<"2.No"<<endl;
        cout<<"Choice: ";
        cin>>choice;
        if(choice==1) seat_warmer=true;
        else seat_warmer=false;
    }
    void set_data(string ci,bool sw)
    {
        comfort_info=ci;
        seat_warmer=sw;
    }
    void show_data()
    {
        cout<<"The seats are :"<<comfort_info<<endl;
        if(seat_warmer) cout<<"Seat warmers are present"<<endl;
        else cout<<"There is no seat warmer"<<endl;
    }
};

class Wheel{
protected:
    double radius;
public:
    void get_data()
    {
        cout<<"Enter radius: ";
        cin>>radius;
    }
    void set_data(double r)
    {
        radius=r;
    }
    void show_data()
    {
        cout<<"The radius of the wheel is: "<<radius<<endl;
    }


};

class Engine
{
protected:
    //Maximum Fuel Consumption Rate, Maximum Energy Production Rate, Average RPM.
    double max_fuel;
    double max_energy;
    double avg_rpm;
public:
    void get_data()
    {
        cout<<"Enter the Maximum Fuel Consumption Rate of the engine: ";
        cin>>max_fuel;
        cout<<"Enter the Maximum Energy Production Rate of the engine: ";
        cin>>max_energy;
        cout<<"Enter the Average RPM: ";
        cin>>avg_rpm;
    }
    void set_data(double mf,double me,double arpm)
    {
        max_fuel=mf;
        max_energy=me;
        avg_rpm=arpm;
        //cout<<"engine works?"<<endl;
    }
    void show_data()
    {
        cout<<"The Maximum Fuel Consumption Rate of the engine is: "<<max_fuel<<endl;
        cout<<"The Maximum Energy Production Rate of the engine is: "<<max_energy<<endl;
        cout<<"The Average RPM of the engine is: "<<avg_rpm<<endl;
    }
};

class Door{
protected:
    string mode;
public:
    void get_data()
    {
        cout<<"Please specify the opening mode of the door: ";
        cin>>mode;
    }
    void set_data(string m)
    {
        mode=m;
    }
    void show_data()
    {
        cout<<"The door opens :"<<mode<<endl;
    }
};

class Truck{
//the maximum_acceleration, fuel_capacity, Load Capacity.
private:
    double max_acc;
    double fuel_cap;
    double load_cap;

public:
    Seat s[2];
    Wheel w[6];
    Engine e;
    Door d[2];
    void get_data()
    {
        cout<<"Enter the Maximum Acceleration: ";
        cin>>max_acc;
        cout<<"Enter the Fuel Capacity: ";
        cin>>fuel_cap;
        cout<<"Enter the Load Capacity: ";
        cin>>load_cap;


    }
    void set_data(double ma,double fc,double lc)
    {
        max_acc=ma;
        fuel_cap=fc;
        load_cap=lc;
    }
    void show_data()
    {
        cout<<"The Maximum Acceleration of the truck is: "<<max_acc<<endl;
        cout<<"The Fuel Capacity of the truck is: "<<fuel_cap<<endl;
        cout<<"The Load Capacity of the truck is: "<<load_cap<<endl;
        cout<<"Seats:"<<endl;
        s[0].show_data();
        cout<<"Wheels:"<<endl;
        w[0].show_data();
        cout<<"Doors:"<<endl;
        d[0].show_data();
        cout<<"Engine:"<<endl;
        e.show_data();
    }
};

int main()
{
    Truck t,t1;
    //t.get_data();
    t.s[0].set_data("Comfy",false);
    t.w[0].set_data(12.5);
    t.d[0].set_data("sideways");
    t.e.set_data(22.4,208,71);
    t.set_data(334.5,1900,56);
    t.show_data();
    t1.s[0].get_data();
    t1.w[0].get_data();
    t1.d[0].get_data();
    t.e.get_data();
    t1.get_data();
    t1.show_data();


}
