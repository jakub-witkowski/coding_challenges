/* Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

    I can be placed before V (5) and X (10) to make 4 and 9. 
    X can be placed before L (50) and C (100) to make 40 and 90. 
    C can be placed before D (500) and M (1000) to make 400 and 900.

Given an integer, convert it to a roman numeral.

 

Example 1:

Input: num = 3
Output: "III"
Explanation: 3 is represented as 3 ones.

Example 2:

Input: num = 58
Output: "LVIII"
Explanation: L = 50, V = 5, III = 3.

Example 3:

Input: num = 1994
Output: "MCMXCIV"
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
*/

#include <string>
#include <iostream>
#include <cmath>

class Solution {
public:
    std::string intToRoman(int num)
    {
        std::string roman_notation;
        size_t thousands;
        size_t hundreds_above_500;
        size_t hundreds_above_0;
        size_t hundreds;
        size_t tens;

        bool is_valid_number = true;
        if (num < 1 && num > 3999)
        {
            std::cout << "Wrong input number" << std::endl;
            is_valid_number = false;
        }
        
        if (is_valid_number == true)
        {
            if (num >= 1000)
            {
                thousands = floor(num/1000);
                roman_notation.append(thousands, 'M');
                hundreds = (num - (thousands * 1000));
                if (hundreds >= 900)
                {
                    roman_notation.append("CM");
                }
                else if (hundreds > 500 && hundreds < 900)
                {
                    hundreds_above_500 = floor((hundreds - 500)/100);
                    roman_notation.append("D");
                    roman_notation.append(hundreds_above_500, 'C');
                }
                else if (hundreds >= 400 && hundreds <= 500)
                {
                    roman_notation.append("CD");
                }
                else if (hundreds >= 100 && hundreds < 400)
                {
                    hundreds_above_0 = floor(hundreds/100);
                    roman_notation.append(hundreds_above_0, 'C');
                }
            }

        }
    
    return roman_notation;
    }
};

int main()
{
    Solution solution;

    std::cout << solution.intToRoman(3350) << std::endl;

    return 0;
}