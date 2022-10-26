// Copyright 2022 Grushin Dmitriy
#ifndef MODULES_BUTESCU_LIVENSTEIN_DISTATNCE_INCLUDE_LEVENSHTEIN_DISTANCE_APP_H_
#define MODULES_BUTESCU_LIVENSTEIN_DISTATNCE_INCLUDE_LEVENSHTEIN_DISTANCE_APP_H_

#include <algorithm>
#include <vector>
#include <string>
#include <random>

class LevenshteinApp {
 public:
    std::string operator()(int argc, const char* argv[]);
};

#endif  // MODULES_BUTESCU_LIVENSTEIN_DISTATNCE_INCLUDE_LEVENSHTEIN_DISTANCE_APP_H_
