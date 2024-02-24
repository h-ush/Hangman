#ifndef __RANDOM_H__
#define __RANDOM_H__

#include <string>
#include <vector>

class Random
{
  public:
    explicit Random() = default;

    using List = std::vector<std::string>;

    std::string randomWordPicker();
    const List& getWordList() const { return m_word_list; };

    std::string getWord() const { return m_chosen_word; };


  private:
    List m_word_list
    {
      "mystery", "broccoli", "account",
      "almost", "spaghetti", "opinion",
      "beautiful", "distance", "luggage",
    };

    int maxListSize{ static_cast<int>(m_word_list.size()) };

    std::string m_chosen_word{};

};
#endif

/*
 *
*/
