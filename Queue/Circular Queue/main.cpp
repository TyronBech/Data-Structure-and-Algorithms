#include "Circular_Queue.h"

// main function
int main(){
    // Declaration of Circular Queue using string as its data type
    Circular_Queue<std::string> names(5);
    int choice;
    std::string data;
    // While loop to continue the program until user exits
    while(true){
        std::system("cls");
        std::cout << "Circular Queue Data Structure" << std::endl;
        std::cout << "1. Enqueue" << std::endl;
        std::cout << "2. Dequeue" << std::endl;
        std::cout << "3. Print" << std::endl;
        std::cout << "4. Is Full" << std::endl;
        std::cout << "5. Empty" << std::endl;
        std::cout << "6. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        // Switch case to check user choice
        switch(choice){
            case 1: // Enqueue case
                if(!names.isFull()){
                    std::cout << "Enter the data: ";
                    std::getline(std::cin >> std::ws, data);
                    names.enqueue(data);
                } else {
                    std::cout << "The Queue is full" << std::endl;
                }
                break;
            case 2: // Dequeue case
                if(!names.empty()){
                    std::cout << "Dequeued data: " << names.dequeue() << std::endl;
                } else {
                    std::cout << "The Queue is empty" << std::endl;
                }
                break;
            case 3: // Print case
                if(!names.empty()){
                    names.print();
                } else {
                    std::cout << "The Queue is empty" << std::endl;
                }
                break;
            case 4: // isFull case
                if(names.isFull()){
                    std::cout << "The Queue is full" << std::endl;
                } else {
                    std::cout << "The Queue is not full" << std::endl;
                }
                break;
            case 5: // Empty case
                if(names.empty()){
                    std::cout << "The Queue is empty" << std::endl;
                } else {
                    std::cout << "The Queue is not empty" << std::endl;
                }
                break;
            case 6: // Exit case
                exit(0);
            default: // Default case if in case user input invalid choice
                std::cout << "That is a invalid choice" << std::endl;
        }
        std::system("pause");
    }
    return 0;
}