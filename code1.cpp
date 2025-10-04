class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int l=height[0];
        int r=height[j];
        int maxi=0;

        while(i<j){
            if(l<=r){
                maxi=max(maxi,l*(j-i));
                i++;
                l=max(l,height[i]);
            }
            else{
                maxi=max(maxi,r*(j-i));
                j--;
                r=max(r,height[j]);
            }
        }
        
        return maxi;
    }
};
