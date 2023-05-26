#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int n = matrix.size();
    int target = 11;
    int m = matrix[0].size();
    vector<int> start(m);
    for(int i=0;i<n;i++){
        start[i] = matrix[i][0];
    }
  
    int row = upper_bound(start.begin(),start.end(),target) - start.begin()-1;
    cout<<row<<endl;
    cout<< binary_search(matrix[row].begin(),matrix[row].end(),target);
}