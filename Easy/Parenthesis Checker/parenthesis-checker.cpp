//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        for(char i:x){
            if(st.empty()) st.push(i);
            else if(st.top()=='[' && i==']') st.pop();
            else if(st.top()=='(' && i==')') st.pop();
            else if(st.top()=='{' && i=='}') st.pop();
            else st.push(i);
        }
        return st.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends