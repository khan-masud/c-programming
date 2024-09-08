#include <iostream>
#include <string>

using namespace std;

void voting(int n, int candidateVote[], string candidateName[]); // Prototype
void displayCandidatesAndVotes(int n, int candidateVote[], string candidateName[]); // Prototype
void sortCandidatesByVotes(int n, int candidateVote[], string candidateName[]); // Prototype
void displayCurrentWinner(int n, int candidateVote[], string candidateName[]); // Prototype

int main() {
    cout << "------------------------------------------------------------" << endl;
    cout << "                  Simple Voting System" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "Project Group Members : " << endl << endl;
    cout << "1. Abdullah Al Masud\n" << "2. Mashrafi Mubin Ratul\n" << "3. Nasim Ahamed Emon\n" << "4. Asraf Ali" << endl;
    cout << "5. Sohan Ahammed\n" << "6. Jinnatun Nur Aporna\n" << "7. Tanjim Rahman Khan Shafin\n" << "8. Azizur Rahman Arzu" << endl;
    cout << "------------------------------------------------------------" << endl << endl;

    int n;
    cout << "Enter number of candidates: ";
    cin >> n;

    string candidateName[n];
    int candidateVote[n]; // Initialize array to store votes

    for (int i = 0; i < n; i++) { // Input candidates name
        cout << "Enter name of candidate " << i + 1 << ": ";
        cin >> candidateName[i];
    }

    // Initialize votes to 0 for ignoring garbage value
    for (int i = 0; i < n; i++) {
        candidateVote[i] = 0;
    }


    while (true) {         // while (true) is for creating infinite loop so that we can run the program until we terminate the program.
        cout << "\nMenu" << endl;
        cout << "1. Vote" << endl;
        cout << "2. Display candidates and votes" << endl;
        cout << "3. Sort candidates in descending order by votes" << endl;
        cout << "4. Display current winner" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        int menuChoice;
        cin >> menuChoice;

        switch (menuChoice) {
            case 1:
                voting(n, candidateVote, candidateName); // Call voting function
                break;
            case 2:
                displayCandidatesAndVotes(n, candidateVote, candidateName); // Call displayCandidatesAndVotes function
                break;
            case 3:
                sortCandidatesByVotes(n, candidateVote, candidateName); // Call sortCandidatesByVotes function
                break;
            case 4:
                displayCurrentWinner(n, candidateVote, candidateName); // Call displayCurrentWinner function
                break;
            case 5:
                cout << "------------------------------------------------------------" << endl;
                cout << "Exiting the program." << endl;
                cout << "------------------------------------------------------------" << endl;
                return 0; // Terminate the program
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}

void voting(int n, int candidateVote[], string candidateName[]) {
    for(;;)
    {
        int chooseCandidate;
        cout << "Choose candidate: " << endl;
        for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << candidateName[i] << endl; // Display candidates name
        }
    cout << "999. Finish collecting votes." << endl; // Back to the main menu
    cout << "Enter your choice : ";
    cin >> chooseCandidate;

        if (chooseCandidate >= 1 && chooseCandidate <= n) {
            candidateVote[chooseCandidate - 1]++;
            cout << "------------------------------------------------------------" << endl;
            cout << "Vote successfully counted for candidate " << "'"<< candidateName[chooseCandidate - 1] << "'" << "." << endl;
            cout << "------------------------------------------------------------" << endl;
        }
        else if (chooseCandidate == 999)
        {
            break;
        }
        else {
                cout << "------------------------------------------------------------" << endl;
                cout << "Invalid choice. Vote not counted." << endl;
                cout << "------------------------------------------------------------" << endl;
        }
    }

}

void displayCandidatesAndVotes(int n, int candidateVote[], string candidateName[]) {
    cout << "\nCandidates and their votes:" << endl;
    for (int i = 0; i < n; i++) {
        cout << candidateName[i] << " : " << candidateVote[i] << " votes" << endl;
    }
}

void sortCandidatesByVotes(int n, int candidateVote[], string candidateName[]) {
    // Simple bubble sort to sort by votes
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (candidateVote[j] < candidateVote[j + 1]) {
                // Swap votes
                swap(candidateVote[j], candidateVote[j + 1]);

                // Swap names to match the votes
                swap(candidateName[j], candidateName[j + 1]);
            }
        }
    }
    cout << "------------------------------------------------------------" << endl;
    cout << "Candidates sorted by votes in descending order." << endl;
    cout << "------------------------------------------------------------" << endl;
}

void displayCurrentWinner(int n, int candidateVote[], string candidateName[]) {
    int maxVotes = 0;
    int winnerIndex = 0;
    bool tie = false;

    // Find the maximum number of votes and the corresponding candidate
    for (int i = 0; i < n; i++) {
        if (candidateVote[i] > maxVotes) {
            maxVotes = candidateVote[i];
            winnerIndex = i;
        }
        else if (candidateVote[i] == maxVotes) {
            tie = true;  // Set the tie flag if another candidate has the same max votes
        }
    }

    cout << "------------------------------------------------------------" << endl;

    if (tie=true) { // if tie == true
        cout << "Current winner is: None (There is a tie between candidates)" << endl;
    } else {
        cout << "Current winner is " << candidateName[winnerIndex] << " with " << maxVotes << " votes." << endl;
    }

    cout << "------------------------------------------------------------" << endl;
}
