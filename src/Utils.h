#pragma once
#include <vector>

class Utils {
public:
    static bool compare(std::vector<std::string>& v, int i, int j);
    static void InitVector(std::vector<int>& nums, int upper);
    static bool VerifySort(std::vector<int>& nums);
    static bool VerifySort(std::vector<int>& nums, int begin, int end);
};
