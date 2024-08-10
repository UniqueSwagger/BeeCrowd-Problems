#include <iostream>
#include <iomanip>  // for std::fixed and std::setprecision
#include <vector>
#include <string>
#include <sstream>  // for std::ostringstream

using namespace std;

int main() {
    vector<string> outputMessages;  // To store all messages and results
    int option;
    
    while (true) {
        float scores[2];
        int validScores = 0;
        
        // Read and validate the first score
        while (validScores < 2) {
            float input;
            cin >> input;
            
            if (input < 0 || input > 10) {
                outputMessages.push_back("nota invalida");
            } else {
                scores[validScores] = input;
                validScores++;
            }
        }
        
        // Calculate and store the average
        float average = (scores[0] + scores[1]) / 2;
        
        // Format the average to 2 decimal places
        ostringstream oss;
        oss << fixed << setprecision(2) << average;
        string formattedAverage = oss.str();
        
        // Add the average to output messages
        outputMessages.push_back("media = " + formattedAverage);
        
        // Prompt for a new calculation or termination
        outputMessages.push_back("novo calculo (1-sim 2-nao)");
        cin >> option;
        
        // Validate the option input
        while (option != 1 && option != 2) {
            outputMessages.push_back("novo calculo (1-sim 2-nao)");
            cin >> option;
        }
        
        if (option == 2) {
            break;  // Exit the loop and end the program
        }
    }
    
    // Print all the messages and results after the loop ends using a normal for loop
    for (size_t i = 0; i < outputMessages.size(); ++i) {
        cout << outputMessages[i] << endl;
    }

    return 0;
}
