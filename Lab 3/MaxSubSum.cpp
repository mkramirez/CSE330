#include "MaxSubSum.h"

int mss::max_subseq_sum_cube(const std::vector<int> &vec, int &ops) {
    int maxSum = 0;
    ops = 0;
    for (int i = 0; i < vec.size(); i++) {
        for (int j = i; j < vec.size(); j++) {
            int thisSum = 0;
            for (int k = i; k <= j; k++) {
                thisSum += vec[k];
                ops += 1; //count number of +
            }
            if (thisSum > maxSum) {
                maxSum = thisSum;
            }
        }
    }
    return maxSum;
}

int mss::max_subseq_sum_quad(const std::vector<int> &vec, int &ops) {
    int maxSum = 0;
    ops = 0;
    for (int i = 0; i < vec.size(); i++) {
        int thisSum = 0;
        for (int j = i; j < vec.size(); j++) {
            thisSum += vec[j];
            ops += 1; //count number of +
            if (thisSum > maxSum) {
                maxSum = thisSum;
            }
        }
    }
    return maxSum;
}

int mss::max_subseq_sum_lin(const std::vector<int> &vec, int &ops) {
    int maxSum = 0;
    int thisSum = 0;
    ops = 0;
    for (int i = 0; i < vec.size(); i++) {
        thisSum += vec[i];
        ops += 1;
        if (thisSum > maxSum) {
            maxSum = thisSum;
        }
        else if (thisSum < 0) {
            thisSum = 0;
        }
    }
    return maxSum;
}
