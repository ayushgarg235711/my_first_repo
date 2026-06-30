#include <vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int lp=0,rp=n-1,maxwater=0;
        while(lp<rp){
            int w= rp-lp;
            int ht = min(height[lp],height[rp]);
            int areawt= (w*ht);
            maxwater = max(maxwater,areawt);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxwater;
        
    }
};
