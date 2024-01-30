#include <iostream>
#include <string>
using namespace std;

string sentence;
string word;
bool match = false;
string word_in_sentence;



void introduction () {
  cout << "Let's bleep the **** out of some words!\n";
  cout << "Please type a sentence/paragraph/monologue, whatever the **** you want: \n";
  getline(cin, sentence);
  cout << "\nNow type the word you would like to bleep: \n";
  cin >> word;
  cout << "\n~~~~~~~~~~~~~~\n";
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
      cout << "Sentence Index: " << i << "\n";
        //loop through word string
        for (int j = 0; j < word.size(); j++) 
        {
          cout << "Word index: " << j << "\n";
            // check if sentence at index plus character j is equal to word at character j
            if (sentence[i + j] == word[j])
            {
              cout << "Match Found\n";
              match_count += 1;
              cout << "Match count: " << match_count << "\n";
            }
            else
            {
              break;
            }
          if (match_count == word_size)
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

  bleep(word, sentence);
}