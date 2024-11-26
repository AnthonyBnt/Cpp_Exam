#ifndef KNN_H
#define KNN_H

#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
class KNN {
private:
    int k;

public:
    KNN();
    KNN(int _k);

    int getK() const;
    vector<int> findNearestNeighbours(const vector<T>& trainData, const T& target);
    double calculateDistance(const T& a, const T& b) const;
};

#endif // KNN_H
