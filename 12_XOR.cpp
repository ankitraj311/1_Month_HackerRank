string strings_xor(string s, string t) {

    string res = ""; //Creating a string which is empty. Index also not exist till now
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == t[i]) //Match same index to each other string //It was s[i] = t[i]
            res += '0'; //appending 0 to string // it was res='0'// You can't do in this way like res[i] += '0' this is wrong. Append operation perform on String. Not on index
        else
            res += '1'; //appending 1 to string // it was res='1' //
    }

    return res; //returing index
}
