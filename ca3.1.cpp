#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool isPrime(int n)
{
     if (n <= 1)
          return false;
     if (n <= 3)
          return true;

     if (n % 2 == 0 || n % 3 == 0)
          return false;

     for (int i = 5; i * i <= n; i = i + 6)
          if (n % i == 0 || n % (i + 2) == 0)
               return false;

     return true;
}

int Prime2(int N)
{

     if (N <= 1)
          return 2;

     int prime = N;
     bool found = false;

     while (!found)
     {
          prime++;

          if (isPrime(prime))
               found = true;
     }

     return prime;
}
int nearprime(int n)
{
     for (int i = n - 1; i > 1; i--)
     {
          if (isPrime(i))
          {
               return i;
          }
     }
     return -1;
}

bool isp(int n, int p)
{
     int maximum = -1;

     while (!(n % 2))
     {

          maximum = max(maximum, 2);
          n /= 2;
     }

     for (int i = 3; i <= sqrt(n); i += 2)
     {

          while (n % i == 0)
          {

               maximum = max(maximum, i);
               n /= i;
          }
     }

     if (n > 2)
          maximum = max(maximum, n);

     return (maximum <= p);
}

int main()
{
     int mx = -1e5;
     int n;
     cin >> n;
     int v[n];
     for (int i = 0; i < n; i++)
          cin >> v[i];
     int p;
     cin >> p;

     for (auto x : v)
     {
          if (isp(x, p))
          {
               mx = max(mx, x);
          }
     }
     if (mx < 0)
     {
          cout << 0;
          return 0;
     }

     int a = Prime2(mx);
     int b = nearprime(mx);
     if (abs(mx - a) > abs(mx - b))
     {
          cout << b;
     }
     else
     {
          cout << a;
     }
     return 0;
}