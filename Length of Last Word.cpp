class Solution {
public:
    int lengthOfLastWord(string s) {

        int length = 0;
        int end = s.find_last_not_of(' ');

    if (end == string::npos) {
        s.clear();
    } else {
        s.erase(end + 1);
    }

        for(int i =s.length()-1;i>=0;i--){
            if(s[i] != ' '){
                length++;
            }else{
                break;
            }
        }
        return length;
    }
};
