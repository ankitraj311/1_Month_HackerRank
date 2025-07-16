vector<int> countingSort(vector<int> arr) {

    vector<int> arr_new(100,0); //How to create a new array with vector
    for(int i=0; i<arr.size(); i++) //gettinng size of the array with .size();
    {
        arr_new[arr[i]]++; //increasing the count of no. in array. where no lies between 0 to 99
    }
    
    return arr_new;
}
