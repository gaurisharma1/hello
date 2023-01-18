#include <bits/stdc++.h>
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
    int sum;
    cin>>sum;
    for(int i=2;i<sum;i++){
        int m=sum-i;
        if(isPrime(m) && isPrime(i))
        cout<<i<<" "<<m<<endl;
    }
    return 0;
}