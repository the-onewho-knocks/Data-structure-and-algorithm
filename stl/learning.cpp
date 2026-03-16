#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{

    // question 1 answer
    //  vector<int> v = {1,2,3,4,5};
    //   vector<int> k;
    //  for(int i = v.size()-1 ; i < v.size() ; --i){

    //     k.push_back(v[i]);
    // }

    // for(int i = 0 ; i < k.size() ; ++i){
    //     cout<<k[i]<<endl;
    // }

    // question 2 answer
    //  vector<int> v = {1,2,3,4,5,6};
    //  for (int i = 0 ; i<v.size() ; ++i){
    //      if (v[i]%2==0){
    //          v.erase(v.begin()+i);
    //      }
    //  }

    // for(int i = 0 ; i<v.size() ; ++i){
    //     cout<<v[i]<<endl;
    // }

    // question 3
    // vector<pair<int, int>> v = {{1, 2}, {4, 5}, {3, 7}, {2, 1}};
    // auto maxsum = -1;
    // pair<int , int> ans;
    // for (int i = 0; i < v.size(); ++i) {
    //     int sum = v[i].first + v[i].second;
    //     if(sum > maxsum){
    //         maxsum = sum;
    //         ans = v[i];
    //     }
    // }
    // cout << ans.first << " " << ans.second;

    // vector<int> v ={4,7,2,9,5};
    // auto a = max_element(v.begin() , v.end());
    // int k = *a;
    // cout<<k<<endl;

    //     vector<int> v = {1,2,3,2,4,2 };
    //     int num = 2;
    //    auto it = v.erase(remove(v.begin() , v.end() , num),v.end());
    //    int k = *it;
    //    cout<<k<<endl;
    //     for (int i = 0 ; i < v.size() ; ++i){
    //         cout<<v[i]<<endl;
    //     }

    // vector<int> v = {4,7,2,9,5};
    //  auto k =  max_element(v.begin() , v.end());
    // int o = *k;
    // cout<<o;

    // vector<int> v = {1,2,2,3,2,4};
    // int x = 2;
    // auto k =  count(v.begin() , v.end(), x);
    // int o = k;
    // cout<<o;

    // vector<int> v = {5,1,3,2,4};
    // sort(v.begin() , v.end());
    // for (int i = 0 ; i<v.size() ; ++i){
    //     cout<<v[i]<<endl;
    // }

    // vector<int> v = {1,2,3,4,5};
    // int k = 2;
    // rotate(v.begin(),v.end()-k , v.end());
    // for(int i = 0 ; i<v.size() ; ++i){
    //     cout<<v[i];
    // }

    // vector<int> v;
    // v = {9,7,4,2,8,5};
    // sort(v.begin()+1 , v.begin()+5);
    // for(int i = 0 ; i<v.size(); ++i){
    //     cout<<v[i]<<endl;
    // }

    // vector<int> v;
    // v = {1, 2, 3, 4, 5, 6};
    // reverse(v.begin(), v.begin() + v.size() / 2);
    // for (int i = 0; i < v.size(); ++i)
    // {
    //     cout << v[i] << endl;
    // }

    // vector<int> v;
    // v = {1,3,2,3,4,3,5};
    // int k = 3;
    // v.erase(remove(v.begin() , v.end() ,k ),v.end());
    // for (int i = 0; i < v.size(); ++i)
    // {
    //     cout << v[i] << endl;
    // }

    // vector<int> v;
    // v = {5, 8, 2, 7, 4, 9};
    // vector<int> l(v.begin()+2, v.end()-1);
    // for (int i = 0; i < l.size(); ++i)
    // {
    //     cout << l[i] << endl;
    // }

    // vector<int> v;
    // v = {1 ,2 ,3 ,4 ,5};
    // rotate(v.begin() ,v.begin()+2 ,v.end());
    // // [1 2 3] [4 5]  now we rotate both of them
    // for(int k : v){
    //     cout<<k<<" ";
    // }

    // vector<int> v;
    // v = {10,20,30,40,50};
    // int x = 21;
    // auto it = lower_bound(begin(v) , end(v) , x);
    // cout<<*it<<endl;

    // vector<int> v;
    // v = {10,20,30,40,50};
    // auto it = max_element(begin(v) , end(v));
    // cout<<*it<<endl;

    vector<int> v;
    v = {10, 20, 30, 40, 50};
    int it = accumulate(begin(v), end(v) , 0);
    cout << it << endl;
}