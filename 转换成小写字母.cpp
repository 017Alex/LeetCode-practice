class Solution {
public:
    string toLowerCase(string str) {
        int i = 0;
        if(str.length() == 0)
            return NULL;
        for(i = 0; i < str.length(); i++)
        {
            if(str[i] >= 65 && str[i] <= 90)
                str[i] = str[i] + 32;
        }
        return str;
    }
};