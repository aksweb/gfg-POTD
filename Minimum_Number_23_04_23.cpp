
class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){
        for(int i=0; i< n-1; i++){
            int mini=min(arr[i], arr[i+1]);
            int maxi=max(arr[i], arr[i+1]);
            if(maxi%mini==0)
                arr[i+1]=mini;
            else
                arr[i+1]=maxi%mini;
        
    }
        return arr[n-1];
    }
};