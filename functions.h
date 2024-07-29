#include <iostream>
#include <vector>
#include <string>

using namespace std;

int count_n(vector<int> nums, int num)
{
  int counter = 0;

  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == num)
      counter++;
  }

  return counter;
}

vector<int> revers_n(vector<int> nums)
{
  vector<int> result;
  for (int i = nums.size() - 1; i < nums.size(); i--)
  {
    result.push_back(nums[i]);
  }

  return result;
}

bool find_n(vector<int> nums, int num)
{
  int result = 0;
  for (int i : nums)
  {
    if (i == num)
      result++;
  }
  return result;
}

bool is_sorted_n(vector<int> nums)
{
  for (int i = 1; i < nums.size(); i++)
  {
    if (nums[i] < nums[i - 1])
      return false;
  }
  return true;
}

string Repeat(string str, int r = 2, string sep = " ", bool showEnd = true)
{
  string result;
  for (int i = 0; i < r; i++)
  {
    result += str;
    if (i < r - 1)
      result += sep;
  }
  if (showEnd)
    result += sep;
  return result;
}

string zFill(string str, int width, string fill = "0")
{
  if (str.length() < width)
  {
    for (int i = str.length(); i < width; i++)
    {
      str = fill + str;
    }
  }

  return str;
}

string Reverse(string str)
{
  string result = "";
  for (int i = str.length() - 1; i >= 0; i--)
  {
    result += str[i];
  }

  return result;
}

void generateLettersWithASCIIValues(char start, char end)
{
  for (int i = int(start); i <= int(end); i++)
  {
    cout << char(i) << " | " << i << " | " << char(i + 32) << " | " << i + 32 << endl;
  }
}

int min_num(vector<int> nums)
{
  int min_num = nums[0];
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] < min_num)
      min_num = nums[i];
  }
  return min_num;
}

int max_num(vector<int> nums)
{
  int max_num = nums[0];
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] > max_num)
      max_num = nums[i];
  }
  return max_num;
}

int Sum_Of_Nums(vector<int> nums, char operation = '+')
{
  int result = operation == '*' ? 1 : 0;

  for (int num : nums)
  {
    switch (operation)
    {
    case '+':
      result += num;
      break;
    case '*':
      result *= num;
      break;
    case '-':
      result -= num;
      break;
    }
  }

  return result;
}

string To_Upper_Case(string str)
{
  string result;

  for (char ch : str)
  {
    if (ch >= 97 && ch <= 122)
      ch = ch - 32;

    result += ch;
  }

  return result;
}

string To_Lower_Case(string str)
{
  string result;

  for (char ch : str)
  {
    if (ch < 97 && ch >= 65)
      ch = ch + 32;

    result += ch;
  }

  return result;
}

string Swap_Case(string str)
{
  string result;

  for (char ch : str)
  {
    if (ch < 97 && ch >= 65)
    {
      ch = ch + 32;
    }
    else if (ch >= 97 && ch <= 122)
    {
      ch = ch - 32;
    }
    result += ch;
  }

  return result;
}

int parse_intger(string str)
{
  int result = 0;
  for (char ch : str)
  {
    if (ch >= '0' && ch <= '9')
      result = result * 10 + (ch - '0');
  }
  return result;
}

bool isNaN(string str)
{
  bool result = false;
  for (char ch : str)
  {
    if (ch < '0' || ch > '9')
      return true;
  }
  return false;
}

string trim_string(string str, char ch = ' ', string postion = "All")
{
  string result = "";
  int firstChCount = 0;
  int lastChCount = 0;

  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == ch)
      firstChCount++;
    else
      break;
  }
  for (int i = str.length() - 1; i > 0; i--)
  {
    if (str[i] == ch)
      lastChCount++;
    else
      break;
  }
  if (postion == "All")
  {
    for (int i = 0; i < str.size(); i++)
      if (str[i] != ch)
        result.push_back(str[i]);
  }
  else if (postion == "Left")
  {
    for (int i = firstChCount; i < str.length(); i++)
      result += str[i];
  }
  else if (postion == "Right")
  {
    for (int i = 0; i < str.size() - lastChCount; i++)
      result += str[i];
  }

  return result;
}

string sub_string(string str, int start, int end, bool countspace = true)
{
  string result = "";

  for (int i = start; i <= end; i++)
  {
    if (!countspace && str[i] == ' ')
      end++;
    result += str[i];
  }

  return result;
}

string clean_string(string str, bool keep_nums = true)
{
  string result = "";

  for (char ch : str)
  {
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
      result += ch;
    else if (keep_nums && ch >= '0' && ch <= '9')
      result += ch;
    else if (ch == ' ' || ch == '_')
      result += ch;
  }

  return result;
}

int word_count(string str, char sep = ' ')
{
  int count = 0;
  bool inWord = false;

  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == sep)
    {
      if (inWord)
      {
        count++;
        inWord = false; // Reset Flag
      }
    }
    else
    {
      inWord = true; // Set Flag That Iam In A Word
    }
  }
  if (inWord)
  {
    count++;
  }
  return count;
}

bool isFirstCap(string str)
{
  bool result = true;
  for (int i = 0; i < str.length(); i++)
  {
    if (i == 0 && !(str[i] >= 'A' && str[i] <= 'Z'))
    {
      result = false;
    }
    else if (str[str.length() - 1] == ' ')
    {
      if (!(str[0] >= 'A' && str[0] <= 'Z'))
        result = false;
    }
    else if (str[i] == ' ' && !(str[i + 1] >= 'A' && str[i + 1] <= 'Z'))
    {
      result = false;
    }
    if (!result)
      return false;
  }

  return result;
}

bool in_array(vector<int> arr, int key)
{
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == key)
    {
      return true;
    }
  }
  return false;
}

string to_Binary(char n)
{
  string r;
  while (n != 0)
  {
    string temp = (n % 2 == 0 ? "0" : "1");
    r += temp;
    n /= 2;
  }
  return r;
}

int Floor(double num)
{
  return num;
}

int Round(double num)
{
  return num + .5;
}

int Ceil(double num)
{
  int inum = num;
  if (inum == num)
    return inum;
  return num + 1;
}

string join(vector<string> v, string sep = " ")
{
  string result;

  for (int i = 0; i < v.size(); i++)
  {
    result += v[i];
    if (i != v.size() - 1)
      result += sep;
  }

  return result;
}

vector<string> Fill(int size, string str)
{
  vector<string> result(size);

  for (int i = 0; i < size; i++)
  {
    result[i] = str;
  }

  return result;
}

vector<int> Rnage(int start, int end, bool includeEnd = true)
{
  int size;
  includeEnd ? size = end - start + 1 : size = end - start;
  vector<int> result(size);
  for (int i = 0; i < size; i++)
  {
    result[i] = start + i;
  }

  return result;
}

string slice(string str, int start, int end, bool rev = false, int step = 1)
{
  string result;
  for (int i = start; i <= end; i += step)
  {
    if (rev)
      result = str[i] + result;
    else
      result += str[i];
  }

  // for (int i = rev ? end : start; rev ? i >= start : i <= end; rev ? i -= step : i += step)
  // {
  //   result += str[i];
  // }

  return result;
}

bool startsWith(string str, string prefix, bool caseSensitive = true)
{
  if (str.length() < prefix.length())
    return false;

  for (int i = 0; i < prefix.length(); i++)
  {
    if (caseSensitive)
    {
      if (str[i] != prefix[i])
        return false;
    }
    else
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] += 32;
      if (prefix[i] >= 'A' && prefix[i] <= 'Z')
        prefix[i] += 32;
      if (str[i] != prefix[i])
        return false;
    }
  }
  return true;
}

vector<string> Push(vector<string> v, string item)
{
  vector<string> result(v.size() + 1);
  for (int i = 0; i < v.size(); i++)
  {
    result[i] = v[i];
  }

  result[v.size()] = item;
  return result;
}

string moneyFormat(int n)
{
  string snum = to_string(n);
  string result;
  if (snum.length() < 4)
    return snum;
  if (snum.length() == 4)
  {

    result += snum[0];
    result += ",";
    for (int i = 1; i < snum.length(); i++)
    {
      result += snum[i];
    }
  }

  if (snum.length() == 5)
  {
    for (int i = 0; i <= 1; i++)
    {
      result += snum[i];
    }
    result += ",";

    for (int i = 2; i < snum.length(); i++)
    {
      result += snum[i];
    }
  }

  if (snum.length() == 6)
  {
    for (int i = 0; i <= 2; i++)
    {
      result += snum[i];
    }
    result += ",";

    for (int i = 3; i < snum.length(); i++)
    {
      result += snum[i];
    }
  }

  if (snum.length() == 7)
  {
    result += snum[0];
    result += ",";
    for (int i = 1; i <= 3; i++)
    {
      result += snum[i];
    }
    result += ",";

    for (int i = 4; i < snum.length(); i++)
    {
      result += snum[i];
    }
  }

  if (snum.length() == 8)
  {
    for (int i = 0; i <= 1; i++)
    {
      result += snum[i];
    }
    result += ",";
    for (int i = 1; i <= 3; i++)
    {
      result += snum[i];
    }
    result += ",";

    for (int i = 5; i < snum.length(); i++)
    {
      result += snum[i];
    }
  }
  if (snum.length() == 9)
  {
    for (int i = 0; i <= 2; i++)
    {
      result += snum[i];
    }
    result += ",";
    for (int i = 3; i <= 5; i++)
    {
      result += snum[i];
    }
    result += ",";

    for (int i = 6; i < snum.length(); i++)
    {
      result += snum[i];
    }
  }
  if (snum.length() == 10)
  {
    result += snum[0];
    result += ",";
    for (int i = 1; i <= 3; i++)
    {
      result += snum[i];
    }
    result += ",";
    for (int i = 4; i <= 6; i++)
    {
      result += snum[i];
    }
    result += ",";

    for (int i = 7; i < snum.length(); i++)
    {
      result += snum[i];
    }
  }
  return result;
}

string moneyFormat1(int n)
{
  string snum = to_string(n);
  string result;
  int count = 0;
  for (int i = snum.size() - 1; i >= 0; i--)
  {
    result = snum[i] + result;

    count++;
    if (count % 3 == 0 && i != 0)
    {
      result = "," + result;
    }
  }
  return result;
}