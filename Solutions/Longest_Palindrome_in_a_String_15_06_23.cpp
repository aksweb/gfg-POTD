class Solution
{
public:
    string longestPalin(string s)
    {
        // code here
        // using BBITWISE XOR
        int n = s.length();
        if (n == 1)
            return s;
        int maxLength = 0;
        int start = 0;

        for (int mid = 0; mid < n; mid++)
        {
            int left = mid - 1;
            int right = mid + 1;

            // Check for odd-length palindromes
            while (left >= 0 && right < n && s[left] == s[right])
            {
                left--;
                right++;
            }

            int length = right - left - 1; // Length of the palindrome

            if (length > maxLength)
            {
                maxLength = length;
                start = left + 1;
            }

            // If the string length is even, check for even-length palindromes
            if (mid + 1 < n && s[mid] == s[mid + 1])
            {
                left = mid - 1;
                right = mid + 2;

                while (left >= 0 && right < n && s[left] == s[right])
                {
                    left--;
                    right++;
                }

                length = right - left - 1; // Length of the palindrome

                if (length > maxLength)
                {
                    maxLength = length;
                    start = left + 1;
                }
            }
        }

        return s.substr(start, maxLength);
    }
};

// Abhishekh Kumar Singh