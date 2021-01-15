#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> v)
{
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
}

int search(vector<int> v1, vector<int> v2)
{
    vector<int> :: iterator it;
    
  it = search(v1.begin(), v1.end(), v2.begin(), v2.end());
    
    if(it != v1.end())
    {
        cout<<"the sequence is present at "<< *it;
    }
    else
    {
        cout<<"is not present";
    }
    return 0;
}

int main(){
    vector<int> a;
    int n,element,i,d;
    
    cin>>n;
    
    for(i=0;i<n;++i)
    {
        cin>>element;
        a.push_back(element);
    }
    
    display(a);
    cout<<endl;
    
    a.pop_back();
    
    display(a);
    
    cout<<endl;
    // cout<<i<<endl;
    
    vector<int> :: iterator b;
    b=a.begin();
    cout<<*b<<endl;
    
    b=a.end();
    cout<<*b<<endl;
    
    vector<int> vect;
    
    cin>>n;
    
    for(i=0 ; i<n ; i++)
    {
        cin>>element;
        vect.push_back(element);
    }    
    
    display(vect);
    
    cout<<endl;
    
    search(a,vect);
    
         
    return 0;
}
