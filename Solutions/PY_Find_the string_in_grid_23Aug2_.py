
class Solution:
	def searchWord(self, grid, word):
		# Code here
		m = len(grid)
        n = len(grid[0])

        ans = []

        # Define directions for all 8 possible directions (horizontal, vertical, diagonal)
        dx = [-1, -1, -1, 0, 0, 1, 1, 1]
        dy = [-1, 0, 1, -1, 1, -1, 0, 1]

        for i in range(m):
            for j in range(n):
                # Check all 8 directions
                for dir in range(8):
                    x = i
                    y = j
                    k = 0
                    while k < len(word) and 0 <= x < m and 0 <= y < n and grid[x][y] == word[k]:
                        x += dx[dir]
                        y += dy[dir]
                        k += 1
                    if k == len(word):
                        # Found a valid occurrence, store the starting coordinates
                        already_stored = False
                        for v in ans:
                            if v[0] == i and v[1] == j:
                                already_stored = True
                                break
                        if not already_stored:
                            ans.append([i, j])
        return ans
