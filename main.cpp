#include <github_info.h>

#include <iostream>
#include <string>

int main() {
  std::cout << "Hello, World!" << std::endl;

  jjfp::github_info::GithubInfo info{"myapptokenfromgithub"};

  info.print_version();

  const auto me = info.me();

  if (!me) {
    std::cout << "Failed to load user from github" << std::endl;

    return 1;
  }

  std::cout << "User loaded from github: " << me->to_string() << std::endl;
}