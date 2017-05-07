//
// Created by wolfman on 17-5-7.
//

#include "Config.h"
#include <fstream>

Config::Config() {
    initialize("data/config.yaml");
}

std::vector<std::string> Config::loadGraph(const std::string& filePath) {
    std::ifstream fin(filePath);
    std::vector<std::string> graph;
    std::string line;
    while (!fin.eof()) {
        fin >> line;
        graph.push_back(line);
    }
    return graph;
}

void Config::initialize(const std::string filePath) {
    node = YAML::LoadFile(filePath);
}
