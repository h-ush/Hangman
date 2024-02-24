#ifndef __GAME_H__
#define __GAME_H__

#include "random.h"
#include "player.h"
#include <string>

class Game
{
  public:

    explicit Game() = default;

    // Welcome Menu
    void setAlias();
    void welcome();
    void menuDisplay() const;
    char menuSelection();

    // Hiding and Displaying Chosen Word
    std::string hideWord();
    void printChosenWord() const;

    // Finding guess value in letter/word
    std::string setGuess();
    void checkIfInWord();
    void check_if_character_has_been_Used();

    // Win Cases
    bool getWin() { return m_win; };
    bool whole_word_win();
    bool partial_word_win();
    void winCases();

    // Converting Name to uppercase
    void convert_Name_to_Upper(std::string name);

    // REFRESH FOR NEW GAME
    std::string refresh_hide_word();
    bool refresh_win();

    // NEW GAME OPTIONS
    char playAgain();
    char get_playAgain_option() { return m_playAgain; };
    void gameReset();

  private:
    Player player{};
    Random m_word{};
    bool m_win{};
    char m_menu_selection{};
    char m_playAgain{ 'y' };
    std::string m_player_guess{};
    std::string m_word_so_far{};
    std::vector<std::string> m_guess_list{};
};

#endif
