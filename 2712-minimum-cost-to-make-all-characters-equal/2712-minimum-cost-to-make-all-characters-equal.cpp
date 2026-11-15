class Solution {
public:
    long long makeit(char c,string s){

        int n=s.length();

        char t;
        if(c=='1') t='0';
        else t='1';

        long long total_cost=0;

        int i=0;
        while(i<n){

            if(s[i]==c){
                i++;
                continue;
            }

            int j=i;
            while(j<n && s[j]==t) j++;

            int cost=min(j+max(0,i),n-i+max(n-j,0));

            total_cost+=cost;

            i=j+1;

        }

        return total_cost;

    }
    long long minimumCost(string s) {
        
        int n=s.length();
        return 1LL*min(makeit('0',s),makeit('1',s));

    }
};