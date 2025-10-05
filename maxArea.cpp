class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=height.size();
        int i=0;
        int j=l-1;
        int area=0;
        while(i<j){
            area=max(area,(j-i)*min(height[j],height[i]));
            if(height[i]<height[j]){
            i++;
        }
        else{
            j--;
        }
        }
        
        return area;
    }
};
