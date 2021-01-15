#include<iostream>
#include <vector>
using namespace std;

 

vector<int> twoNumberSum(vector<int> &v,int target)
{
int a[2],j,z;
for(j=0;j<v.size();j++)
	{
		for(z=j+1;z<v.size();z++)
		{
			if(v[j]+v[z]==target)
			{
				return vector<int>{v[j],v[z]};
				
			}
			else
			{
				continue;
			}
		}
	}
	return {};
}

void display (vector<int> &v)
{
	
	for(int i=0;i<v.size();++i)
	{
		cout<<v[i]<<"";	
	}	
}


 int main(){
  int n,i,element,target;
	vector<int> vect,k;
	int a[2];
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>element;	
		vect.push_back(element);
	}
	display(vect);
	
	cin>>target;
	
	k=twoNumberSum(vect, target);
	
	display(k);
	return 0;
}


