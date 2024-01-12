# Assigning_Topics
### Random Topic Distribution Generator

This simple C++ program generates a random distribution of topics among a specified number of students. The generated distribution ensures that each student receives a unique set of topics, avoiding duplication.

## Description

The program uses various standard C++ libraries. It initializes a vector with unique topic IDs and distributes these topics randomly among the specified number of students.

## Code Overview

- Seed Generation: The random number generator is seeded with the current time to ensure different results in each run.
- Initialization: The topics are initialized with unique IDs from 1 to 101.
- Distribution: The program then distributes topics randomly among students, ensuring that each student gets a unique set of topics.

## Output

The program outputs the total number of topics, the number of students, and the topic distribution for each student.
Feel free to modify the 'totalTopics' and 'students' variables in the code to customize the number of topics and students for your use case.
