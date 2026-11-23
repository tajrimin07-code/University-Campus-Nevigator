#include <iostream>
using namespace std;

int main()
{
    string place[5] = {
        "Main Gate",
        "CSE Building",
        "Library",
        "Cafeteria",
        "Auditorium"
    };

    int graph[5][5] = {
        {0, 100, 200, 0, 0},
        {100, 0, 50, 80, 0},
        {200, 50, 0, 0, 70},
        {0, 80, 0, 0, 40},
        {0, 0, 70, 40, 0}
    };

    int distance[5], visited[5], previous[5];
    int source, destination;

    cout << "===== CAMPUS NAVIGATOR =====" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << i << ". " << place[i] << endl;
    }

    cout << "\nEnter starting location (0-4): ";
    cin >> source;

    cout << "Enter destination (0-4): ";
    cin >> destination;

    if (source < 0 || source >= 5 ||
        destination < 0 || destination >= 5)
    {
        cout << "Invalid location!" << endl;
        return 0;
    }

    for (int i = 0; i < 5; i++)
    {
        distance[i] = 9999;
        visited[i] = 0;
        previous[i] = -1;
    }

    distance[source] = 0;

    for (int i = 0; i < 5; i++)
    {
        int minDistance = 9999;
        int current = -1;

        for (int j = 0; j < 5; j++)
        {
            if (visited[j] == 0 &&
                distance[j] < minDistance)
            {
                minDistance = distance[j];
                current = j;
            }
        }

        if (current == -1)
            break;

        visited[current] = 1;

        for (int j = 0; j < 5; j++)
        {
            if (graph[current][j] > 0 &&
                visited[j] == 0)
            {
                int newDistance =
                    distance[current] + graph[current][j];

                if (newDistance < distance[j])
                {
                    distance[j] = newDistance;
                    previous[j] = current;
                }
            }
        }
    }

    if (distance[destination] == 9999)
    {
        cout << "No route found!" << endl;
    }
    else
    {
        cout << "\nShortest Distance: "
             << distance[destination] << " meters" << endl;

        int path[5], count = 0;
        int current = destination;

        while (current != -1)
        {
            path[count] = current;
            count++;
            current = previous[current];
        }

        cout << "Shortest Route: ";

        for (int i = count - 1; i >= 0; i--)
        {
            cout << place[path[i]];

            if (i > 0)
                cout << " -> ";
        }

        cout << endl;
    }

    return 0;
}
