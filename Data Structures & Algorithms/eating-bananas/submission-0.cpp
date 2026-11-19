class Solution {
private:
    int divisor_sum(vector<int> piles, int n){
        int sum = 0;
        for(int i = 0; i < piles.size(); i++){
            sum += ceil(piles[i] + n - 1)/ n;
        }
        return sum;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int mini = INT_MAX;
        while(low <= high){
            int mid = low + (high-low) / 2;
            if(divisor_sum(piles,mid) <= h){
                high = mid-1;
                mini = min(mini , mid);
            }
            else{
                low = mid + 1;
            }
        }
        return mini;
    }
};
