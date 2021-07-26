//FSM
#include <iostream>
using namespace std;

int checkState(char &, char &, int);

int main()
{
  string input;
  int state = 0;
  char current;
  char prev;

  while (input != "quit")
  {
    state = 0;
    cout << "Please enter a string of 1's and 0's (type \"quit\" to exit): ";
    getline(cin, input);

    if (input == "quit")
      break;

    for (int i = 1; i <= input.length(); i++)
    {
      current = input[i];
      prev = input[i - 1];

      state = checkState(current, prev, state);
    }

    if (state == 3)
      cout << "This string is ACCEPTED.\n";
    else
      cout << "This string is NOT ACCEPTED.\n";
  }
  cout << "\n\nPress enter to exit.";
  cin.get();
  return 0;
}

int checkState(char &current, char &prev, int state)
{
  switch (state)
  {
  case 0:
    if (current == '1' && prev == '1')
      return 1;
    else if (current = '0' && prev == '0')
      return 0;
    else
      return 0;
  case 1:
    if (current == '1' && prev == '1')
      return 1;
    else if (current = '0' && prev == '1')
      return 2;
  case 2:
    if (current == '1' && prev == '0')
      return 3;
    else
      return state - 1;
  default:
    return state;
  }
}
