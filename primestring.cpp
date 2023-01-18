#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) 
{
    int i, flag = 0;
    if(n==1 || n<=0)
    return 0;
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


string primestring(string str)
{
    int count=0,count1=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=str[i+1])
        count++;
        if(str[i]==str[i+1])
        count1++;
        if(isPrime(count)&&isPrime(count1))
        return "prime";
        else
        return "not prime";

    }
}
//aabbb
int main()
{
    string str;
    cin>>str;
    cout<<primestring(str);
    
}