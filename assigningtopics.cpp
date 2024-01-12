#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()
#include <vector>
using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    int totalTopics = 101;
    int students = 5;
    vector<int> topics(totalTopics);

    // Initialize the topics with unique IDs from 1 to 101
    for (int i = 0; i < totalTopics; ++i) {
        topics[i] = i + 1;
    }

    cout << "Total topics: " << totalTopics << endl;
    cout << "Students: " << students << endl;

    cout << "\nTopic distribution:" << endl;

    for (int i = 1; i <= students; ++i) {
        cout << "Student " << i << ": ";

        for (int j = 0; j < totalTopics / students; ++j) {
            if (!topics.empty()) {
                // Generate a random index within the remaining topics
                int randomIndex = rand() % topics.size();
                cout << topics[randomIndex] << " ";
                // Remove the topic to avoid duplication
                topics.erase(topics.begin() + randomIndex);
            }
        }

        cout << endl;
    }

    return 0;
}
