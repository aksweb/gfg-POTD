class Solution
{
public:
    void bfs(vector<vector<int>> &image, int sr, intt sc, int newColor)
    {
        int rsz = image.size();
        vector<bool> vis(sz, false);
        queue<pair<int, int>> q;

        vis[sr] = true;
        q.push({sr, sc});
        int dr[] = {0, 0, -1, 1};
        int dc[] = {-1, 1, 0, 0};
        while (!q.empty())
        {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                int nr = r + dr[i];
                int nc = c + dc[i];
                if ( nr>=0 && nr< image[r][i] != 0 && !vis[i])
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        // Code here
        int r = image.size();
        int c = image[0].size();
        bfs(image, sr, sc, newColor);
    }
};