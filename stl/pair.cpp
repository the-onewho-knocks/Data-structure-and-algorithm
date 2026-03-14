//pairs and vectors in standard template library
#include <iostream>
#include <iterator>
#include <array>
using namespace std;

int main(){
    pair<int , string> p;
    p = make_pair(2 , "hello");
    p = {2 , "abcd"};
    pair<int , string> &p1= p;

  //  cout << p.first<<" "<<p.second;

    int a[] = {1,2,3,4,5};
    int b[] = {2,3,5,6};
    int n = size(a);

    pair<int , int> p_array[4];
    p_array[0] = {1 , 2};
    p_array[1] = {9 , 7};
    p_array[2] = {18 , 25};
    p_array[3] = {11 , 28};

   swap(p_array[0] , p_array[1]);
    for(int i = 0 ; i < size(p_array) ; ++i){
        cout<<p_array[i].first << " " << p_array[i].second<<endl ;
    }


}