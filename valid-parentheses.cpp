#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s) {
  // cout << "s = " << s << "\n";

  stack<char> main_stack;

  for (char c : s) {
    // cout << "c: " << c;
    switch (c) {
      case '(':
      case '{':
      case '[':
        main_stack.push(c);
        break;
      case ')':
        if ((main_stack.empty()) || (main_stack.top() != '('))
          return false;
        else
          main_stack.pop();
        break;
      case '}':
        if ((main_stack.empty()) || (main_stack.top() != '{'))
          return false;
        else
          main_stack.pop();
        break;
      case ']':
        if ((main_stack.empty()) || (main_stack.top() != '['))
          return false;
        else
          main_stack.pop();
        break;
      default:
        return false;
    }
  }

  return main_stack.empty();
}

int main(int argc, char const *argv[]) {
  string s;
  // s = "()";
  // s = "()[]{}";
  // s = "(]";
  // s = "{([({})])}";
  s = "[";
  cout << ((isValid(s)) ? "Valid" : "Invalid") << endl;
  return 0;
}
