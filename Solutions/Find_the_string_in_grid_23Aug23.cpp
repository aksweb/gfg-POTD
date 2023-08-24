class Solution
{

public:
    vector<vector<int>> searchWord(vector<vector<char>> grid, string word)
    {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> ans;

        // Define directions for all 8 possible directions (horizontal, vertical, diagonal)
        int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // Check all 8 directions
                for (int dir = 0; dir < 8; dir++)
                {
                    int x = i, y = j;
                    int k;
                    for (k = 0; k < word.length(); k++)
                    {
                        if (x < 0 || x >= m || y < 0 || y >= n || grid[x][y] != word[k])
                        {
                            break;
                        }
                        x += dx[dir];
                        y += dy[dir];
                    }
                    if (k == word.length())
                    {
                        // Found a valid occurrence, store the starting coordinates
                        bool alreadyStored = false;
                        for (const auto &v : ans)
                        {
                            if (v[0] == i && v[1] == j)
                            {
                                alreadyStored = true;
                                break;
                            }
                        }
                        if (!alreadyStored)
                        {
                            vector<int> tvec;
                            tvec.push_back(i);
                            tvec.push_back(j);
                            ans.push_back(tvec);
                        }
                    }
                }
            }
        }
        return ans;
    }
};