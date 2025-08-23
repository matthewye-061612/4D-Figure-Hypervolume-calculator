#include <iostream>
#include <cmath> // for M_PI and pow()

int main8() {
    // Set the radius of the 5D sphere
    double radius = 4;

    // Compute the hypervolume (5D volume) of the sphere
    double hypervolume = (8/15) * std::pow(M_PI, 2) * std::pow(radius, 5);

    std::cout << "The hypervolume of the 5D sphere is: " << hypervolume << std::endl;

    return 0;
}


