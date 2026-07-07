class Solution {
public:
    string reversePrefix(string word, char ch) {
   
    int idx =0;
    for (int i=0;i<word.size();i++)
    {
        if (word[i]==ch)
        {
            idx =i;
            break;
        }

    }
  int j=0;
  while (j<idx)
  {
    swap(word[j],word[idx]);
    j++;
    idx--;
  }
  return word;

        
    }
};