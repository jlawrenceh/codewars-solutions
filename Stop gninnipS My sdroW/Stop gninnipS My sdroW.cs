using System.Collections.Generic;
using System.Linq;
using System;

public class Kata
{
  public static string SpinWords(string sentence)
  {
    string[] substrings = sentence.Split(" ");
   
    for(int i = 0; i < substrings.Length; i++)
      if(substrings[i].Length >= 5)
       substrings[i] = new string(substrings[i].Reverse().ToArray());
    
    return (String.Join(" ", substrings));
  }
}
