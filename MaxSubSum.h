#include <cstdlib>
#include <vector>
#include <ctime>

class mss {
public:
    int max_subseq_sum_cube(const std::vector<int>& vec, int& ops);
    int max_subseq_sum_quad(const std::vector<int>& vec, int& ops);
    int max_subseq_sum_lin(const std::vector<int>& vec, int& ops);
};