#include <cstdlib>
#include <vector>
#include <ctime>

class mss {
public:
    static int max_subseq_sum_cube(const std::vector<int>& vec, int& ops);
    static int max_subseq_sum_quad(const std::vector<int>& vec, int& ops);
    static int max_subseq_sum_lin(const std::vector<int>& vec, int& ops);
};