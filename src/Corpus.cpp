// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>

#include <fstream>
#include <sstream>
#include <exception>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include "../include/Corpus.h"

namespace data_utils {
  torch::Tensor Corpus::get_data(int64_t batch_size) {
    if (std::ifstream file{path_}) {
      std::vector<int64_t> ids;
      for (std::string line; std::getline(file, line);) {
        std::istringstream line_stream(line);
        for (std::string word; line_stream >> word;) {
          ids.push_back(dictionary_.add_word(word));
        }
        // End of sequence marker
        ids.push_back(dictionary_.add_word("<eos>"));
      }
      int64_t num_batches = ids.size() / batch_size;
      return torch::from_blob(ids.data(), {batch_size, num_batches}, torch::TensorOptions().dtype(torch::kInt64)).clone();
    } else {
      throw std::runtime_error("Could not read file at path: " + path_);
    }
  }
}  // namespace data_utils
