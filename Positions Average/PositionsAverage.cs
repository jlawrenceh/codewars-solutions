using System;

public class PositionAverage
{
	public static double PosAverage(string s)
	{
		//String preprocessing
		s = s.Replace(" ", "");
		string[] substrings = s.Split(",");
	
		// n = number of substrings
		int n = substrings.Length;
		
		// len = length of substrings
		int len = substrings[0].Length;
		
		//total = total number of combinations
		double total = (n * (n-1)) / 2;
		
		double matches = 0;
		
		// double forloop to check the combinations
		for (var i = 0; i < n -1 ; i++)
		{
			for (var j = i + 1; j < n ; j++)
			{
				// add another internal for loop to check each substring's index
				for (var k = 0; k < len; k++)
				{
					// check for matches in a combination
					if(substrings[i][k] == substrings[j][k])
						matches++;
				}
			}
		}
		
		//return the percentage
		return (matches / (total * len)) * 100;
  }
}