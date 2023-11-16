//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    string findString(int n, int k) {

       string ans="";

       unordered_set<string>st;

       for(int i=0;i<n;i++)ans+='0';

       st.insert(ans);

       string temp;

       for(int i=k-1;i>=0;i--){

           temp=ans.substr(ans.size()-n+1,n-1);

           temp+=to_string(i);

           if(st.find(temp)==st.end()){

               ans+=to_string(i);

               i=k;

               st.insert(temp);

           }

       }

       return ans;

    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        cin>>N>>K;
        Solution ob;
        string ans = ob.findString(N, K);
        int ok=1;
        for(auto i:ans){
            if(i<'0'||i>K-1+'0')
                ok=0;
        }
        if(!ok){
            cout<<-1<<endl;
            continue;
        }
        unordered_set<string> st;
        for(int i=0;i+N-1<ans.size();i++){
            st.insert(ans.substr(i,N));
        }
        int tot=1;
        for(int i=1;i<=N;i++)
            tot*=K;
        if(st.size()==tot)
        {
            cout<<ans.size()<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
} 
// } Driver Code Ends