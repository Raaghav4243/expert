#include<iostream>
#include<vector>
using namespace std;

bool search(vector<int> v1, vector<int> v2)
{
    int i,j=0;
    for (i=0;i<v2.size();i++)
    {
        for (j=j;j<v1.size();j++)
        {
            if(v2[i]==v1[j])
            {
                j=j+1;
                if(i==v2.size()-1)
                {
                    return true;
                }
                break;
            }
            
        }
        if(j==v1.size() && i==v2.size() && v2[i]!=v1[j])
        {
            return false;
        }
        
    }
}


void display(vector<int> v)
{
    for ( int i=0; i<v.size(); i++)
    {
        cout<< v[i];
    }
    cout << endl;
}

int main ()
{
    vector<int> v1,v2;
    int i,n,element;
    bool answer=false;
    
    cout.setf(std::ios_base::boolalpha);
    
    cin>>n;
    
    for ( i=0; i<n; i++)
    {
        cin>>element;
        v1.push_back(element);
    }
    
    display(v1);
    
    cin>>n;
    
    for (i=0;i<n;i++)
    {
        cin>>element;
        v2.push_back(element);
    }
    
    display(v2);
    
    answer=search(v1,v2);
    cout<<answer<<endl;
    

    return 0;    
}
