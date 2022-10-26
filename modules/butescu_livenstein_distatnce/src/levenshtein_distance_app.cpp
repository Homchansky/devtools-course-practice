// Copyright 2022 Grushin Dmitriy

#include <string>
#include <algorithm>
#include <vector>
#include "include/levenshtein_distance_app.h"
#include "include/levenshtein_distance.h"

std::string LevenshteinApp::operator()(int argc, const char* argv[]) {
    if (argc == 1 || argc > 2) {
      return std::string { "This app if for:\n " }
        +"for Livenstein distance subset\n"
        +"just enter 2 words to get started\n"
        + std::string{ argv[0]};
    }
    std::vector<std::vector<int>> lev_dist(source.length() + 1,
      std::vector<int>(target.length() + 1));
    lev_dist[0][0] = 0;
    return std::to_string(lev_dist[source.length()][target.length()]);
    return std::to_string(distance);
}

