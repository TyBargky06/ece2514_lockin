#include <iostream>

int main(){
    int max_entries{10};
    int* table{new int[max_entries]};

    std::cout << "old table address = " << table << std::endl;

    int num_entries{max_entries};

    for(int i = 0; i < num_entries; i++){
        table[i] = i * 10;
    }

    max_entries = max_entries * 2;
    int* new_table{new int[max_entries]};

    std::cout << "new table address = " << new_table << std::endl;

    for(int i = 0; i < num_entries; i++){
        new_table[i] = table[i];
    }

    for(int i = num_entries; i < max_entries; i++){
        new_table[i] = 0;
    }

    delete[] table;
    table = new_table;

    for(int i = 0; i < max_entries; i++){
        std::cout << "table[" << i << "] = " << table[i] << std::endl;
    }

    delete[] table;
    return 0;
}