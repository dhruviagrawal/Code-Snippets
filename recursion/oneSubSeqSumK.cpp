#include <bits/stdc++.h>

using namespace std;

bool subseq(int a[], int ind, vector<int>&ds,int n,int k,int s)
{
     if(ind==n) 
     {
          if(s==k)
          {
          for(int i=0;i<ds.size();i++)
          cout<<ds[i]<<" ";
          if(ds.empty())cout<<0;
          cout<<endl;
          return true;
          }
          return false;
     }
     
     ds.push_back(a[ind]);
     s+=a[ind];
     if(subseq(a,ind+1,ds,n,k,s)) return true;
     s-=a[ind];
     ds.pop_back();
     if(subseq(a,ind+1,ds,n,k,s)) return true;
     
     return false;
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
   
   bool ans=subseq(a,0,ds,n,k,0);
   
   return 0;
}