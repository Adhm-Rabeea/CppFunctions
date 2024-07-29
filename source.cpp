#include "functions.h"

int main()
{
  vector<int> nums = {10, 2, 3, 44, 5, 2, 3, 45, 2, 3, 1};
  vector<int> nums1 = {1, 2, 3, 4, 5};
  vector<int> result = revers_n(nums1);

  for (int i : result)
  {
    cout << i << " "; // 5 4 3 2 1
  }
  cout << "\n";
  cout << boolalpha;
  cout << count_n(nums, 2) << "\n";               // 3
  cout << find_n(nums, 3) << "\n";                // 1 -> True
  cout << find_n(nums, 11) << "\n";               // 0 -> False
  cout << is_sorted_n(nums1) << "\n";             // 1
  cout << Repeat("adhm", 4, ", ", false) << "\n"; // adhm, adhm, adhm, adhm
  cout << zFill("1234", 6, "#") << "\n";          // ##1234
  cout << Reverse("edcba") << "\n";               // abcde
  // generateLettersWithASCIIValues('A', 'Z');                       // ASCII table
  cout << min_num({20, 37, 38, 27, 44, 8, 4, 2, 3, 70}) << "\n";  // 2
  cout << max_num({20, 37, 38, 27, 44, 99, 4, 9, 3, 70}) << "\n"; // 99
  cout << Sum_Of_Nums({10, 20, 30, 5}) << "\n";                   // 65
  cout << Sum_Of_Nums({10, 20, 30, 5}, '+') << "\n";              // 65
  cout << Sum_Of_Nums({10, 20, 30, 5}, '*') << "\n";              // 30000
  cout << Sum_Of_Nums({10, 20, 30, 5}, '-') << "\n";              // -65
  cout << To_Upper_Case("adhm rabeea") << "\n";                   // ADHM RABEEA
  cout << To_Lower_Case("ADHM RABEEA") << "\n";                   // adhm rabeea
  cout << Swap_Case("aDhm RaBEeA") << "\n";                       // AdHM rAbeEa
  cout << parse_intger("123") << "\n";                            // 123
  isNaN("123g4") ? cout << "Is Not A Num\n" : cout << "IS Num\n";
  isNaN("123") ? cout << "Is Not A Num\n" : cout << "IS Num\n";
  cout << trim_string("###Adhm###", '#', "All") << "\n";               // Adhm
  cout << trim_string("###Adhm###", '#', "Left") << "\n";              // Adhm###
  cout << trim_string("###Adhm###", '#', "Right") << "\n";             // ###Adhm
  cout << sub_string("Adhm Rabeea Ahmed Osman", 5, 10) << "\n";        // Rabeea
  cout << sub_string("Adhm Rabeea Ahmed Osman", 5, 11, false) << "\n"; // Rabeea A
  cout << clean_string("AD7#H!3M R)(&)AB!@$EEA__", false) << "\n";     // ADHM RABEEA__
  cout << word_count("adhm rabeea  ahmed mohamed osman") << "\n";      // 5
  cout << word_count("adhm_rabeea_ahmed_mohamed_osman", '_') << "\n";  // 5
  cout << word_count("adhm#rabeea#ahmed#mohamed#osman", '#') << "\n";  // 5
  cout << word_count("###########", '#') << "\n";                      // 0
  cout << isFirstCap("Adhm Rabee") << "\n";                            // 1 -> True
  cout << isFirstCap("Adhm rabee Ahmed") << "\n";                      // 0 -> False
  cout << isFirstCap("Adhm") << "\n";                                  // 1 -> True
  cout << isFirstCap("adhm") << "\n";                                  // 0 -> False
  cout << in_array(nums, 5) << "\n";                                   // 1 -> True
  cout << in_array(nums, 47) << "\n";                                  // 0 -> False
  cout << to_Binary('A') << "\n";
  cout << Round(3.5) << endl;  // 4
  cout << Round(3.9) << endl;  // 4
  cout << Round(3.4) << endl;  // 3
  cout << Round(3.49) << endl; // 3
  cout << "=============\n";

  cout << Floor(3.9) << endl; // 3
  cout << Floor(3.5) << endl; // 3
  cout << Floor(3.1) << endl; // 3
  cout << "=============\n";

  cout << Ceil(3.9) << endl; // 4
  cout << Ceil(3.5) << endl; // 4
  cout << Ceil(3.1) << endl; // 4
  cout << Ceil(3) << endl;   // 3
  cout << Ceil(3.0) << endl; // 3
  cout << Ceil(3.1) << endl; // 4

  cout << join({"Adhm", "Rabeea", "Ahmed", "Mohamed", "Osman"}, ", ") << '\n'; // "Adhm, Rabeea, Ahmed, Mohamed, Osman"

  for (auto i : Fill(4, "Adhm"))
    cout << i << " ";
  cout << "\n";

  for (int i : Rnage(5, 12))
    cout << i << " ";
  cout << "\n";

  cout << slice("Hello World", 0, 4) << endl;           // Hello
  cout << slice("Hello World", 0, 4, true) << endl;     // olleH
  cout << slice("Hello World", 0, 4, false, 2) << endl; // Hlo

  cout << startsWith("Adhm Rabeea Ahmed", "adhm", false) << endl; // true
  cout << startsWith("Adhm Rabeea Ahmed", "adhm") << endl;        // false
  vector<string> names = {"Adhm", "Rabeea", "Ahmed"};
  names = Push(names, "Mohamed");
  names = Push(names, "Osman");
  for (string i : names)
    cout << i << " ";

  cout << moneyFormat(100) << endl;        // 100
  cout << moneyFormat(1000) << endl;       // 1,000
  cout << moneyFormat(10000) << endl;      // 10,000
  cout << moneyFormat(100000) << endl;     // 100,000
  cout << moneyFormat(1000000) << endl;    // 1,000,000
  cout << moneyFormat(10000000) << endl;   // 10,000,000
  cout << moneyFormat(100000000) << endl;  // 100,000,000
  cout << moneyFormat(1000000000) << endl; // 1,000,000,000

  return 0;
}