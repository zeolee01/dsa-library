// Contributed by - Aditya Ray <adityadns03@gmai.com>

#include<bits/stdc++.h>
using namespace std;

int main() {
  
  int n;
  cin>>n;


  int arr[n];
  int maxno=INT_MIN;
  for(int i=0;i<n;i++) {
     cin>>arr[i];
     maxno=max(maxno,arr[i]);
  }

  int countarr[maxno+1]={0};

  for(int i=0;i<n;i++) {
    countarr[arr[i]]=countarr[arr[i]]+1;
  }

  int j=0;  // for main arr
  int i=0;  // for countarr

  while(i<=maxno) {
       if(countarr[i]!=0) {
           arr[j]=i;
           countarr[i]=countarr[i]-1;
           j++;
       } 
       else
       i++;
  }

  for(int h=0;h<n;h++) {
     cout<<arr[h]<<" ";
  }
  
  return 0;
}
