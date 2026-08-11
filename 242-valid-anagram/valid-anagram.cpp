class Solution {
public:
    bool isAnagram(string s, string t) {
        // vector<int>arr(26,0);
        // if (s.size()!=t.size())
        // {
        //     return false;
        // }
       
        // for (int i=0;i<s.size();i++)
        // {
        //     arr[s[i]-'a']++;
        // }
        // for (int i=0;i<t.size();i++)
        // {
        //     arr[t[i]-'a']--;
        // }
        // for (int i=0;i<26;i++)
        // {
        //     if (arr[i]<0)
        //     {
        //         return false;
        //     }
        // }
        // return true;;


        // 2nd approach hashmap;
        // if (s.length()!=t.length()) 
        //   return false; 
        // unordered_map<char,int>m1;
        // unordered_map<char,int>m2;
        // for (int i=0;i<s.length();i++)
        // {
        //     m1[s[i]]++; //eta direct frequency count korte thake ;

        // }
        // for (int i=0;i<t.length();i++)
        // {
        //     m2[t[i]]++; //eta direct frequency count korte thake ;

        // }
        // for (auto x :m1)

        // {
        //     char ch1 = x.first;
        //     int freq1 =x.second;
        //     if (m2.find(ch1)!=m2.end())
        //     {
        //         int freq2=m2 [ch1];
        //         if (freq1!=freq2)
        //         return false;

        //     }
        //     else 
        //     {
        //      return  false;  // jodi element na e pai 
        //     }
        // }
        // return true;
        
        // 3rd approach 
           if (s.length()!=t.length()) 
             return false; 
        unordered_map<char,int>map1;
     
        for (int i=0;i<s.length();i++)
        {
            map1[s[i]]++; //eta direct frequency count korte thake ;

        }
        for (int i =0;i<t.length();i++)
        {
            char ch =t[i];
             if (map1.find(ch)!=map1.end())
             {
map1[ch]--;
if (map1[ch]==0) map1.erase(ch);
             }
             else return false;
        }
        if (map1.size()>0) return false ;
          
        return true;




        
    }
};