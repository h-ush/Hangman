#include "random.h"
#include "randomGenerator.h"

//======================================================================================
// Selects a random number from the vector
//======================================================================================
std::string Random::randomWordPicker()
{
  std::uniform_int_distribution word{ 0, (maxListSize - 1) };

  return m_chosen_word = m_word_list.at(word(RandomGenerator::mt));
}
