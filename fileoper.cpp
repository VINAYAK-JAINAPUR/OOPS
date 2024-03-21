#include<bits/stdc++.h>

using namespace std;

void generateRandomNumbers(const string& filename, int count) {
    ofstream outputFile(filename);
    srand(time(nullptr));
    for (int i = 0; i < count; ++i) {
        int randomNumber = rand() % 50 + 1;
        outputFile << randomNumber << endl;
    }
    outputFile.close();
}

void sortNumbersAndWriteToFile(const string& inputFile, const string& outputFile) {
    ifstream inFile(inputFile);
    vector<int> numbers;
    int num;
    while (inFile >> num) {
        numbers.push_back(num);
    }
    inFile.close();
    sort(numbers.begin(), numbers.end());
    ofstream outFile(outputFile);
    for (int number : numbers) {
        outFile << number << endl;
    }
    outFile.close();
}

int main() {
    const string inputFile = "random_numbers.txt";
    const string sortedFile = "sorted_numbers.txt";
    const int numberOfRandomNumbers = 20;
    generateRandomNumbers(inputFile, numberOfRandomNumbers);
    sortNumbersAndWriteToFile(inputFile, sortedFile);
    return 0;
}
