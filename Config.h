//
// Created by wolfman on 17-5-7.
//

#ifndef NOTE_GAME_CONFIG_H
#define NOTE_GAME_CONFIG_H

#include "Singleton.h"
#include <string>
#include <yaml-cpp/yaml.h>

class Config: public Singleton<Config> {
public:
    void initialize(const std::string filePath);
    std::vector<std::string> loadGraph(const std::string& filePath);

    Config();
    YAML::Node node;
};


#endif //NOTE_GAME_CONFIG_H
