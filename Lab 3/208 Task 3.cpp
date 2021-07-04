#include<bits/stdc++.h>
using namespace std;

class Medicine
{
private:
    string name, genericName;
    double discountPercent, unitPrice;
public:
    Medicine():unitPrice(0.0),discountPercent(5.0)
    {
    }
    void assignName(string n, string gName)
    {
        name=n;
        genericName=gName;
    }
    void assignPrice(double p)
    {
        if(p>0) unitPrice=p;
        cout<<fixed<<setprecision(2);
        //else unitPrice=0.0;
    }
    void setDiscountPercent(double percent)
    {
        if(percent>=0 && percent<=45) discountPercent=percent;
        //cout<<fixed<<setprecision(2);
    }
    double getSellingPrice(int nos)
    {
        double sp= unitPrice-((discountPercent*unitPrice)/100);
        sp=sp*(double)nos;
        cout<<fixed<<setprecision(2);
        return sp;

    }
    void display()
    {
        cout<<name<<" ("<<genericName<<") has a unit price BDT "<<unitPrice<<". Current discount "<<discountPercent<<"%."<<endl;

    }
};
int main()
{
    Medicine m1;
    m1.assignName("Napa","Paracetamol");
    m1.assignPrice(0.80);
    m1.setDiscountPercent(10);
    m1.display();
    cout<<m1.getSellingPrice(5)<<endl;
}
