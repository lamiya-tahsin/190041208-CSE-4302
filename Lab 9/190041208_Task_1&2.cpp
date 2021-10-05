#include <bits/stdc++.h>
#include <string>
using namespace std;
//git commit
enum class Material {Wood,Board,Steel,foam};
class Furniture
{
protected:
    double price;
    double discount;
    Material madeof;
public:

    Furniture(double p,double d,Material m):price(0),discount(0),madeof(Material::Wood)
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
    }
    void setPrice(double val)
    {
        if(val>0)
            price=val;
    }
    void setDiscount(double val)
    {
        if(val<=price)
            discount=val;
    }
    void setMadeof(Material val)
    {
        madeof=val;
    }
    string getMadeof()
    {
        if(madeof==Material::Wood)
            return string("Wood");
        else if(madeof==Material::Board)
            return string("Board");
        else if(madeof==Material::Steel)
            return string("Steel");
        else
            return string("");
    }
    virtual void productDetails()
    {
        cout<<"--------------------------------------------"<<endl;
        cout<<"Regular price:"<<price<<endl;
        cout<<"Discounted price:"<<price-discount<<endl;
        cout<<"Material:"<<getMadeof()<<endl;
    }
};



enum class Bedsize{Single,SemiDouble,Double};

class Bed:public Furniture
{
protected:
    Bedsize beds;
public:
    Bed(double p,double d,Material m,Bedsize b):Furniture(p,d,m),beds(Bedsize::Single)
    {
        setBedsize(beds);
    }
    void setBedsize(Bedsize val)
    {
        beds=val;
    }
    string getbedsize()
    {
        if(beds==Bedsize::Single)
            return string("Single");
        else if(beds==Bedsize::SemiDouble)
            return string("SemiDouble");
        else if(beds==Bedsize::Double)
            return string("Double");
        else
            return string("");
    }
    void productDetails()
    {
        Furniture::productDetails();
        cout<<"Bed Size: "<<getbedsize()<<endl;
        cout<<"#############################################"<<endl;
    }

};
enum class SeatNumber{One,Two,Three,Four,Five};

class Sofa:public Furniture
{
protected:
    SeatNumber seat;
public:
    Sofa(double p,double d,Material m,SeatNumber s):Furniture(p,d,m),seat(SeatNumber::Two)
    {
        setSeat(s);
    }
     void setSeat(SeatNumber val)
    {
        seat=val;
    }
    string getSeat()
    {
        if(seat==SeatNumber::One)
            return string("One");
        else if(seat==SeatNumber::Two)
            return string("Two");
        else if(seat==SeatNumber::Three)
            return string("Three");
        else if(seat==SeatNumber::Four)
            return string("Four");
        else if(seat==SeatNumber::Five)
            return string("Five");
    }
    void productDetails()
    {
        Furniture::productDetails();
        cout<<"Seat Number: "<<getSeat()<<endl;
        cout<<"#############################################"<<endl;
    }

};
enum class ChairCount{Two,Four,Six};
class DiningTable:public Furniture
{
protected:
    ChairCount chairs;
public:
    DiningTable(double p,double d,Material m,ChairCount s):Furniture(p,d,m),chairs(ChairCount::Two)
    {
        setchair(s);
    }
     void setchair(ChairCount val)
    {
        chairs=val;
    }
    string getchairs()
    {
        if(chairs==ChairCount::Two)
            return string("Two");
        else if(chairs==ChairCount::Four)
            return string("Four");
        else if(chairs==ChairCount::Six)
            return string("Six");
    }
    void productDetails()
    {
        Furniture::productDetails();
        cout<<"Number of chairs: "<<getchairs()<<endl;
        cout<<"#############################################"<<endl;
    }


};


int main()
{
   Furniture* f_list[100];
    f_list[0] = new Bed(10000,123,Material::Wood,Bedsize::Single);
    f_list[1] = new Sofa(11000,234,Material::Steel,SeatNumber::Five);
    f_list[2] = new DiningTable(13000,345,Material::Wood,ChairCount::Six);
    f_list[3] = new Bed(10090,123,Material::Wood,Bedsize::Single);
    for(int i=0; i<4; i++)
    {
        f_list[i]->productDetails();
    }
    for(int i=0; i<4; i++)
    {
        delete f_list[i];
    }

}
