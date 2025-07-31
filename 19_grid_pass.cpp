string gridChallenge(vector<string> grid) {
    bool ok = true;
    int n = grid.size();
    
    for (int i = 0; i < n; i++) {
        sort(grid[i].begin(), grid[i].end());    
    }
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ok &= (grid[i-1][j] <= grid[i][j]);
        }
    }
    
    return ok ? "YES" : "NO";
}
