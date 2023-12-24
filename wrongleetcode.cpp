//34. Find First and Last Position of Element in Sorted Array


int firstOcc(vector<int>& arr,int n,int key){
    int s =0 , e =  n-1 ;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]== key){
          ans = mid;
          e = mid -1;
        }
        else if(key > arr[mid]){
            s = mid + 1;

        }
        else if(key < arr[mid]){
          e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}

int lastOcc(vector<int>& arr,int n,int key){
    int s =0 , e =  n-1 ;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]== key){
          ans = mid;
          s = mid + 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;

        }
        else if(key < arr[mid]){
          e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        pair<int,int>p;
        p.first = firstOcc(arr,n,k);
        p.second  = lastOcc(arr,n,k);

        return p;
        //int first = firstOcc(arr,n,k);
        
    }
};
/*class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int r = lower_bound(nums.begin(), nums.end(), target + 1) - nums.begin();
        if (l == r) return {-1, -1};
        return {l, r - 1};
    }
};*/