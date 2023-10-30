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
        std::string roman_notation_thousands;
        std::string roman_notation_hundreds;
        std::string roman_notation_tens;
        std::string roman_notation_units;

        size_t thousands{};
        size_t hundreds_above_500{};
        size_t hundreds{};
        size_t tens_above_50{};
        size_t tens{};
        size_t units_above_5{};
        size_t units{};

        bool is_valid_number = true;
        if (num < 1 && num > 3999)
        {
            std::cout << "Wrong input number" << std::endl;
            is_valid_number = false;
        }
        
        if (is_valid_number == true)
        {
            thousands = floor(num/1000);
            hundreds = floor((num - thousands * 1000)/100);
            tens = floor((num - (thousands * 1000) - (hundreds * 100)) / 10);
            units = floor(num - (thousands * 1000) - (hundreds * 100) - (tens * 10));    
            
            std::cout << "Thousands: " << thousands << std::endl;
            std::cout << "Hundreds: " << hundreds << std::endl;
            std::cout << "Tens: " << tens << std::endl;
            std::cout << "Units: " << units << std::endl;

            /* fill substring for thousands */
            roman_notation_thousands.append(thousands, 'M');

            /* fill substring for hundreds */
            if (hundreds == 9)
            {
                roman_notation_hundreds.append("CM");
            }
            else if (hundreds > 5 && hundreds < 9)
            {
                hundreds_above_500 = hundreds - 5;
                roman_notation_hundreds.append("D");
                roman_notation_hundreds.append(hundreds_above_500, 'C');
            }
            else if (hundreds == 5)
            {
                roman_notation_hundreds.append("D");
            }
            else if (hundreds == 4)
            {
                roman_notation_hundreds.append("CD");
            }
            else if (hundreds >= 1 && hundreds < 4)
            {
                roman_notation_hundreds.append(hundreds, 'C');
            }
            
            /* fill substring for tens */
            if (tens == 9)
            {
                roman_notation_tens.append("XC");
            }
            else if (tens > 5 && tens < 9)
            {
                tens_above_50 = tens - 5;
                roman_notation_tens.append("L");
                roman_notation_tens.append(tens_above_50, 'X');
            }
            else if (tens == 5)
            {
                roman_notation_tens.append("L");
            }
            else if (tens == 4)
            {
                roman_notation_tens.append("XL");
            }
            else if (tens >= 1 && tens < 4)
            {
                roman_notation_tens.append(tens, 'X');
            }

            /* fill the substring for units*/
            if (units == 9)
            {
                roman_notation_units.append("IX");
            }
            else if (units > 5 && units < 9)
            {
                units_above_5 = units - 5;
                roman_notation_units.append("V");
                roman_notation_units.append(units_above_5, 'I');
            }
            else if (units == 5)
            {
                roman_notation_units.append("V");
            }
            else if (units == 4)
            {
                roman_notation_units.append("IV");
            }
            else if (units >= 1 && units < 4)
            {
                roman_notation_units.append(units, 'I');
            }
        
        }

    return roman_notation_thousands + roman_notation_hundreds + roman_notation_tens + roman_notation_units;
    }
};

int main()
{
    Solution solution;

    std::cout << solution.intToRoman(3) << std::endl;
    std::cout << solution.intToRoman(58) << std::endl;
    std::cout << solution.intToRoman(1994) << std::endl;

    return 0;
}