



{
  int sumMax=0, n=matrix.size()/2;

  for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
        {
          sumMax+=max({
            matrix[i][j],
            matrix[i][2n-1-j],
            matrix[2n-1-i][j],
            matrix[2n-1-i][2n-1-j]
          });
          return sumMax;
}
