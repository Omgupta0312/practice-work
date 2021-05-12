#include<iostream>
using namespace std;

class rational
{
private:
    int p;
    int q;
public:
    rational(int p=0,int q=1)
    {
        this->p=p;
        this->q=q;
    }

    void display()
    {
        cout<<p<<"/"<<q;
        cout<<endl;
    }
    rational operator+(rational c)
   {
       rational t;
       t.p=p*(c.q)+(c.p)*q;
       t.q=q*(c.q);
       return t;
   }
};

int main()
{
    rational a(4,5),b(5,8),c;
    c=a+b;

    c.display();


    return 0;
}



/*#include<iostream>
using namespace std;

class rational
{
private:
    int p;
    int q;
public:
    rational(int p=0,int q=1)
    {
        this->p=p;
        this->q=q;
    }

    void display()
    {
        cout<<p<<"/"<<q;
        cout<<endl;
    }
   friend rational operator+(rational a,rational b);
};

    rational operator+(rational a,rational b)
    {
        rational t;
    t.p=((a.p)*(b.q) + (b.p)*(a.q));
    t.q=(a.q)*(b.q);
        return t;
    }
int main()
{
    rational a(4,5),b(5,8),c;
    c=a+b;

    c.display();

    return 0;
}

*/




 
