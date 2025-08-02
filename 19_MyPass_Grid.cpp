string gridChallenge(vector<string> grid) {
        bool ok = true;
    int n = grid.size();
    
    for (int i = 0; i < n; i++) {
        sort(grid[i].begin(), grid[i].end());    
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size()-1; j++) {
            if(grid[j][i] > grid[j+1][i])
            {
                return "NO";
            }
        }
    }
    
    return "YES";
}
