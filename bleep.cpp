#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string sentence;
string word;
string word_in_sentence;
string yes_or_no;
bool dont_skip_it = true;

string bleeped_word = word;
string bleeped_sentence = sentence;
int word_size = word.size();
int match_count;


void introduction () {
  cout << "Let's bleep the **** out of some words!\n";
  cout << "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv\n";
  cout << "\nPlease type a sentence/paragraph/monologue, whatever the **** you want: \n";
  getline(cin, sentence);
  cout << "\nNow type the word you would like to bleep: \n";
  cin >> word;

  cout << "\nLastly, would you like to turn on visual indexing? Y/N: \n";
  cin >> yes_or_no;
  

  if (yes_or_no == "Y" || yes_or_no == "y" || yes_or_no == "Yes" || yes_or_no == "yes")
    {
      dont_skip_it = true;
    } 
  else if (yes_or_no == "N" || yes_or_no == "n" || yes_or_no == "No" || yes_or_no == "no")
    {
      dont_skip_it = false;
    }
  else
  {
    cout << "Please enter Y or N: \n";
    cin >> yes_or_no;
  }
  
  cout << "\nBleeping..." << word;
  cout << "\n~~~~~~~~~~~~~~\n";
}


// function checks if the word to bleep is a smaller word inside another word
bool word_in_word(){

bool is_in_word = true;
bool space_in_front = false;
bool space_in_back = false;
  for (int i = 0; i < sentence.size(); i++)
  {
    for (int j = 0; j < word.size(); j++)
    { 
      if (match_count == 1)
      {
        if (isspace(sentence[i - 1]))
        {
          space_in_front = true;
          return space_in_front;
        }
        else
        {
          space_in_front = false;
          return space_in_front;
        }
      }

      else if (match_count == word_size)
      {
        if (isspace(sentence[i + word_size]))
        {
          space_in_back = true;
          return space_in_back;
        }
        else
        {
          space_in_back = false;
          return space_in_back;
        }
      }

      else
      {
        break;
      }
    }
  }

  if (space_in_front == true && space_in_back == true)
  {
    is_in_word = false;
    return is_in_word;
  }

  else
  {
    is_in_word = true;
    return is_in_word;
  }
} 


void bleep(string &word, string &sentence){
  // pass by reference word and sentence
  string bleeped_word = word;
  string bleeped_sentence = sentence;
  int word_size = word.size();
  
  // loop through sentence string. 
  for (int i = 0; i < sentence.size(); i++) 
  {
    int match_count = 0;
    // visual indexing
    if (yes_or_no == "Y")
    {
    cout << "Sentence Index: " << i << "\n";
    }

    //loop through word string
    for (int j = 0; j < word.size(); j++) 
    {
      // visual indexing
      if (yes_or_no == "Y")
      {
      cout << "Word index: " << j << "\n";
      }

      // check if sentence at index plus index j is equal to word at character j
      if (sentence[i + j] == word[j])
      {
        match_count += 1;
        word_in_word();
        if (yes_or_no == "Y")
        {         
        cout << "Match Found\n";
        cout << "Match count: " << match_count << "\n\n";
        }
      }
  
      // if not, break the loop
      else
      {
        break;
      }

    }
    
    // if match count = word size
    // loop through the word index j and set i + j at sentence to *
    if (match_count == word_size)
    {
      for (int j = 0; j < word_size; j++)
      {
        bleeped_sentence[i + j] = '*';
      }
    }
  }

  cout << "\n" << bleeped_sentence;
  return;
}






int main() {
  
  introduction();
  word_in_word();
  bleep(word, sentence);
}