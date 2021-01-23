#include<iostream>
using namespace std;

int main()
{
    int a;
    int* pointer1;
    
    int b;
    int* pointer2;
    
    cin >> a;
    pointer1 = &a;
    
    cin >> b;
    pointer2 = &b;
    
    cout << " a = " << a << endl;
    cout << " a by address = " << *pointer1 << endl;
    
    cout << " b = " << b << endl;
    cout << " b by address = " << *pointer2 << endl;
    
    pointer1 = pointer2;
    
    cout << *pointer1 << endl;
    cout << a;
    
    return 0; 
}