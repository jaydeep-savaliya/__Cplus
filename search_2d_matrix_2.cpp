#include <bits/stdc++.h>
using namespace std;
bool searchMatrix2(vector<vector<int>> &matrix,int target){
   int last=(matrix[0]).size()-1;

        for(int i=0;i<matrix.size();i++){
            
            if(matrix[i][last]<target) continue;

            for(int start=0;start<matrix[0].size();start++){
                int end=matrix[i].size()-start-1;
                if(matrix[i][start]==target || matrix[i][end]==target) return true;
                if(start>=end)  break;

            }
        }
        
        return false;
}
int main(){
    vector<vector<int>> matrix{{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 5;
    bool ans = searchMatrix2(matrix,target);
    cout<<ans;
}