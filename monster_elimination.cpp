#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int>dist,speed;
        Solution(vector<int> &dist,vector<int> &speed){
            this->dist = dist;
            this->speed = speed;
        }
        int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        priority_queue<float, vector<float>, greater<float>> heap;
        for (int i = 0; i < dist.size(); i++) {
            heap.push((float) dist[i] / speed[i]);
        }
        int ans = 0;
        while (!heap.empty()) {
            if (heap.top() <= ans) {
                break;
            }
            
            ans++;
            heap.pop();
        }
        return ans;
    }

};
int main(int argc, char const *argv[])
{
    vector<int>dist{1,3,4};
    vector<int>speed{1,1,1};
    Solution obj(dist,speed),*ptr;
    ptr = &obj;
    int ans = ptr->eliminateMaximum(dist,speed);
    cout<<ans;
    return 0;
}
