#include<iostream>
#include<vector>
// #include<string>
using namespace std;

class Raaghav
{
  public:
  int age,age2,n,i,element;
//   string name;
  vector<int> vect;
  
  void display()
  {
      cout<<age<<endl;
      cout<<age2<<endl;
    //   cout<<name<<endl;
  }
//   vector<int> :: iterator it;
//   void displayvector()
//   {
    //   for(it=vect.begin() ; it<vect.end() ; it++)
    //   cout<<*it<<endl;
//   }
  void displayvector2()
  {
       for (int i = 0; i < vect.size(); i++) 
            cout << vect[i] << " "; 
  }
  Raaghav(int age, int age2, vector<int> a);
};

Raaghav :: Raaghav(int age, int age2,vector<int> a)
{
    age = age;
    age2 = age2;
    // name = name;
    vect=a; 
}


int main()
{
    vector<int> b;
    int i, element,n;
    cin>>n;
    for ( i=0; i<n ; i++)
    {
        cin>>element;
        b.push_back(element);
    }    
    Raaghav object1(7,8,b);
    
    object1.display();
    
    // object1.displayvector();
    
    object1.displayvector2();

    return 0;
}


