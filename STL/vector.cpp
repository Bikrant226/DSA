#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(3,8);
    cout<<v[2]<<"\n";

    // To Print elements of vector
    vector<int> arr={2,5,7,4,8};
    for(auto it=arr.begin();it !=arr.end();it++){
        cout<<*it<<"-";
    }
    cout<<"\n";

    //To insert into vector
    arr.push_back(20);
    arr.push_back(41);
    arr.emplace_back(-8);
    cout<<"Insertion:\n";
    for(auto it=arr.begin();it !=arr.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\n";

    //Deleting a single element, we will delete 7
    arr.erase(arr.begin()+2);
    cout<<"Deleting single element:\n";
    for(auto it=arr.begin();it !=arr.end();it++){
            cout<<*it<<" ";
    }
    cout<<"\n";

    //Deletion a range of elements, we will delete from 3rd index to  5th index
    arr.erase(arr.begin()+3,arr.begin()+4);
    cout<<"Deleting range of elements:\n";
    for(auto it=arr.begin();it !=arr.end();it++){
            cout<<*it<<" ";
    }
    cout<<"\n";

    //Insertion
    
    return 0;
}
