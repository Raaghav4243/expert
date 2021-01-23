// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<limits>
#include <bits/stdc++.h>
using namespace std;

//things learned
// cant assign value in vector like array
// iterator + n   n is the position u want
// if iterator access address with no value then assigned 0 to that address


vector<int> findmax( vector<int> a )
{
    vector<int> max = { INT_MIN , INT_MIN , INT_MIN };
    vector<int> :: iterator it;
    vector<int> :: iterator k;
    k = max.begin() - 1;
    int i;
    for ( i = 0 ; i < 3 ; i++ )
    {
        k++;
        for (int j = 0 ; j < a.size() ; j++ )
        {
            if ( a[j] > max[i] )
            {
            // max.push_back(max[j]);
            *k = a[j];
            }
            else 
            {
                continue;
            }
        }
        it = find (a.begin(), a.end(), max[i]);        
        a.erase(it);
        cout << max[i] << "   ";
    }
    return { max[2] , max[1] , max[0] };
}
    

int main()
{
    vector<int> a = {334,24,23,235,325,325,235,3232,423,4,24,23423,523,53,53,32,4};
   
    findmax(a);
    
    return 0;
}
