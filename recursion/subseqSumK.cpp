#include <bits/stdc++.h>

using namespace std;

void subseq(int a[], int ind, vector<int>&ds,int n,int k,int s)
{
     if(ind==n) 
     {
          if(s==k)
          {
          for(int i=0;i<ds.size();i++)
          cout<<ds[i]<<" ";
          if(ds.empty())cout<<0;
          cout<<endl;
          }
          return;
     }
     
     ds.push_back(a[ind]);
     s+=a[ind];
     subseq(a,ind+1,ds,n,k,s);
     s-=a[ind];
     ds.pop_back();
     subseq(a,ind+1,ds,n,k,s);
     
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
   
   subseq(a,0,ds,n,k,0);
   
   return 0;
}