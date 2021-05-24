// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		StringASCIISum.cs
//
// Date:
// 		22/05/2021
//
// Description: 
//		Extension for string types that adds the ability to return the string's
//		total int sum based on the ASCII character indexing order.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class StringASCIISum
{	
	public static int ASCIISum(this string InputString)
	{
		char[] InputStringCharacterList = InputString.ToCharArray();
		int OutputStringSum = 0;

		List<List<char>> ValidCharacterList = new List<List<char>>
		{
			new List<char>{' '},		// 1
			new List<char>{'!'},		// 2
			new List<char>{'"'},		// 3
			new List<char>{'#'},		// 4
			new List<char>{'$'},		// 5
			new List<char>{'%'},		// 6
			new List<char>{'&'},		// 7
			new List<char>{'\''},		// 8
			new List<char>{'('},		// 9
			new List<char>{')'},		// 10
			new List<char>{'*'},		// 11
			new List<char>{'+'},		// 12
			new List<char>{','},		// 13
			new List<char>{'-'},		// 14
			new List<char>{'.'},		// 15
			new List<char>{'/'},		// 16
			new List<char>{'0'},		// 17
			new List<char>{'1'},		// 18
			new List<char>{'2'},		// 19
			new List<char>{'3'},		// 20
			new List<char>{'4'},		// 21
			new List<char>{'5'},		// 22
			new List<char>{'6'},		// 23
			new List<char>{'7'},		// 24
			new List<char>{'8'},		// 25
			new List<char>{'9'},		// 26
			new List<char>{':'},		// 27
			new List<char>{';'},		// 28
			new List<char>{'<'},		// 29
			new List<char>{'='},		// 30
			new List<char>{'>'},		// 31
			new List<char>{'?'},		// 32
			new List<char>{'@'},		// 33
			new List<char>{'A', 'a'},	// 34
			new List<char>{'B', 'b'},	// 35
			new List<char>{'C', 'c'},	// 36
			new List<char>{'D', 'd'},	// 37
			new List<char>{'E', 'e'},	// 38
			new List<char>{'F', 'f'},	// 39
			new List<char>{'G', 'g'},	// 40
			new List<char>{'H', 'h'},	// 41
			new List<char>{'I', 'i'},	// 42
			new List<char>{'J', 'j'},	// 43
			new List<char>{'K', 'k'},	// 44
			new List<char>{'L', 'l'},	// 45
			new List<char>{'M', 'm'},	// 46
			new List<char>{'N', 'n'},	// 47
			new List<char>{'O', 'o'},	// 48
			new List<char>{'P', 'p'},	// 49
			new List<char>{'Q', 'q'},	// 50
			new List<char>{'R', 'r'},	// 51
			new List<char>{'S', 's'},	// 52
			new List<char>{'T', 't'},	// 53
			new List<char>{'U', 'u'},	// 54
			new List<char>{'V', 'v'},	// 55
			new List<char>{'W', 'w'},	// 56
			new List<char>{'X', 'x'},	// 57
			new List<char>{'Y', 'y'},	// 58
			new List<char>{'Z', 'z'},	// 59
			new List<char>{'['},		// 60
			new List<char>{'\\'},		// 61
			new List<char>{']'},		// 62
			new List<char>{'^'},		// 63
			new List<char>{'_'},		// 64
			new List<char>{'`'},		// 65
			new List<char>{'{'},		// 66
			new List<char>{'|'},		// 67
			new List<char>{'}'},		// 68
			new List<char>{'~'},		// 69
		};

		foreach (char CurrentWordCharacter in InputStringCharacterList)
		{
			int CurCharListIndex = 1;

			foreach (List<char> CurrentCharacterList in ValidCharacterList)
			{
				bool MatchFound = false;

				foreach (char CurrentSortCharacter in CurrentCharacterList)
				{
					if (CurrentSortCharacter == CurrentWordCharacter)
					{
						OutputStringSum += CurCharListIndex;
						MatchFound = true;
						break;
					}

					if (MatchFound) { break; };
				}

				CurCharListIndex++;
			}
		}

		return OutputStringSum;
	}
}
