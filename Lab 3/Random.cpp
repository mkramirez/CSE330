#include "Random.h"

void Random::random_seed() {
    int seed = static_cast<int>(time(nullptr));
    srand(seed);
}

void Random::random_vector(int k, int from, int upto, std::vector<int> &v) {
    int rnum = 0;
    int r33 = 0;
    for (int i = 1; i <= k; i++) {
        rnum = rand_int(from, upto);
        r33 = rand_int(1, 4);
    }
    if (r33 == 3) {
        v.push_back(-rnum);
    }
    else {
        v.push_back(rnum);
    }
}

int Random::rand_int(int a, int b) {
    return a + rand() % (b - a + 1);
}