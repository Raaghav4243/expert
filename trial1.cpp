#include<iostream>
using namespace std;


class raaghav
{
  public:
      int a=5;
      int b=6;
      int first,second,third;
      void qwerty()
      {
          cout<<this->a<<endl;
          cout<<b<<endl;
      }
      
      void hello()
      {
          cout<<"hellothere"<<endl;
      }
      raaghav(int a, int b, int c);
};

raaghav::raaghav(int a, int b, int c)
{
    first = a;
    second = b;
    third = c;
}


int main()
{
    raaghav b(1,2,3);
    
    b.qwerty();
    b.hello();
    cout<<b.a<<endl;
    cout<<b.b<<endl;
    cout<<b.first<<endl;
    cout<<b.second<<endl;
    cout<<b.third<<endl;
    
    return 0;   
}