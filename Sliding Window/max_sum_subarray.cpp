#include<iostream>
using namespace std;

int main(){
    int arr[]={5,2,3,6,9,8,1};
    int k=3,i=0,j=0,sum=0,mx=INT_MIN;

    while(j<sizeof(arr)/sizeof(arr[0])){
        sum+=arr[j];
        if(j-i+1<k)
            j++;
        else if(j-i+1==k){
            mx=max(mx,sum);
            sum -=arr[i];
            i++;
            j++;
        }    
    }

    cout<<"The maximum sum of subarray of size K=3 is: "<< mx;
    return 0;
}