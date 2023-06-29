string longestCommonPrefix(vector<string>& strs) {
        int length = strs.size();
        if(length == 0)
            return "";
        if(length == 1)
            return strs[0];
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[length-1];
        string common = "";
        int size = last.length();
        for(int i = 0;i<size;i++)
        {
            if(first[i] == last[i])
                common += first[i];
            else 
                break;
        }
        return common;
    }