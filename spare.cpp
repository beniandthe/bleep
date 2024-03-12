string sentence;
string word;
string word_in_sentence;
string yes_or_no;

void introduction () {
  cout << "Let's bleep the **** out of some words!\n";
  cout << "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv\n";
  cout << "\nPlease type a sentence/paragraph/monologue, whatever the **** you want: \n";
  getline(cin, sentence);
  cout << "\nNow type the word you would like to bleep: \n";
  cin >> word;
  cout << "\nBleeping..." << word;
  cout << "\n~~~~~~~~~~~~~~\n";
}


bool skip_indexing(string yes_or_no)
{
  bool skip_index = true;

  if (yes_or_no == "N"){
    skip_index = false;
    return false;
  }
  
  else
  {
    skip_index = true;
    return true;
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
    cout << "Sentence Index: " << i << "\n";
    
    //loop through word string
    for (int j = 0; j < word.size(); j++) 
    {
      cout << "Word index: " << j << "\n";
 
      // check if sentence at index plus index j is equal to word at character j
      if (sentence[i + j] == word[j])
      {
        cout << "Match Found\n";
        match_count += 1;
        cout << "Match count: " << match_count << "\n";
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

  skip_indexing(yes_or_no);

  bleep(word, sentence);
}
bool skip_it = false;

void introduction () {
  cout << "Let's bleep the **** out of some words!\n";
  cout << "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv\n";
  cout << "\nPlease type a sentence/paragraph/monologue, whatever the **** you want: \n";
  getline(cin, sentence);
  cout << "\nNow type the word you would like to bleep: \n";
  cin >> word;

  cout << "\nLastly, would you like to turn on visual indexing algorithm? Y/N: \n";
  cin >> yes_or_no;
  
  while (yes_or_no != "Y" || yes_or_no != "N")
  {
    cout << "Please enter Y or N: ";
    cin >> yes_or_no;
  
    if (yes_or_no = "Y")
    {
      skip_it = false;
    } 

    else
    {
      skip_it = true;
    } 
  }
  
  cout << "\nBleeping..." << word;
  cout << "\n~~~~~~~~~~~~~~\n";
}


word_in_word();

// function checks if the word to bleep is a smaller word inside another word
bool word_in_word(){

bool is_in_word = true;

  for (int i = 0; i < sentence.size(); i++)
  {
    for (int j = 0; j < word.size(); j++)
    {
      if (isspace(bleeped_word[j - 1]) && isspace(bleeped_word[i + j + 1]))
      {
        is_in_word = false;
        return is_in_word;
      }
      else
      {
        return is_in_word = true;
      }
    }
  }
  return is_in_word;
}



 || yes_or_no == "y" || yes_or_no == "yes" || yes_or_no == "Yes"

 || yes_or_no == "n" || yes_or_no == "no" || yes_or_no == "No"





 void bleep(string &word, string &sentence){
  // pass by reference word and sentence
  
  
  // loop through sentence string. 
  for (int i = 0; i < sentence.size(); i++) 
  {
    int match_count = 0;
    if (yes_or_no == "Y")
    {
    cout << "Sentence Index: " << i << "\n";
    }
    else
    {
      false;
    }
    //loop through word string
    for (int j = 0; j < word.size(); j++) 
    {
      if (yes_or_no == "Y")
      {
      cout << "Word index: " << j << "\n";
      }
      else
      {
        false;
      }
      // check if sentence at index plus index j is equal to word at character j
      if (sentence[i + j] == word[j])
      {
        match_count += 1;
        if (yes_or_no == "Y")
        {         
        cout << "Match Found\n";
        cout << "Match count: " << match_count << "\n";
        }
        else
        {
          false;
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

