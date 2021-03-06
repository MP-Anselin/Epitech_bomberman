//
// EPITECH PROJECT, 2018
// Tools
// File description:
// Tools
//

#ifndef TOOLS_HPP_
# define TOOLS_HPP_

#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

#if WIN32
	#define FILEPATH "C:\\Program\ Files\ (x86)\\Bomberman\\"
#else
	#define FILEPATH "/home/Documents/Epitech/tek2/CPP/cpp_indie_studio/"
#endif

class Tools
{
public:
static int getNbrRandom(int min, int max);
static std::vector<std::string>
explode(const std::string &str, const std::string &separator);
static std::string getFile(std::string file_name);
static void putFile(std::string file_name, std::string content);
};

#endif
