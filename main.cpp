#include <iostream>
#include "Random.h"
#include "MaxSubSum.h"

int main() {
    std::vector<int> mynums;
    int how_many;
    Random r;
    mss m;
    for (int i = 1; i <= 6; i++) {
        //will run 6 x with 6 different vector sizes
        std::cout << "Vector size? ";
        std::cin >> how_many;
        std::cout << std::endl << std::endl;

        r.random_vector(how_many, 1, 50, mynums);

        int no_ops = 0;
        int maxsum1 = m.max_subseq_sum_cube(mynums, no_ops);
        std::cout << "max_....cube: " << maxsum1 << " " << no_ops << std::endl;

        int maxsum2 = m.max_subseq_sum_quad(mynums, no_ops);
        std::cout << "max_....quad: " << maxsum2 << " " << no_ops << std::endl;

        int maxsum3 = m.max_subseq_sum_lin(mynums, no_ops);
        std::cout << "max_.....lin: " << maxsum3 << " " << no_ops << std::endl;
    }
    return 0;
}