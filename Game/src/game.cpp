#include "game.h"
#include "utility.h"
#include <iostream>

//======================================================================================
// Game sets player Alias
//======================================================================================
void Game::setAlias()
{
  std::cout << "Enter your alias: ";
  std::cin >> player.m_name;
  cinClearBuf();
}
//======================================================================================
// Welcome Message upon entering the game
//======================================================================================
void Game::welcome()
{
  std::cout << "\nWelcome " << player.m_name << "! to C++ Man (a variant of Hangman)\n"
            << "To win: guess the word.  To lose: run out of pluses.\n";
}

//======================================================================================
// Clears the std::cin Buffer upon invalid input
//======================================================================================
char Game::menuSelection()
{
  std::cout << "\n[/] Selection: ";
  std::cin >> m_menu_selection;
  cinClearBuf();

  return m_menu_selection;
}

//======================================================================================
// Menu Options for an interactive experience with the player
//======================================================================================
void Game::menuDisplay() const
{
  std::cout << "\n[ 1 ] Play Game\n"
            << "[ 2 ] Change Alias\n"
            << "[ 3 ] View Scoreboard\n"
            << "[ Q ] Quit Game\n";
}

//======================================================================================
// Gets the guess of the player
//======================================================================================
std::string Game::setGuess()
{
  std::cout << "\n[ * ] Enter your letter: ";
  std::cin >> m_player_guess;
  cinClearBuf();

  m_guess_list.push_back(m_player_guess);

  return m_player_guess;
}

//======================================================================================
// Hides the selected word
//======================================================================================
std::string Game::hideWord()
{
  std::string hideWord{ m_word.randomWordPicker() };

  for(auto& index : hideWord)
  {
    m_word_so_far += "_";
    // std::cout << "_" << ' ';
  }

  std::cout << m_word_so_far << '\n';

  return hideWord;
}

//======================================================================================
// Checks for letter/word in the chosen_word
//======================================================================================
void Game::checkIfInWord()
{
  for(int guessed_word_index{}; guessed_word_index < m_player_guess.length(); guessed_word_index++)
  {
    for(int j{}; j < m_word.getWord().length(); j++)
    {
      if (m_player_guess[guessed_word_index] == m_word.getWord()[j])
      {
        m_word_so_far.at(j) = m_player_guess[guessed_word_index];
        // std::cout << "[ + ] TEST GUESS: " << m_player_guess.at(guessed_word_index) << '\n';
      }
    }
  }
  std::cout << m_word_so_far << '\n';
}

//======================================================================================
// Checks if the character has already been used
//======================================================================================
void Game::check_if_character_has_been_Used()
{
  std::cout << "[ ? ] TEST FOR GUESS LIST: ";
  for (int i{}; i < m_player_guess.length(); i++)
  {
    if (m_player_guess[i] == m_player_guess[i])
    {
      std::cout << "Letter has already been used\n";
    }

  }
  for (auto& i : m_guess_list)
  {
    std::cout << i << ' ';
  }
  std::cout << '\n';
}
//======================================================================================
// Whole Word Win Case
//======================================================================================
bool Game::whole_word_win()
{
  if (m_player_guess == m_word.getWord())
  {
    return true;
  }

  return false;
}

//======================================================================================
// Partial Word Win Case
//======================================================================================
bool Game::partial_word_win()
{
  if (m_word.getWord() == m_word_so_far)
  {
    return true;
  }

  return false;
}

//======================================================================================
// Win Cases
//======================================================================================
void Game::winCases()
{
  if (whole_word_win())
  {
    std::cout << "\n[ + ] CONGRATULATIONS ";
    convert_Name_to_Upper(player.m_name); std::cout << "!!!";
    std::cout << "\n[ + ] YOU GUESSED THE ENTIRE WORD!!!\n";
    std::cout << "[ + ] THE WORD WAS ";
    std::cout << "\""; convert_Name_to_Upper(m_word.getWord());
    std::cout << "\"" << '\n';

    std::cout << "[ ? ] TEST: WHOLE WORD WIN...\n";

    m_win = true;
  }
  else if (partial_word_win())
  {
    std::cout << "\n[ + ] YOU WIN!!!\n";
    std::cout << "[ + ] THE WORD WAS ";
    std::cout << "\""; convert_Name_to_Upper(m_word.getWord());
    std::cout << "\"" << '\n';

    std::cout << "[ ? ] TEST: Partial Word Win...\n";

    m_win = true;
  }
}

//======================================================================================
// Convert Name to Uppercase
//======================================================================================
void Game::convert_Name_to_Upper(std::string uppercaseName)
{
  for (int i{}; i < uppercaseName.length(); i++)
  {
    putchar(toupper(uppercaseName.at(i)));
  }
}

//======================================================================================
// Asks the User if they would like to play again
//======================================================================================
char Game::playAgain()
{
  std::cout << "[ ? ] Would you like to play again [y/n]? ";
  std::cin >> m_playAgain;

  return m_playAgain;
}

//======================================================================================
// Resets the Game
//======================================================================================
void Game::gameReset()
{
  switch(m_playAgain)
  {
    case 'Y':
    case 'y':
    {
      refresh_hide_word();
      refresh_win();
      break;
    }

    case 'N':
    case 'n':
    {
      std::cout << "\nThank you for playing\n";
      break;
    }
  }
}
//======================================================================================
// Shows the chosen random word
//======================================================================================
void Game::printChosenWord() const
{
  std::cout << m_word.getWord() << '\n';
}

//======================================================================================
// Refreshes the hide word to an empty string for a new game
//======================================================================================
std::string Game::refresh_hide_word()
{
  m_word_so_far = "";

  return m_word_so_far;
}

//======================================================================================
// Refreshes the win case
//======================================================================================
bool Game::refresh_win()
{
  m_win = false;

  return m_win;
}
