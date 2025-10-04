// C++ program to find closet point
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip> 

using namespace std;

// Function to compute Euclidean distance between two points
double distance(const vector<double>& p1, const vector<double>& p2) {
    return sqrt((p1[0] - p2[0]) * (p1[0] - p2[0]) +
                    (p1[1] - p2[1]) * (p1[1] - p2[1]));
}

// Function that returns the smallest distance 
// between any pair of points
double minDistance(const vector<vector<double>>& points) {
    int n = points.size();
    
    double minDist = 1e9;

    // Brute force to check all pairs
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            double dist = distance(points[i], points[j]);
            if (dist < minDist) {
                minDist = dist;
            }
        }
    }
    
    // Return the smallest distance
    return minDist;  
}

int main() {
    vector<vector<double>> points = {{-1, -2}, {0, 0}, {1, 2}, {2, 3}};

    double res = minDistance(points);

    cout << fixed << setprecision(6) << res << endl;

    return 0;
}
