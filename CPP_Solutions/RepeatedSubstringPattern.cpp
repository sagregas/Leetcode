class Solution {
public:
    bool repeatedSubstringPattern(string str) {

       int length = str.length()/2;

       std::string result = "";

       std::string pattern = "";

       while(length > 0){

           if(str.length()%length == 0){

                pattern = str.substr(0,length);

                result = "";

                while(result.length() <= str.length()){
                    result.append(pattern);
                }

                result.erase(result.length()-length-1,length);

                if(result == str) return true;

                length--;
           }
           else{
               length--;
           }
       }

       return false;

    }
};
