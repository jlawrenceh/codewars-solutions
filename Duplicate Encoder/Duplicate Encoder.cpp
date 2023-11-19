#include <string>
using namespace std;
string duplicate_encoder(const string& word){
int len = word.length();
string word_cpy = word;
int count = 0;
  string ans = "";
  
  for (int i = 0;i<len;i++)
  {
    if(isupper(word[i]))
    {
      word_cpy[i] = tolower(word[i]);
    }
  }
  
  for (int i = 0; i<len;i++)
  {
    for (int j = 0; j<len;j++)
    {
      if (word_cpy[i] == word_cpy[j])
      {
       count++; 
      }
    }
    
    if(count>1)
      {ans += ")";}
    else
      { ans += "(";}
     
      count = 0;
  }
  
  return ans;
}