#include <iostream>

int main() {
    //Edit the values only unless you know what you're doing and can responsibly add to, modify, or delete parts of the program to suit your needs.
    //You can also comment out whatever you want if you do not need or want one of the numbers inside the program
    double length = 4;
    double width = 4;
    double height = 4;
    double fourthVariable = 4;
    double fifthVariable = 4;

    double hypervolume = length * width * height * fourthVariable * fifthVariable;

    std::cout << "The hypervolume of the 5D figure is: " << hypervolume << std::endl;

    return 0;
}
