#include<bits/stdc++.h>
using namespace std;;

vector<string> generateFullPalindromes(string s) {
    vector<string> result;
    unordered_map<char, int> freq;

    for (char c : s) freq[c]++;

    // 1. Count odd frequencies and build the first half string
    int oddCount = 0;
    char midChar = '\0';
    string half = "";

    for (auto& [ch, count] : freq) {
        if (count % 2 != 0) {
            oddCount++;
            midChar = ch;
        }
        half.append(count / 2, ch); // Take half of each character count
    }

    // If more than 1 character has an odd count, no palindrome can be formed
    if (oddCount > 1) return {};

    // 2. Sort half to start std::next_permutation from the smallest order
    sort(half.begin(), half.end());
    string mid = (oddCount == 1) ? string(1, midChar) : "";

    // 3. Generate every unique arrangement of the half string
    do {
        string revHalf = half;
        reverse(revHalf.begin(), revHalf.end());
        result.push_back(half + mid + revHalf);
    } while (next_permutation(half.begin(), half.end()));

    return result;
}

int main() {
    string s = "abba";
    vector<string> palindromes = generateFullPalindromes(s);

    int k = 2;
    //cout<<palindromes.size();

    string ans = palindromes[k - 1];

    cout<<ans;
}

// vector<string> numsofpalindrome(string s){
//     vector<string> palin;
//     palin.push_back(s);

//     while(true){

//     }
// }

// int main(){
//     string s = "abba";
//     int k = 2;
//     vector<string> palin;
//     int n = s.size();
//     palin.push_back(s);

//     string half = s.substr(0 , n/2);
//     sort(begin(half) , end(half));
//     string revhalf = half;
//     reverse(revhalf.begin() , revhalf.end());

//     string mid = "";
//     if(n % 2 != 0){
//         mid += s[n/2];
//     }

//     palin.push_back(half + mid + revhalf);

//    for(string x : palin) cout<<x<<endl;

//     string ans = palin[k - 1];

//     cout<<ans;

// }