#include<iostream>
#include<list>
using namespace std;

void display(list<int> ls){
   for(auto it=ls.begin();it != ls.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
}

int main(){
    list<int> ls;
    ls.push_back(2);
    display(ls);
    ls.emplace_back(4);
    display(ls);
    return 0;
}