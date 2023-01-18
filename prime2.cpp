#include<iostream>
using namespace std;
bool isPrime(int n) 
{
    int i, flag = 0;
    for(i=2; i<=n/2; ++i) {
        if(n%i==0) {
            flag=1;
            break;
        }
    }
    if (flag==0) 
        return true;
    else 
        return false; 
} 

int main()
{
    int n;
    cin>>n;
    if(n<2)
    return 0;
    for(int i=2;i<n;i++)
    {
        if(isPrime(i))
        cout<<i<<" ";
    }
}