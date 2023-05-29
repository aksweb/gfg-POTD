class Solution
{
public:
    bool is_possible_to_get_seats(int n, int m, vector<int> &seats)
    {
        if (n > m)
        {
            return false;
        }
        if (n == 1 && m == 1)
        {
            if (seats[0] == 0)
                return true;
            else
                return false;
        }

        for (int i = 0; i <= m - 1; i++)
        {
            if (i == 0)
            {
                if ((seats[i] == 0) && (seats[i + 1] == 0))
                {
                    n--;
                    seats[i] = 1;
                }
            }
            else if (i == m - 1)
            {
                if ((seats[i] == 0) && (seats[i - 1] == 0))
                {
                    n--;
                    seats[i] = 1;
                }
            }
            else if ((seats[i - 1] == 0) && (seats[i] == 0) && (seats[i + 1] == 0))
            {
                n--;
                seats[i] = 1;
            }
        }

        if (n <= 0)
        {
            return true;
        }
        else
        {

            return false;
        }
    }
};