#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "ABAB";
    string a = s;
    int k = 2;
    int maxi = 1;
     int count = 1;
    int left = 0;

    for(int right = 1 ; right < s.size() ; ++right){

        
    }

        cout<<a<<endl;

    for (int i = 1; i < a.size(); i++) {
        if (a[i] == a[i - 1]) {
            count++;
        } else {
            maxi = max(maxi, count);
            count = 1;
        }
    }
        maxi = max(maxi, count);


    cout<<maxi;
}

  //  sort(a.rbegin() , a.rend());
  //  cout<<a<<endl;

    // int i = 0;
    // while( i < k){
    //     cout<<i<<endl;
    //     i++;
    // }

    // for(int i = 0 ; i < s.size() ; i++){

    //     while(--k){
    //         if(a[i] != a[i + 1]){
    //             a[i + 1] = a[i];
    //         }
    //     }

    // }

  //  cout<<a<<endl;
