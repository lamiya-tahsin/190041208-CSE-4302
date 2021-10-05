#include<bits/stdc++.h>
using namespace std;


class Train_station
{
private:
    int seat;
    string train_name;
    int platform;
    //Train_station operator = (Train_station &t){}
    //Train_station(Train_station &t){}
public:
    Train_station(int s,string tn,int p):seat(s),train_name(tn),platform(p)
    {

    }
    int get_seatcount()
    {
        return seat;
    }
    int get_platform()
    {
        return platform;
    }
    string gettrainname()
    {
        return train_name;
    }
    void show_train_details()
    {
        cout<<"Train Information: "<<endl;
        cout<<"Train name is :"<<gettrainname()<<endl;
        cout<<"Platform of that train is :"<<get_platform()<<endl;
        cout<<"Seats available in that Train :"<<get_seatcount()<<endl;
        cout<<endl<<endl;

    }

    Train_station operator = (const Train_station &t)
    {

        seat=t.seat;
        train_name=t.train_name;
        //platform=t.platform;
        return Train_station(seat,train_name,platform);
    }

    Train_station(const Train_station &t):seat(t.seat),train_name(t.train_name),platform(t.platform)
    {

    }
};



int main()
{
    Train_station t1(120,"Shonatori",10);
    Train_station t2(165,"Dolonchapa",9);
    Train_station t3(t1); //initialization
    t1.show_train_details();
    t2.show_train_details();
    t3.show_train_details();
    t3=t2; //assignment
    t3.show_train_details();

}
