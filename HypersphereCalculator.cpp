#include <iostream>
#include <cmath> // for M_PI and pow()

int main() {
    // Set the radius of the 4D sphere
    double radius = 4;

    // Compute the hypervolume (4D volume) of the sphere
    double hypervolume = 0.5 * std::pow(M_PI, 2) * std::pow(radius, 4);

    std::cout << "The hypervolume of the 4D sphere is: " << hypervolume << std::endl;

    return 0;
}
