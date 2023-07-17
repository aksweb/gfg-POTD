class Solution
{
public:
    string FirstNonRepeating(string A)
    {
        // Code here
        // 		    int a[26]={0};
        // 		    int l=A.length();
        // 		    string ans="";
        // 		    queue<char> st;
        // 		    for(int i=0; i<l; i++){
        // 		        a[A[i]-97]++;
        // 		        if( (a[A[i]-97]<=1 && a[A[i]]!=-1)  ) {
        // 		            st.push(A[i]);
        // 		          //  ans+=A[i];
        // 		        }
        // 		        if(a[A[i]-97]>1 ){
        // 		            a[A[i]]=-1;
        // 		        }
        // 		        char f=st.front();
        // 		        while(a[f-97]==-1 && f){
        // 		            st.pop();
        // 		            if(!st.empty()) f=st.front();
        // 		        }
        // 		        if(a[f]==-1)st.pop();
        // 		        if( !st.empty() ) ans+=st.front();
        // 		        else ans+='#';
        // 		    }
        // 		return ans;
        unordered_map<char, int> mm;
        queue<char> q;
        string ans = "";
        for (int i = 0; i < A.length(); i++)
        {
            mm[A[i]]++;
            if (mm[A[i]] == 1)
                q.push(A[i]);
            while (q.size() != 0 && mm[q.front()] > 1)
                q.pop();
            if (q.size() == 0)
                ans += '#';
            else
                ans += q.front();
        }
        return ans;
    }
};