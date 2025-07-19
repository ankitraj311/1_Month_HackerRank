


#include<algorithm>
{
  sort(arr.begin(), arr.end()); //by this we are sorting array in increasing order
  return arr[(arr.size()-1)/2]; //returning median in case when array is of odd size
}
