#include "Queue.h"

// main function
int main(){
    // Declaration of Queue using std::string as its data type
    Queue<std::string> names;
    std::string data;
    unsigned choice;
    // While loop to continue the program until user exits
    while(true){
        std::system("cls");
        // Menu choices
        std::cout << "Queue Data Structure" << std::endl;
        std::cout << "1. Enqueue" << std::endl;
        std::cout << "2. Dequeue" << std::endl;
        std::cout << "3. Peek" << std::endl;
        std::cout << "4. Print" << std::endl;
        std::cout << "5. Size" << std::endl;
        std::cout << "6. Empty" << std::endl;
        std::cout << "7. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        // Switch case to check user choice
        switch(choice){
            case 1: // Enqueue case
                std::cout << "Enter the data: ";
                std::getline(std::cin >> std::ws, data);
                names.enqueue(data);
                break;
            case 2: // Dequeue case
                if(names.empty()){
                    std::cout << "The Queue is empty" << std::endl;
                } else {
                    std::cout << "Dequeued data: " << names.dequeue() << std::endl;
                }
                break;
            case 3: // Peek case
                if(names.empty()){
                    std::cout << "The Queue is empty" << std::endl;
                } else {
                    std::cout << "Peek data: " << names.peek() << std::endl;
                }
                break;
            case 4: // Print case
                if(names.empty()){
                    std::cout << "The Queue is empty" << std::endl;
                } else {
                    names.print();
                }
                break;
            case 5: // Size case
                std::cout << "Current size: " << names.size() << std::endl;
                break;
            case 6: // Empty case
                if(names.empty()){
                    std::cout << "The Queue is empty" << std::endl;
                } else{
                    std::cout << "The Queue is not empty" << std::endl;
                }
                break;
            case 7: // Exit case
                exit(0);
            // Default case for invalid choice
            default: std::cout << "That is a invalid result" << std::endl;
        }
        std::system("pause");
    }
    return 0;
}