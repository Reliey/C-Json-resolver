#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

#include "json.h"
using namespace json;
int main()
{
    ifstream fin("./test.json");
    stringstream ss;
    ss << fin.rdbuf();
    const string &str = ss.str();

    Json v;
    v.parser(str);

    bool isLogin = v["data"]["isLogin"];
    int current_level = v["data"]["level_info"]["current_level"];
    std::cout << v.str() << std::endl;
    std::cout << isLogin << " " << current_level;
    return 0;
}