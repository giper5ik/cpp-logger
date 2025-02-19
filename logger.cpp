#include <iostream>
// TODO to connect logger
// 1.c/c++ => general => additional include directories => spdlog incl
// 2. Перейдите в раздел Configuration Properties → C/C++ → Command Line.
//В поле Additional Options добавьте флаг / utf - 8.
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
int main()
{
   AllocConsole();
   auto console = spdlog::stdout_color_mt("console");
   console->error("Kazahstan threats of bombing");
}

