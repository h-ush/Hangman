#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <string>

struct Player
{
  std::string m_name{};
  int m_moves{};
  int m_wins{};
  int m_losses{};
};

// class Player
// {
//   public:
//     explicit Player() = default;
//     std::string setName();
//     std::string getName();
//     char changedNameSelection();
//     char getChangedNameSelection() const { return m_changedNameSelection; };
//
//
//   private:
//     std::string m_name{};
//     int m_moves{};
//     int m_wins{};
//     int m_losses{};
//     char m_changedNameSelection{};
// };

#endif
