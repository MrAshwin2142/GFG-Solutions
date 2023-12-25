//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function for finding determinant of matrix.
    int determinantOfMatrix(vector<vector<int> > matrix, int n)
    {
        // code here 
        if(n==1)    return matrix[0][0];
        if(n==2)    return ((matrix[0][0]*matrix[1][1]) - (matrix[1][0]*matrix[0][1]));
        int det = 0;
        for(int i = 0, sign = 1; i < n; ++i, sign *= -1){
            vector<vector<int>> subMatrix;
            for(int j = 1; j < n; ++j){
                vector<int> row;
                for(int k = 0; k < n; ++k){
                    if(k == i)  continue;
                    row.push_back(matrix[j][k]);
                }
                subMatrix.push_back(row);
            }
            int sub_matrix_det = determinantOfMatrix(subMatrix, n-1);
            det += (sub_matrix_det * sign * matrix[0][i]);
        }
        return det;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        int result = ob.determinantOfMatrix(matrix, n);
        cout<<result<<endl;
    }
    return 0;
}
// } Driver Code Ends