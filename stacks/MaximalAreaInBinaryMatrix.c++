#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int > PreviousSmaller(vector<int> arr,int n)
    {
        vector<int> res;
        stack<pair<int,int>> st;
        for(int i=0;i<n;i++)
        {
            if(st.size()==0)
                res.push_back(-1);
            else if(st.size()>0 and st.top().first<arr[i])
                res.push_back(st.top().second);
            else if(st.size()>0 and st.top().first>=arr[i])
            {
                while(st.size()>0 and st.top().first>=arr[i])
                    st.pop();
                if(st.size()==0)
                    res.push_back(-1);
                else
                    res.push_back(st.top().second);
            }
            st.push({arr[i],i});
        }
        return res;
    }
    vector<int> NextSmaller(vector<int> arr,int n)
    {
        vector<int> res;
        stack<pair<int,int>> st;
        for(int i=n-1;i>=0;i--)
        {
             if(st.size()==0)
                res.push_back(n);
            else if(st.size()>0 and st.top().first<arr[i])
                res.push_back(st.top().second);
            else if(st.size()>0 and st.top().first>=arr[i])
            {
                while(st.size()>0 and st.top().first>=arr[i])
                    st.pop();
                if(st.size()==0)
                    res.push_back(n);
                else
                    res.push_back(st.top().second);
            }
            st.push({arr[i],i});
        }
        reverse(res.begin(),res.end());
        return res;
    }
    int CalculateArea(vector<int> arr,int n)
    {
    vector<int> Rightin=NextSmaller(arr,n);
    vector<int> Leftin=PreviousSmaller(arr,n);
    int area=INT_MIN;
    for(int i=0;i<n;i++)
    {
        area=max(area,(Rightin[i]-Leftin[i]-1)*arr[i]);
    }
    return area;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();int z=INT_MIN;
            vector<int> fin;
            for(int i=0;i<matrix[0].size();i++)
            {
                fin[i]=matrix[0][i];

            }
            z=CalculateArea(fin,fin.size());
            for(int i=1;i<matrix.size();i++)
            {
                for(int j=0;j<matrix[j].size();j++)
                {
                    if(matrix[i][j]=='0')
                        fin[i]=0;
                    fin[i]=matrix[j][i]-'0';                
                }
                z=max(z,CalculateArea(fin,fin.size()));
            }
        return z;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int rows,columns;
        cin >> rows >> columns;
        vector<vector<char>> arr(rows);
        for (int i = 0; i < rows; i++)
        {
            for(int j=0;j<columns;j++)
            {
                cin >> arr[i][j];
            }
        }
        int res = maximalRectangle(arr);
        cout<< res << endl;
    }
    return 0;
}