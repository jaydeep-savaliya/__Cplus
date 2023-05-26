#include <bits/stdc++.h>
using namespace std;
 
bool isSafe(vector<vector<int>> &board,int x,int y,int n){
    for(int row=0;row<x;row++){
        if(board[row][y]==1){
            return false;
        }
    }
    int row = x;
    int col = y;
    while(row>=0 && col>=0){
        if(board[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    row = x;
    col = y;
    while(row<=0 && col<n){
        if(board[row][col]==1){
            return false;
        }
        row--;
        col++;
    } 

}
bool nqueen(vector<vector<int>> &board,int n,int x){
    if(x>=n){
        return true;
    }
    for(int col=0;col<n;col++){
        if(isSafe(board,x,col,n)){
            board[x][col]=1;
            if(nqueen(board,n,x+1)){
                return true;
            }
            board[x][col]=0;
        }
    }
    return false;
}
int main(){
    int n = 4;
    vector<vector<int>> board(n,vector<int> (n,0));
    nqueen(board,n,0);
    for(auto x:board){
        for(auto y:x){
            cout<<y<< " ";
        }cout<<endl;
    }
}