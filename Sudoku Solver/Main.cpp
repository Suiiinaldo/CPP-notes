#include<bits/stdc++.h>
using namespace std;
void input(vector<vector<char>> &v)
{
    cout<<"Enter the Matrix of Numbers with Blank Spaces filled as Dot.\n";
    for(int i=0;i<9;i++)
    {
        vector<char> layer;
        for(int j=0;j<9;j++)
        {
            char y;
            cin>>y;
            layer.push_back(y);
        }
        v.push_back(layer);
    }
}
void display(vector<vector<char>> &v)
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool isValid(vector < vector < char >> & board, int row, int col, char c) {
  for (int i = 0; i < 9; i++) {
    if (board[i][col] == c)
      return false;

    if (board[row][i] == c)
      return false;

    if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
      return false;
  }
  return true;
}

bool solve(vector < vector < char >> & board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (board[i][j] == '.')
            {
                for (char c = '1'; c <= '9'; c++)
                {
                    if (isValid(board, i, j, c))
                    {
                        board[i][j] = c;
                        if (solve(board))
                            return true;
                        else
                            board[i][j] = '.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}
int main()
{
    vector<vector<char>> v;
    cout<<"Welcome to the Sudoku Solver\n";
    cout<<endl;
    input(v);
    cout<<"\nThe Matrix Entered is\n";
    display(v);
    solve(v);
    cout<<"\nThe Solved Sudoku is\n";
    display(v);
}