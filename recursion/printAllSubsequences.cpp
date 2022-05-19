#include <bits/stdc++.h>

using namespace std;

void subseq(int a[], int ind, vector<int>&ds,int n)
{
     if(ind>=n) 
     {
          for(int i=0;i<ds.size();i++)
          cout<<ds[i]<<" ";
          if(ds.empty())cout<<"empty";
          cout<<endl;
          return;
     }
     
     ds.push_back(a[ind]);
     subseq(a,ind+1,ds,n);
     ds.pop_back();
     subseq(a,ind+1,ds,n);
     
}

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
   vector<int>ds;
   
   subseq(a,0,ds,n);
   
   return 0;
}