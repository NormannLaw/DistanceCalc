#include <cmath>
#include <iostream>
#include <string>

// Helper function: convert degree to rad
double degree_to_rad(double degree) {
    double pi = 3.141592653589793;
    double rad = pi * degree / 180.0;
    return rad;
}

// Use Haversine formula to find distance btw two points on Earth
double find_distance(double lat1, double longi1, double lat2, double longi2) {
    const double r = 6378.0;
    lat1 = degree_to_rad(lat1);
    longi1 = degree_to_rad(longi1);
    lat2 = degree_to_rad(lat2);
    longi2 = degree_to_rad(longi2);

    double temp = sqrt(0.5 * (1 - cos(lat1 - lat2) + cos(lat1) * cos(lat2) * (1 - cos(longi1 - longi2))));
    double d = 2.0 * r * asin(temp);
    
    return d;

}

int main(int argc, char* argv[])
{
    // random initial args
    double lat1 = 90, longi1 = 0, lat2 = -90, longi2 = 0;

    for (int i = 0; i < argc - 1; ++i) {
        std::string key = argv[i];
        std::string val = argv[i + 1];
        if (key == "-lat1") { lat1 = std::stod(val); ++i; }
        else if (key == "-longi1") { longi1 = std::stod(val); ++i; }
        else if (key == "-lat2") { lat2 = std::stod(val); ++i; }
        else if (key == "-longi2") { longi2 = std::stod(val); ++i; }
    }

    std::cout << find_distance(lat1, longi1, lat2, longi2) << std::endl;
}

