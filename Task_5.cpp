#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

const int NUM_ROWS = 5;
const int NUM_COLS = 10;
const double TICKET_PRICE = 1000.0;

void displaySeatingChart(const vector<vector<char>>& seats) {
    cout << "  ";
    for (int col = 0; col < NUM_COLS; col++) {
        cout << setw(3) << col + 1;
    }
    cout << "\n";

    for (int row = 0; row < NUM_ROWS; row++) {
        cout << char('A' + row) << " ";
        for (int col = 0; col < NUM_COLS; col++) {
            cout << " " << seats[row][col];
        }
        cout << "\n";
    }
}

bool isSeatAvailable(const vector<vector<char>>& seats, int row, int col) {
    return seats[row][col] == 'O';
}

void bookSeat(vector<vector<char>>& seats, int row, int col) {
    seats[row][col] = 'X';
}

int main() {
    vector<vector<char>> seats(NUM_ROWS, vector<char>(NUM_COLS, 'O'));

    cout << "Welcome to the Movie Ticket Booking System\n";

    vector<string> movies = {"Movie A", "Movie B", "Movie C", "Movie D", "Movie E"};
    vector<vector<string>> showtimes = {
        {"10:00 AM", "2:00 PM", "6:00 PM", "9:00 PM"},
        {"10:15 AM", "2:15 PM", "6:15 PM", "9:15 PM"},
        {"10:30 AM", "2:30 PM", "6:30 PM", "9:30 PM"},
        {"10:45 AM", "2:45 PM", "6:45 PM", "9:45 PM"},
        {"11:00 AM", "3:00 PM", "7:00 PM", "10:00 PM"}
    };

    cout << "Select a movie:\n";
    for (int i = 0; i < movies.size(); i++) {
        cout << i + 1 << ". " << movies[i] << "\n";
    }

    int movieChoice;
    cout << "Enter the number of the movie: ";
    cin >> movieChoice;

    if (movieChoice < 1 || movieChoice > movies.size()) {
        cout << "Invalid movie choice.\n";
        return 1;
    }

    string selectedMovie = movies[movieChoice - 1];

    cout << "Select a showtime for " << selectedMovie << ":\n";
    for (int i = 0; i < showtimes[movieChoice - 1].size(); i++) {
        cout << i + 1 << ". " << showtimes[movieChoice - 1][i] << "\n";
    }

    int showtimeChoice;
    cout << "Enter the number of the showtime: ";
    cin >> showtimeChoice;

    if (showtimeChoice < 1 || showtimeChoice > showtimes[movieChoice - 1].size()) {
        cout << "Invalid showtime choice.\n";
        return 1;
    }

    string selectedShowtime = showtimes[movieChoice - 1][showtimeChoice - 1];

    cout << "You have selected " << selectedMovie << " at " << selectedShowtime << ".\n";

    while (true) {
        displaySeatingChart(seats);

        cout << "\nMenu:\n";
        cout << "1. Book a Ticket\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        if (choice == 1) {
            char row;
            int col;

            cout << "Enter row (A-E): ";
            cin >> row;
            row = toupper(row);

            if (row < 'A' || row > 'E') {
                cout << "Invalid row. Please select a valid row (A-E).\n";
                continue;
            }

            cout << "Enter column (1-10): ";
            cin >> col;

            if (col < 1 || col > 10) {
                cout << "Invalid column. Please select a valid column (1-10).\n";
                continue;
            }

            int rowIndex = row - 'A';
            int colIndex = col - 1;

            if (!isSeatAvailable(seats, rowIndex, colIndex)) {
                cout << "Seat " << row << col << " is already booked. Please choose another seat.\n";
            } else {
                bookSeat(seats, rowIndex, colIndex);
                cout << "Seat " << row << col << " booked successfully. The total cost is $" << TICKET_PRICE << "\n";
            }
        } else if (choice == 2) {
            cout << "Thank you for using the Movie Ticket Booking System. Have a great day!\n";
            break;
        } else {
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    }

    return 0;
}

