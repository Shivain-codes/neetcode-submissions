class Solution {
public:
    int speed(vector<int>& piles, int hourly){
        int n = piles.size();
        int totalhrs=0;
        for(int i=0; i<n; i++){
            totalhrs+=ceil((double)piles[i]/(double)hourly);
        }
        return totalhrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid =low+(high-low)/2;
            int totalhrs=speed(piles,mid);
            if(totalhrs<=h) high=mid-1;
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};
