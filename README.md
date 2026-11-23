# University Campus Navigator

## Project Overview
University Campus Navigator is a simple C++ project that helps users find the shortest route between different locations on a university campus.

This project uses **Dijkstra's Shortest Path Algorithm** to calculate the minimum distance between a selected starting point and destination.

## Project Objectives
- To find the shortest route between two campus locations.
- To calculate the minimum distance between locations.
- To understand the practical use of Graph Theory.
- To implement Dijkstra's Algorithm using C++.

## Campus Locations
Our project includes five campus locations:

1. Main Gate
2. CSE Building
3. Library
4. Cafeteria
5. Auditorium

## Algorithm Used
**Dijkstra's Shortest Path Algorithm**

Dijkstra's Algorithm is used to find the shortest distance between two locations in a weighted graph.

## Technologies Used
- Programming Language: C++
- IDE: Code::Blocks
- Algorithm: Dijkstra's Shortest Path Algorithm
- Data Structure: 2D Array (Adjacency Matrix)

## How the Project Works
1. The program displays all available campus locations.
2. The user selects a starting location.
3. The user selects a destination.
4. The program applies Dijkstra's Algorithm.
5. It calculates the shortest distance.
6. Finally, it displays the shortest route and total distance.

## Sample Output

===== CAMPUS NAVIGATOR =====
0. Main Gate
1. CSE Building
2. Library
3. Cafeteria
4. Auditorium

Enter starting location (0-4): 4
Enter destination (0-4): 1

Shortest Distance: 120 meters
Shortest Route: Auditorium -> Cafeteria -> CSE Building

## Project Limitations
- The project includes only five campus locations.
- The distances are sample/demo values, not actual measured campus distances.
- The program works through a console interface.
- It does not use GPS or a real-time map.

## Future Improvements
- Add more campus locations.
- Use actual measured campus distances.
- Develop a graphical user interface.
- Add GPS and real-time navigation features.

## Conclusion
This project demonstrates how Dijkstra's Shortest Path Algorithm can be used to solve a basic campus navigation problem. It also helps us understand the practical application of Graph Theory and shortest path algorithms.

## GitHub Repository
[University Campus Navigator – Source Code](https://github.com/tajrimin07-code/University-Campus-Nevigator)
