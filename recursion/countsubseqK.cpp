#include <bits/stdc++.h>

using namespace std;

int subseq(int a[], int ind, vector<int>&ds,int n,int k,int s)
{
     if(ind==n) 
     {
          if(s==k)
          return 1;
          else
          return 0;
     }
     
     ds.push_back(a[ind]);
     s+=a[ind];
     int l=subseq(a,ind+1,ds,n,k,s);
     s-=a[ind];
     ds.pop_back();
     int r=subseq(a,ind+1,ds,n,k,s);
     return l+r;
}

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
   int k;
   cin>>k;
   vector<int>ds;
   
   int ans=subseq(a,0,ds,n,k,0);
   cout<<ans;
   return 0;
}