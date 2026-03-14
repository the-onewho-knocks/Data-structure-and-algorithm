#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

void printVec(vector<int> v ){
    cout<<v.size()<<endl;
    for(int i = 0 ; i< v.size() ; ++i){
        cout<< v[i]<<endl;
    }
}

int main(){
    vector<int> v ;
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; ++i){
        int x;
        cin>>x;
        v.push_back(x);
    }

    v.pop_back();
    //we can directly copy vector 
    vector<int> v2 = v;
    printVec(v);
} 