//
//  main.cpp
//  huffman compressor
//
//  Created by Adhitya Nantish on 10/02/23.
//


#include <iostream>
#include "string_collection.cpp"
using namespace std;


int main(int argc, const char * argv[]) {
    
    vector<pair<char,int>> table;
    table  = freq_table("pranav");
    
    for(auto b:table){
        cout<<b.first<<" = "<<b.second<<endl;
  
    }
  
}
