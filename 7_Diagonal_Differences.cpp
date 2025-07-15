int diagonalDifference(vector<vector<int>> arr) {
    
    int matrix_size = arr.size(); //for square matric size will return n. Which shows n * n
    int left=0, right=0;
    
    for(int i=0; i<matrix_size; i++)
    {
        left+=arr[i][i];
    }
    cout<<"left is "<<left<<endl;
    for(int j=0; j<matrix_size; j++)
    {
        right+=arr[j][(matrix_size-1 - j)];
    }
    cout<<"right is "<<right<<endl;
    return abs(left-right);
}



-------------------------------------------------------------

  Left diagonal : {00,11,22}
  Right diagonal : {02,11,20}
  ------------------------------------------------
