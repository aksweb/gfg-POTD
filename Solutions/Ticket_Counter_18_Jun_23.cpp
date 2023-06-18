class Solution
{
public:
    int distributeTicket(int N, int K)
    {
        // code here
        int rem = N % K;
        int q = N / K;
        if (rem == 0)
        {
            if (q == N)
            {
                return (N / 2) + 1;
            }

            if (q % 2 == 0)
                return ((q / 2)) * K + 1;
            else
            {
                // cout<<"q: "<<q<<endl;
                return ((q / 2) + 1) * K;
            }
        }
        else
        {
            if (q == 1)
            {
                return K + 1;
            }

            if (q % 2 == 0)
            {
                return (q / 2) * K + rem;
            }
            else
            {
                return ((q / 2) + 1) * K + 1;
            }
        }
    }
};