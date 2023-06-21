#include <bits/stdc++.h>
using namespace std;
bool checkStraightLine(vector<vector<int>> &coordinates){
    int n = coordinates.size();
    int x = coordinates[1][0] - coordinates[0][0];
    int y = coordinates[1][1] - coordinates[0][1];
    double slop;
    if(x){
        slop = y/x;
    }
    int i = 0;
    while(i<n){
        x=coordinates[i][0]-coordinates[i-1][0];
        y = coordinates[i][1]-coordinates[i-1][1];
        double temp;
        if(x){
            temp = y/x;
        }
        if(temp!=slop) {
            return false;
        } 
        i++;
    }
    return true;
}
int main(){
    vector<vector<int>> coordinates{{1,1},{2,2},{3,4},{4,5},{5,6},{7,7}};
    bool ans = checkStraightLine(coordinates);
    cout<<ans;
}