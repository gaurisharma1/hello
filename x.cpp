// #include<bits/stdc++.h>
// using namespace std;

// int distFactors(int num)
// {
//     set<int> t;
//     while (num % 2 == 0){
//         t.insert(2);
//         num /=2;
//     }
//     for (int i = 3; i <= sqrt(num); i = i + 2){
//         while (num%i == 0){
//             t.insert(i);
//             num = num/i;
//         }
//     }
//     if(num > 2) t.insert(num);
//     return t.size();
// }
// int main(){
//     int x,y;
//     cin>>x>>y;
//     for(int i=x; i<=y; i++){
//         if(distFactors(i)==2) cout<<i<<" ";
//     }

// }




#include<bits/stdc++.h>
using namespace std;

long long greatest(int num) {
   long long ans = -1;
   while (num % 2 == 0) {
      ans = 2;
      num /= 2;
   }
   for (int i = 3; i <= sqrt(num); i += 2){
      while (num % i == 0){
         ans = i;
         num = num / i;
        }
   }
   if (num > 2)
   ans = num;
   return ans;
}

long long jag(int num){
    if(num%2==0)  return 2;
    for(int i=3; i<=sqrt(num); i+=2){
        if(num%i==0)  return i;
    }   
    return num;
}
int main(){

    int a[100001]={};
    int arr[100001]={};

    for(int i=1;i<=100000; i++){
        a[i]=greatest(i);
    }
    for(int i=1;i<=100000; i++){
        arr[i]=jag(i);
    }
    int t;  
    cin>>t;
    while(t--){
        int sp,ep,p;  
        cin>>sp>>ep>>p;
        int count=0;
        for(int i=sp; i<=ep; i++){
            if(a[i]<=p && arr[i]<=p)
            count++;
        }
        if(count!=0)    
            cout<<count<<endl;
        else            
            cout<<-1<<endl;
    }
    return 0;

}