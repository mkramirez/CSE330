#include <cstdlib>
#include <vector>
#include <ctime>

class Random {
public:
    void random_seed();
    static void random_vector(int k, int from, int upto, std::vector<int>& v);
    static int rand_int(int a, int b);
};