#include<iostream>
#include<vector>
using namespace std;

int displayF(int n)
{
    vector<int> a;
    int i;
    int element;
    a.push_back(0);
    a.push_back(1);
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    for(i=2;i<n;i++)
    {
        element=a.at(i-1)+a.at(i-2);
        a.push_back(element);
        cout<<a[i]<<endl;
    }
    return a[i-1];
}



int main(){
    // vector<int> a;
    int n,a;
    
    cin>>n;
    
    a=displayF(n);
    cout<<a<<endl;
    return 0;
}
