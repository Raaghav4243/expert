#include<iostream>
#include<string>
using namespace std;


class firstclasspassender
{
    public:
        int age,seatno;
        string name,coachno;
        
        void displaydetail()
        {
            cout<<  this->name  <<" "<<  this->age  <<" "<<  this->coachno  <<" "<<  this->seatno<<endl;
        }
    
        firstclasspassender(string d,int a,string b, int c);
};

firstclasspassender :: firstclasspassender(string d,int a, string b, int c)
{
    age=a;
    name=d;
    coachno=b;
    seatno=c;
}

class secondclasspasseger
{
  public:
    int age , seatno;
    string name , coachno;
    
    // detail = new firstclasspassender();
    firstclasspassender detail("8" , 8,  "8" , 8);
    detail.displaydetail();
    secondclasspasseger(string a, int b, string c, int d);
};

secondclasspasseger::secondclasspasseger(string a, int b, string c, int d)
{
    name=a;
    age=b;
    coachno=c;
    seatno=d;
}

int main()
{
    firstclasspassender passenger1("raaghav",19,"A1",17);
    firstclasspassender passenger2("vriddhi",16,"A1",18);
    firstclasspassender passenger3("mom",47,"A1",19);
    firstclasspassender passenger4("dad",52,"A1",20);
    passenger1.displaydetail();
    passenger2.displaydetail();
    passenger3.displaydetail();
    passenger4.displaydetail();
    
    secondclasspasseger passenger5("1",1,"1",1);
    passenger5.displaydetail.displaydetail();
    
    return 0;
}