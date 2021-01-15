#include<iostream>
#include<vector>
using namespace std;

int displayF(int n)
{
    int a[n];
    int i;
    int element;
    a[0]=0;
    a[1]=1;
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
        // a.push_back(element);
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
