vector<int> matchingStrings(vector<string> strings, vector<string> queries) {

    int size_of_array;
    size_of_array=queries.size();// calculatin size of the queries and defining the array of same length
    vector<int> arr(size_of_array, 0); //arr[array_size] is not allowed. So 
    for(int i=0;i<queries.size();i++)
    {
        for(int j=0;j<strings.size();j++)
        {
            if(queries[i] == strings[j])
            {
                arr[i]++;
            }
        }
    }
    return arr;
}
