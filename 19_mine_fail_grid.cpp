string gridChallenge(vector<string> grid) {
    
    cout<<"New Loop Started -------------- "<<endl;
    int size=grid.size();
    for(int k=0;k<size;k++)
    {
        sort(grid[k].begin(),grid[k].end());
    }
    
    
    for(int i=0;i<size;i++)
    { 
         int sizee=grid[i].size();
        cout<<"i is ------------------"<<i<<endl;
    for(int j=0;j<sizee-1;j++)
        {
         
          if((grid[i][j+1] < grid[i][j]) )
          {
                cout<<"value of grid [i][j+1] is "<<grid[i][j+1]<<endl;
                cout<<"value of grid [i][j] is "<<grid[i][j]<<endl;
                cout<<"Value of grid[i][j] is i= "<<i<<"j is "<<j<<endl;
                cout<<"OutPut is "<<grid[i][j+1]-grid[i][j]<<endl;
                
                return "NO";
            }
        } 
    }
