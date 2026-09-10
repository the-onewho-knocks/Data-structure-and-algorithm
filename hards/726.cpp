//not solved
#include<bits/stdc++.h>
using namespace std;
/*
Example 1:

Input: formula = "H2O"
Output: "H2O"
Explanation: The count of elements are {'H': 2, 'O': 1}.

Example 2:

Input: formula = "Mg(OH)2"
Output: "H2MgO2"
Explanation: The count of elements are {'H': 2, 'Mg': 1, 'O': 2}.

Example 3:

Input: formula = "K4(ON(SO3)2)2"
Output: "K4N2O14S4"
Explanation: The count of elements are {'K': 4, 'N': 2, 'O': 14, 'S': 4}.

*/
class Solution{
    public:
    string countOfAtoms(string formula){
        stack<map<string , int>> st;
        st.push({});

        int i = 0;
        int n = formula.size();

        while(i < n){
            if(formula[i] == '('){
                st.push({});
                i++;
            }
            else if(formula[i]== ')'){
                i++;

                int num = 0;
                while(i < n && isdigit(formula[i])){
                    num = num * 10 + (formula[i] - '0');
                    i++;
                }

                if(num == 0) num == 1;

                auto cur = st.top();
                st.pop();

                for(auto &[atom , count] : cur){
                    st.top()[atom] += count * num;
                }
            }
            else{
                string atom;
                atom += formula[i++];

                while(i < n && islower(formula[i])){
                    atom += formula[i++];
                }

                int num = 0;
                while(i < n && isdigit(formula[i])){
                    num = num * 10 + (formula[i] - '0');
                    i++;
                }

                if(num == 0 ) num = 1;

                st.top()[atom] += num;

            }

            string ans;
            for(auto &[atom , count] : st.top()){
                ans += atom;
                if(count > 1){
                    ans += to_string(count);
                }
            }

            return ans;
        }
    }
};