// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) {
        // code here 
        int i=0,j=n-1;
        for(;i<j;){
            //person can't be the celebrity
            if(M[i][j]==1)
                i++;
            //check for next person
            else
                j--;
        }
        
        //now person i can be the celebrity
        for(int p=0;p<n;p++){
            if((M[i][p]==1 || M[p][i]==0) && p!=i)
                return -1;
        }
        return i;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends