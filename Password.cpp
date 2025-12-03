#include "Password.h"
#include <vector>

using std::vector;

/*
  The function receives a string counts how many times the same character 
  occurs at the beginning of the string, before any other characters (or the
  end of the string). The function is case-sensitive so 'Z' is different than
  'z' and any ASCII characters are allowed.
*/
int Password::count_leading_characters(std::string phrase){
    if (phrase.empty()) {
    return 0;
  }
  int repetition = 1;
  int index = 0;
  while( index < static_cast<int>(phrase.length()) - 1 && phrase[index] == phrase[index+1] ){
    repetition++;
    index++;
  }
  return repetition;
}

/*
  receives a string and returns whether it has both at least one upper-case
  letter and at least one lower-case letter
*/
bool Password::has_mixed_case(std::string pass){
  bool hasUpper = false;
  bool hasLower = false;

  for(char c : pass){
    if (std::isupper(static_cast<unsigned char>(c))) hasUpper = true;
    if (std::islower(static_cast<unsigned char>(c))) hasLower = true;
    if (hasUpper && hasLower) return true;
  }

  return false;
}

/*
  Receives a string and returns a count of how many case-sensitive unique
  characters there are.
*/
int Password::unique_characters(std::string in){
  vector<char> ulist;
  for (char c : in) {
    bool found = false;
    for (char u : ulist) {
      if (u == c) {
        found = true;
        break;
      }
    }
    if (!found) {
      ulist.push_back(c);
    }
  }

  return static_cast<int>(ulist.size());
}
