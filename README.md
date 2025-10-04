### 1. Description -- DistanceCalc mini program

The purpose of this little toy project is to calculate the spherical distance between two points on Earth, given their latitudes and longitudes. For example, Shanghai
(China) has a coordinate of 31.2 degrees N and 121.4 degrees E, while Taipei (Taiwan) has 25 degrees N and 121.5 degrees E; we may find the spherical distance between
those two cities is 690.236km. This value is calculated with the help of Haversine formula, and it is very close to my rough measurement on GoogleMap (686km).

The project, named DistanceCalc, is basically a C++ implementation of the Haversine formula. The basic assumption is that Earth is a perfect sphere with radius 6378km
(not a super precise assumption though). By having the user input latitude/longitude for the two target points respectively, the program will output the spherical
distance between two points, in unit of km.

The project was implemented by me when I was in high school (since I was bored in the Geography classes...) The initial implementation was in Java, but now I want
to refamiliar myself with C++.

### 2. Usage

##  2.1 Installation 
 
 To run DistanceCalc on your local, please cd to your target folder and run the following in Command Prompt / Terminal
     
```bash
git clone https://github.com/NormannLaw/DistanceCalc/
```
     

##  2.2 Testing

To test the program, please use the following command:
     
```bash

DistanceCalc.exe -lat1 <Latitude of pt1> -longi1 <Longitude of pt1> -lat2 <Latitude of pt2> -longi2 <Longitude of pt2>

```
     

     Note: A. All latitudes/longitudes must be in unit of degrees.
           B. Distance output is in unit of km
           C. Northern Latitude -- Positive angle; Southern -- Negative. Eastern Longitude -- Positive; Western -- Negative.
             e.g., Honolulu 21.3 N, 157.8 W -- (21.3, -157.8)

### 3. For help
   Contact Norman Luo via email: mluo3@hawaii.edu

     
