vector<int> dynamicArray(int n, const vector<vector<int>>& queries) {
    vector<vector<int>> arr(n);   // n empty sequences
    int lastAnswer = 0;
    vector<int> answers;          // store outputs of type-2 queries

    for (const auto& q : queries) {
        int t = q[0], x = q[1], y = q[2];
        int idx = (x ^ lastAnswer) % n;

        if (t == 1) {
            arr[idx].push_back(y);
        } else { // t == 2
            const auto& seq = arr[idx];
            lastAnswer = seq[y % seq.size()];
            answers.push_back(lastAnswer);
        }
    }
    return answers;
}
