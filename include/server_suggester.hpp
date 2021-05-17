// Copyright 2020 Your Name <your_email>

#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_
#include "nlohmann/json.hpp"
#include <iostream>
#include <thread>
#include <fstream>
#include <shared_mutex>
#include <sstream>
#include <ostream>
#include <iomanip>
#include <memory>
#include <string>

class server_suggester {
 public:
  std::string parse_request(const std::string &request) const;
  std::string suggest(const std::string &input) const;

 public:
  static std::unique_ptr<nlohmann::json>  _collection;
  static std::shared_mutex _collection_mutex;
};

[[noreturn]] void update_collection(const std::string &filename_json);
#endif // INCLUDE_HEADER_HPP_
