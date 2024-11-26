#include "KNN.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <limits>

template <typename T>
KNN<T>::KNN() : k(3) {}

template <typename T>
KNN<T>::KNN(int _k) : k(_k) {
    if (_k <= 0) {
        throw std::invalid_argument("k doit être un entier positif.");
    }
}

template <typename T>
int KNN<T>::getK() const {
    return k;
}

template <typename T>
double KNN<T>::calculateDistance(const T& a, const T& b) const {
    double sum = 0.0;
    for (size_t i = 0; i < a.size(); ++i) {
        sum += std::pow(a[i] - b[i], 2);
    }
    return std::sqrt(sum);
}

template <typename T>
std::vector<int> KNN<T>::findNearestNeighbours(const std::vector<T>& trainData, const T& target) {
    std::vector<std::pair<double, int>> distances;  // Contiendra les distances et les indice

    // Calculer les distances entre le point cible et chaque point dans les données d'entraînement
    for (int i = 0; i < trainData.size(); ++i) {
        double distance = calculateDistance(trainData[i], target);
        distances.push_back(std::make_pair(distance, i));
    }

    // Trier les distances par ordre croissant
    std::sort(distances.begin(), distances.end(), [](const std::pair<double, int>& a, const std::pair<double, int>& b) {
        return a.first < b.first;
    });

    // Récupérer les indices des k plus proches voisins
    std::vector<int> neighbors;
    for (int i = 0; i < k && i < distances.size(); ++i) {
        neighbors.push_back(distances[i].second);
    }

    return neighbors;
}

template class KNN<std::vector<double>>;// template pour des types 'double'
