
#include<bits/stdc++.h> 
using namespace std; 


class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &a , int N){
        int l=0,r=0;
        
        long s=0,ans=0;
       while(r<N){
           s+=a[r];
          if((r-l+1)==K){
              ans=max(ans,s);
              s-=a[l];
              l++;
              r++;
            }
          else r++;
          
       }
        
        
     return ans;   
    }
};

