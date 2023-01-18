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


void sort(int n,int a[])
{
    int b[n],c[n];
    for(int i=0;i<n;i++)
    {
        if(isPrime(a[i]))
        {
            int j;
            for(j=0;j<n;j++)