# ISS Live tracker 
A simple c++ program that retrieves the current location and movement data of the International Space Station (ISS) using an online API.

## About the Project:
This project was created to practice:
- HTTP GET requests in c++
- REST APIs
- JSON parsing
- Loops and repeated API requests
- Displaying API data in the terminal

the program connects to the "Where the ISS at" API (https://wheretheiss.at/w/developer) and retrieves information about the ISS.

## What It Does
the program periodically sends a GET request to the ISS API and displays:
1. ISS ID
2. Latitude
3. Altitude
4. Velocity
5. Timestamp

# Example output : 
ID:25544
Latitude:24.0516
Altitude:415.129
Velocity:27602.6
Timestamp:1787595547

# Technologies used
1. C++
2. cpp-httplib
3. nlohmann/json
4. REST API
5. Git & Github
