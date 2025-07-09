#include<iostream>
#include<list>
#include<vector>

using namespace std;

int main(){
    int arr[]={1,3,5,7,9,11};
    list<int> l;
    vector<int> vec;
    int k=3,i=0,j=0,num=0;

    while(j<sizeof(arr)/sizeof(arr[0])){
        if(arr[j]%2 != 0){
            l.push_back(arr[j]);
        }
        if(j-i+1<k)
            j++;
        else if(j-i+1==k){
            if(l.size()==0){
                vec.push_back(0);
            }
            else{
                vec.push_back(l.front());
                if(arr[i]==l.front())
                   { l.pop_front();}
            }
            i++;
            j++;
        }    
    }
    for(auto a: vec){
        cout<<a<<"\n";
    }

    return 0;
}