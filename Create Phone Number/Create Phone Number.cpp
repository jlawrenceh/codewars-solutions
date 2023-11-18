#include <string>

std::string createPhoneNumber(const int arr [10]){
  //your code here
  // (123) 456-7890)
  // 012345678912345
  std::string s = "(";
  
  for (int i = 0; i < 3 ; i++ )
    {
     s += std::to_string(arr[i]);
    }
  
  s += ") ";
  
  for (int i = 3; i < 6 ; i++)
    {
      s += std::to_string(arr[i]);
    }
  s += "-";
  for (int i = 6; i < 10 ; i++)
    {
       s += std::to_string(arr[i]);
    }
  return s;
}