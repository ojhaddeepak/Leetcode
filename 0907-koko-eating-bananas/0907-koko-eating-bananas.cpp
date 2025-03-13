class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1 ;
        int r = *std::max_element(piles.begin(), piles.end());
        while(l<r){
            int mid = (l+r)>>1;
            int s = 0;
            for(int x : piles){
                s+=(x+mid-1)/mid;
            }
            if(s<=h){
                r = mid;

            }
            else{
                l = mid + 1;

            }

        }
        return l;
    }
};