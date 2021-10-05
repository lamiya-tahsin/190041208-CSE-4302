#include <bits/stdc++.h>
#include <string>
using namespace std;

enum class Material {Wood,Board,Steel,foam};
class Furniture
{
protected:
    string pname;
    double price;
    double discount;
    Material madeof;
public:

    Furniture(string pn,double p,double d,Material m):pname("Bed"),price(0),discount(0),madeof(Material::Wood)
    {
        setName(pn);
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
    }
    void setName(string val)
    {
            pname=val;
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
        cout<<"Product Name: "<<pname<<endl;
        cout<<"Regular price:"<<price<<endl;
        cout<<"Discounted price:"<<price-discount<<endl;
        cout<<"Material:"<<getMadeof()<<endl;
    }
    double getDiscountedPrice()
    {
        return price-discount;
    }
};



enum class Bedsize{Single,SemiDouble,Double};

class Bed:public Furniture
{
protected:
    Bedsize beds;
public:
    Bed(string pn,double p,double d,Material m,Bedsize b):Furniture(pn,p,d,m),beds(Bedsize::Single)
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
    Sofa(string pn,double p,double d,Material m,SeatNumber s):Furniture(pn,p,d,m),seat(SeatNumber::Two)
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
    DiningTable(string pn,double p,double d,Material m,ChairCount s):Furniture(pn,p,d,m),chairs(ChairCount::Two)
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

void order(Furniture** f1,Furniture** f2)
{
    if ((*f1)->getDiscountedPrice()<(*f2)->getDiscountedPrice()) {
    Furniture* temp = *f1;
    *f1 = *f2;
    *f2 = temp;
    }
}

void sort_furniture_discount(Furniture *f[],int no_of_furnitures)
{
    for (int i=0;i<no_of_furnitures;i++) {
     for (int j=i+1;j<no_of_furnitures;j++) {
      order( f+i,f+ j);
    }
  }
}

int main()
{
   Furniture* f_list[100];
    f_list[0] = new Bed("Bed",10000,123,Material::Wood,Bedsize::Single);
    f_list[1] = new Sofa("Sofa",11000,234,Material::Steel,SeatNumber::Five);
    f_list[2] = new DiningTable("Dining Table",13000,345,Material::Wood,ChairCount::Six);
    f_list[3] = new Bed("Bed",10090,134,Material::Wood,Bedsize::Single);
    for(int i=0; i<4; i++)
    {
        f_list[i]->productDetails();
    }
    sort_furniture_discount(f_list,4);
    cout<<endl<<endl<<"*************************"<<endl;
    cout<<"The sorted list: "<<endl;
    for(int i=0; i<4; i++)
    {
        f_list[i]->productDetails();
    }
    f_list[1]->setSeat(4)
    for(int i=0; i<4; i++)
    {
        delete f_list[i];
    }

}


