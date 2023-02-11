#include <iostream>
#include <set>
#include <vector>
using namespace std;



//class Node{
//public:
//    int a;
//    int b;
//};


class Node{
    public:
        char alphabet = NULL;
        int count;
        int res;
        int* right;
        int* left;
};

//class res_node{
//    public:
//    int res;
//    int* left;
//    int* right;
//
//};

void void_freq_table(string a){
    vector<pair<char,int>> v;
    set<char> unique;
    multiset<char> total;
    for(int i=0;i<a.length();i++){
        unique.insert(a[i]);
        total.insert(a[i]);
    }
    
    for(auto a: unique){
        cout<<a<<" : "<<total.count(a)<<endl;
        v.push_back(make_pair(a,total.count(a)));

    }
}

vector<pair<char, int>> freq_table(string a){
    vector<pair<char,int>> v;
    set<char> unique;
    multiset<char> total;
    for(int i=0;i<a.length();i++){
        unique.insert(a[i]);
        total.insert(a[i]);
    }
    
    for(auto a: unique){
        v.push_back(make_pair(a,total.count(a)));
    }
    
    return v;
}
