#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "daccad";
    //output = "acddca"
    int n = s.length();
    string half = s.substr(0 , n/2);

    sort(half.begin() , half.end());

    string revhalf = half;
    reverse(begin(revhalf) , end(revhalf));

    string mid = "";
    if(n % 2 != 0){
        mid += s[n/2];
    }

    cout<<half + mid + revhalf<<endl;

}