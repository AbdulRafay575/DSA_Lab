#include <iostream>
#include <vector>

using namespace std;

class QuadraticProbingHashTable {
private:
    vector<int> table;
    int capacity;
    int size;

    // Helper function to find the next available position using quadratic probing
    int getNextPosition(int currentPosition, int attempt) {
        return (currentPosition + attempt * attempt) % capacity;
    }

public:
    QuadraticProbingHashTable(int capacity) : capacity(capacity), size(0) {
        table.resize(capacity, -1); // Initialize all positions with -1 (indicating empty)
    }

    // Hash function (simple modulo hashing)
    int hash(int key) {
        return key % capacity;
    }

    // Function to insert a key into the hash table
    void insert(int key) {
        if (size == capacity) {
            cout << "Hash table is full. Cannot insert key " << key << endl;
            return;
        }

        int position = hash(key);
        int attempt = 0;

        while (table[position] != -1) {
            attempt++;
            position = getNextPosition(position, attempt);
        }

        table[position] = key;
        size++;
    }

    // Function to display the hash table
    void display() {
        cout << "Hash Table: ";
        for (int i = 0; i < capacity; i++) {
            if (table[i] != -1) {
                cout << table[i] << " ";
            } else {
                cout << "- ";
            }
        }
        cout << endl;
    }
};

int main() {
    // Example usage of the QuadraticProbingHashTable
    QuadraticProbingHashTable hashTable(10);

    // Insert keys into the hash table
    hashTable.insert(5);
    hashTable.insert(25);
    hashTable.insert(15);
    hashTable.insert(35);
    hashTable.insert(45);

    // Display the hash table
    hashTable.display();

    return 0;
}

