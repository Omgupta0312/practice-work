#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l=0,int b=0);
    void setLength(int l);
    void setBreadth(int b);
    int getLength();
    int getBreadth();
    int area();
    int perimeter();

};

int main()
{
    Rectangle r(10,9);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    Rectangle r2;
    r2.setLength(18);
    r2.setBreadth(10);
    cout<<r2.area()<<endl<<r2.perimeter();
cout<<endl;
 return 0;

}
        Rectangle::Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }

    void Rectangle::setLength(int l)
    {
        if(l<0)
            length=0;
        else
            length=l;
    }
    void Rectangle::setBreadth(int b)
    {
        if(b<0)
            breadth=0;
        else
            breadth=b;
    }
    int Rectangle::getLength()
    {
        return length;
    }

     int Rectangle::getBreadth()
    {
        return breadth;
    }
    int Rectangle::area()
    {
        return (length*breadth);
    }
    int Rectangle::perimeter()
    {
        return 2*(length+breadth);
    }
