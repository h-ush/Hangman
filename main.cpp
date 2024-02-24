#include "player.h"
#include "game.h"
#include "random.h"
#include <iostream>

int main(int argc, char* argv[])
{
  Player player{};
  Game game{};
  Random words{};

  game.setAlias();

  while (game.get_playAgain_option() == 'y')
  {
    game.welcome();
    game.menuDisplay();


    switch(game.menuSelection())
    {
      case '1':
      {
        game.hideWord();
        // game.printChosenWord();
        while(!game.getWin())
        {
          game.setGuess();
          game.checkIfInWord();
          game.winCases();
        }
        game.playAgain();
        break;
      }

      // case '2':
      // {
      //   player.changedNameSelection();
      //   switch(player.getChangedNameSelection())
      //   {
      //     case 'Y':
      //     case 'y':
      //       player.setName();
      //       break;
      //
      //     case 'N':
      //     case 'n':
      //       break;
      //   }
      //   break;
      // }

      case '3':
      {
        break;
      }

      case 'Q':
      case 'q':
      {

        break;
      }

      default:
        std::cout << "\n[ ! ] ERROR... UNKNOWN SELECTION...\n"
                  << "[ ! ] Bringing player back to welcome screen...\n";
        break;
    }
    game.gameReset();
  }

  return EXIT_SUCCESS;
}
