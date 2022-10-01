#include<iostream>

using namespace std;


void showArray(int a[],int n){
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}



void selectionSort(int *a ,int n){

    int temp, indexOfMin;
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin = i;

        for (int j = i+1; j < n; j++)
        {
            if(a[j]<a[indexOfMin]) indexOfMin = j;

        }
        temp = a[i];
        a[i] = a[indexOfMin];
        a[indexOfMin] = temp;
        
        
    }
    
}

int main(){

   int a[] = {12,16,2,4,128,65,90,23};
   int b[] = {1,2,3,4,5,6};
   int n = sizeof(a)/sizeof(a[0]);
   int p = sizeof(b)/sizeof(b[0]);

   selectionSort(a,n);
   selectionSort(b,p);
   showArray(a,n);
   showArray(b,p);



return 0;
}
