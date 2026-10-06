class Solution {
public:
    int maxDistinct(string s) {
        int mask=0,res=0;
        for(auto &c :s){
            int bit =1<<(c-'a');
            if((mask & bit)==0){
                mask|=bit;
                res++;
                if(res==26)break;
            }
        }
        return res;
        
    }
};