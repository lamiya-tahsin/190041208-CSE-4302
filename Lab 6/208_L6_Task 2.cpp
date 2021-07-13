#include<bits/stdc++.h>
using namespace std;

class Coordinate{
private:
    float abscissa;
    float ordinate;
public:
    Coordinate():abscissa(0.0),ordinate(0.0)
    {
    }
    Coordinate(float a,float o):abscissa(a),ordinate(o)
    {
    }
    void display()
    {
        cout<<"The abscissa is :"<<abscissa<<endl;
        cout<<"The ordinate is :"<<ordinate<<endl;
    }
    float getDistance(Coordinate c)
    {
        float x=(abscissa-c.abscissa);
        float y=(ordinate-c.ordinate);
        return sqrt((x*x)+(y*y));
    }
    float getDistance()
    {
        return sqrt((abscissa*abscissa)+(ordinate*ordinate));
    }
    void move_x(float val)
    {
        abscissa+=val;
    }
    void move_y(float val)
    {
        ordinate+=val;
    }
    void move(float val)
    {
        move_x(val);
        move_y(val);
    }
    bool operator ==(Coordinate c)
    {
        if(getDistance()==c.getDistance()) return true;
        else return false;
    }
    bool operator !=(Coordinate c)
    {
        if(getDistance()!=c.getDistance()) return true;
        else return false;
    }
    bool operator >(Coordinate c)
    {
        if(getDistance()>c.getDistance()) return true;
        else return false;
    }
    bool operator <(Coordinate c)
    {
        if(getDistance()<c.getDistance()) return true;
        else return false;
    }
    bool operator >=(Coordinate c)
    {
        if(getDistance()>=c.getDistance()) return true;
        else return false;
    }
    bool operator <=(Coordinate c)
    {
        //cout<<"works";
        if(getDistance()<=c.getDistance()) return true;
        else return false;
    }
    Coordinate operator ++()
    {
        Coordinate temp;
        ++abscissa;
        ++ordinate;
        temp.abscissa=abscissa;
        temp.ordinate=ordinate;
        return temp;
    }
    Coordinate operator ++(int)
    {
        Coordinate temp;
        abscissa++;
        ordinate++;
        temp.abscissa=abscissa;
        temp.ordinate=ordinate;
        return temp;
    }
    Coordinate operator --()
    {
        Coordinate temp;
        --abscissa;
        --ordinate;
        temp.abscissa=abscissa;
        temp.ordinate=ordinate;
        return temp;
    }
    Coordinate operator --(int)
    {
        Coordinate temp;
        abscissa--;
        ordinate--;
        temp.abscissa=abscissa;
        temp.ordinate=ordinate;
        return temp;
    }
    ~Coordinate()
    {
        //cout<<"Destructor"<<endl;
    }
};

int main()
{
    Coordinate c1(16,9),c2(4,3),c3(-4,-3);
    c1.display();
    cout<<"Distance from the origin: "<<c1.getDistance()<<endl;
    cout<<"Distance between c1 & c2: "<<c1.getDistance(c2)<<endl;
    c1.move(5);
    c1.display();
    cout<<"c1==c2: "<<(c1==c2)<<endl;
    cout<<"c1==c3: "<<(c1==c3)<<endl;
    cout<<"c1!=c2: "<<(c1!=c2)<<endl;
    cout<<"c1>c2: "<<(c1>c2)<<endl;
    cout<<"c1<c3: "<<(c1<c3)<<endl;
     cout<<"c1<=c2: "<<(c1<=c2)<<endl;
     cout<<"c1>=c3: "<<(c1>=c3)<<endl;
    //c1.get
    c1++;
    c1.display();
    c2--;
    c2.display();
    --c3;
    c3.display();


}
