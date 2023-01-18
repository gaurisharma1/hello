#include <bits/stdc++.h>
using namespace std;
 
void fun(vector<int> s, vector<int> f, int n)
{
    
    vector<pair<int, int> > v;

    priority_queue<pair<int, int>, vector<pair<int, int> >,greater<pair<int, int> > > pq;
 
    for (int i = 0; i < n; i++) {
            pq.push(make_pair(f[i], s[i]));
    }
 
    auto it = pq.top();
    int start = it.second;
    int end = it.first;
    pq.pop();
    v.push_back(make_pair(start, end));
 
    while (!pq.empty()) {
        auto itr = pq.top();
        pq.pop();
        if (itr.second >= end) {
            start = itr.second;
            end = itr.first;
            v.push_back(make_pair(start, end));
        }
    }
    int count = 0; 
    for (auto itr = v.begin(); itr != v.end(); itr++) {
           count++ ;
    }
    cout<<count<<endl;
    
}
 
int main()
{
    int n ;
    cin>>n;
    
    vector<pair<int, int> > v;
    priority_queue<pair<int, int>, vector<pair<int, int> >,greater<pair<int, int> > > pq;

    vector<int> s;
    vector<int> f;
    
    for(int i=0; i<n; i++) {
        int t;
        cin>>t;
        s.push_back(t);
    }
    
    for(int i=0; i<n; i++) {
        int t;
        cin>>t;
        f.push_back(t);
    }

 
    for (int i = 0; i < n; i++) {
            pq.push(make_pair(f[i], s[i]));
    }
 
    auto it = pq.top();
    int start = it.second;
    int end = it.first;
    pq.pop();
    v.push_back(make_pair(start, end));
 
    while (!pq.empty()) {
        auto itr = pq.top();
        pq.pop();
        if (itr.second >= end) {
            start = itr.second;
            end = itr.first;
            v.push_back(make_pair(start, end));
        }
    }
    int count = 0; 
    for (auto itr = v.begin(); itr != v.end(); itr++) {
           count++ ;
    }
    cout<<count<<endl;
 
    return 0;
}