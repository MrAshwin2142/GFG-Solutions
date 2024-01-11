//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string S, int K) {
        if(S.size()==K)return "0";
       string st="";
       for(int i=0; i<S.size(); i++){
            while(st.size()>0 && K>0 && st.back()>S[i]){
                    st.pop_back();
                       K--;
                }
            st+=S[i];
       }
       while(K>0 && st.size()>0){
           st.pop_back();
           K--;
       }
       int i = 0;
       while(st[i]=='0' && i<st.size()){
           i++;
       }
      if(i==st.size())return "0";
      return st.substr(i);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends