#ifndef RANDOM_MT_H
#define RANDOM_MT_H

#include <chrono>
#include <random>

namespace RandomGenerator
{
    inline std::mt19937 generate()
    {
        std::random_device rd{};

        std::seed_seq ss
        {
            static_cast<std::seed_seq::result_type>(std::chrono::steady_clock::now().time_since_epoch().count()),
            rd(), rd(), rd(), rd(), rd(), rd(), rd()
        };

        return std::mt19937{ ss };
    }
    inline std::mt19937 mt{ generate() };

    inline int get(int min, int max)
    {
        std::uniform_int_distribution dice{ min, max };
        return dice(mt);
    }
}

#endif
