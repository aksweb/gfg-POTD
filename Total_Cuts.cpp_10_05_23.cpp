class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        vector<int> small(N,-1);
        int temp=A[N-1];
        for(int i=N-1; i>=0; i--){
            if(A[i]<temp){
                small[i]=A[i];
                temp=A[i];
            }
            else small[i]=temp;
        }
        // for(int i=0; i<N; i++){
        //     cout<<small[i]<<" ";
        // }
        int max=A[0];
        int ans=0;
        for(int i=0;i< N-1; i++){
            if(A[i]>max)max=A[i];
            // cout<<"Max "<<max<<"small: "<<small[i]<< endl;
            if((max+small[i+1])>=K){
                
                ans++;
            }
        }
        // cout<<endl;
        return ans;
    }
};